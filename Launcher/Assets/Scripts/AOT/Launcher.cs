using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using HybridCLR;
using System.Linq;
using System.Text;
using Newtonsoft.Json;

public class Launcher : MonoBehaviour
{
    [Header("UI (请从场景中拖拽)")]
    public Slider progressBar;
    public Text statusText;

    [Header("框架核心配置")]
    public FrameworkConfig config;

    [Header("调试选项")]
    [Tooltip("勾选后，每次启动都会清空本地缓存。发布时请务務必取消勾选！")]
    public bool DevelopMode = true;

    private bool isExtracting = false;
    // [修改] 这个变量现在存储的是替换占位符后的URL
    private string _platformSpecificServerUrl;
    async void Start()
    {
        Application.runInBackground = true;
        if (config == null)
        {
            UpdateStatus("致命错误: 框架配置(FrameworkConfig)未在Inspector中设置！");
            return;
        }
        // [核心修改] 使用 string.Replace 替换占位符
        string platformName = GetPlatformName();
        _platformSpecificServerUrl = config.ServerUrl.Replace("[PlatformName]", platformName);
        if (DevelopMode)
        {
            string path = Application.persistentDataPath;
            if (Directory.Exists(path))
            {
                Directory.Delete(path, true);
                Debug.LogWarning($"[Launcher-DevMode] 已强制清空本地缓存目录: {path}");
            }
        }
        Debug.Log(_platformSpecificServerUrl);
        // 初始化UI
        UpdateProgress(0);
        UpdateStatus("正在初始化...");

        try
        {
            await ExtractFirstPackRes();
            await LoadMetadataForAOTAssemblies();
            await CheckAndUpdate();
            await LoadGame();
        }
        catch (Exception e)
        {
            UpdateStatus($"出现致命错误: {e.Message}");
            Debug.LogError(e);
        }
    }

    private async UniTask ExtractFirstPackRes()
    {
        string persistentDataPath = Application.persistentDataPath;

        if (!Directory.Exists(persistentDataPath) || !Directory.EnumerateFileSystemEntries(persistentDataPath).Any())
        {
            isExtracting = true;
            UpdateStatus("首次启动，正在解压基础资源...");
            string streamingAssetsPath = Application.streamingAssetsPath;

            // Note: This copy logic needs a manifest file to work reliably on Android.
            // For now, we proceed assuming it's mainly for Editor/PC or the manifest is handled elsewhere.
            await CopyDirectoryAsync(streamingAssetsPath, persistentDataPath);
            Debug.Log("基础资源解压完成。");
            isExtracting = false;
        }
    }

    private async UniTask LoadMetadataForAOTAssemblies()
    {
        UpdateStatus("初始化运行时环境...");
        foreach (var aotDllName in config.AotMetaAssemblyFiles)
        {
            string dllPath = Path.Combine(Application.streamingAssetsPath, aotDllName);
            byte[] dllBytes = await ReadStreamingAssetBytesAsync(dllPath);
            if (dllBytes != null)
            {
                LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, HomologousImageMode.SuperSet);
                if (err != LoadImageErrorCode.OK)
                {
                    Debug.LogError($"加载AOT元数据DLL失败: {aotDllName}, 错误码: {err}");
                }
            }
            else
            {
                Debug.LogWarning($"未在StreamingAssets中找到AOT元数据DLL: {aotDllName}");
            }
        }
    }

    private async UniTask CheckAndUpdate()
    {
        while (isExtracting) await UniTask.Delay(100);
        UpdateStatus("正在连接服务器检查更新...");

        string manifestName = "version.json";
        Dictionary<string, FileManifest> serverManifestDict = new Dictionary<string, FileManifest>();
        Dictionary<string, FileManifest> localManifestDict = new Dictionary<string, FileManifest>();

        try
        {// [修改] 使用替换后的URL来拼接请求地址
            string manifestUrl = Path.Combine(_platformSpecificServerUrl, manifestName);
            using (UnityWebRequest www = UnityWebRequest.Get(manifestUrl))
            {
                www.timeout = 5;
                await www.SendWebRequest(); // Use direct await

                if (www.result != UnityWebRequest.Result.Success)
                {
                    throw new Exception($"获取服务器清单失败: {www.error}");
                }

                VersionManifestWrapper serverWrapper = JsonConvert.DeserializeObject<VersionManifestWrapper>(www.downloadHandler.text);
                if (serverWrapper != null && serverWrapper.FileList != null)
                {
                    serverManifestDict = serverWrapper.FileList.ToDictionary(entry => entry.file, entry => entry.manifest);
                }
            }
        }
        catch (Exception e)
        {
            UpdateStatus("连接更新服务器失败，将以本地版本启动。");
            Debug.LogWarning($"获取服务器版本清单失败: {e.Message}");
            await UniTask.Delay(1000);
            return;
        }

        string localManifestPath = Path.Combine(Application.persistentDataPath, manifestName);
        byte[] localManifestBytes = await ReadPersistentDataBytesAsync(localManifestPath);
        if (localManifestBytes != null)
        {
            string json = Encoding.UTF8.GetString(localManifestBytes);
            VersionManifestWrapper localWrapper = JsonConvert.DeserializeObject<VersionManifestWrapper>(json);
            if (localWrapper != null && localWrapper.FileList != null)
            {
                localManifestDict = localWrapper.FileList.ToDictionary(entry => entry.file, entry => entry.manifest);
            }
        }

        List<string> downloadList = serverManifestDict
            .Where(serverFile => !localManifestDict.ContainsKey(serverFile.Key) || localManifestDict[serverFile.Key].md5 != serverFile.Value.md5)
            .Select(p => p.Key)
            .ToList();

        if (downloadList.Count == 0)
        {
            UpdateStatus("已是最新版本！");
            await UniTask.Delay(500);
            return;
        }

        long totalDownloadSize = downloadList.Sum(file => serverManifestDict[file].size);
        long currentDownloadedSize = 0;

        for (int i = 0; i < downloadList.Count; i++)
        {
            string fileName = downloadList[i];
            // [修改] 使用替换后的URL来拼接下载地址
            string fileUrl = Path.Combine(_platformSpecificServerUrl, fileName);

            using (UnityWebRequest www = UnityWebRequest.Get(fileUrl))
            {
                var asyncOp = www.SendWebRequest();
                while (!asyncOp.isDone)
                {
                    long downloadedBytes = (long)www.downloadedBytes;
                    long currentFileDownloaded = downloadedBytes > 0 ? downloadedBytes : (long)(asyncOp.progress * serverManifestDict[fileName].size);
                    float totalProgress = totalDownloadSize > 0 ? (float)(currentDownloadedSize + currentFileDownloaded) / totalDownloadSize : 0;
                    UpdateStatus($"下载中({i + 1}/{downloadList.Count}): {fileName} - {ToReadableSize(currentFileDownloaded)}/{ToReadableSize(serverManifestDict[fileName].size)}");
                    UpdateProgress(totalProgress);
                    await UniTask.Yield();
                }

                if (www.result == UnityWebRequest.Result.Success)
                {
                    string filePath = Path.Combine(Application.persistentDataPath, fileName);
                    Directory.CreateDirectory(Path.GetDirectoryName(filePath));
                    await File.WriteAllBytesAsync(filePath, www.downloadHandler.data);
                    currentDownloadedSize += serverManifestDict[fileName].size;
                }
                else
                {
                    throw new Exception($"下载文件失败: {fileName} from {fileUrl}. Error: {www.error}");
                }
            }
        }

        string serverManifestJson = JsonConvert.SerializeObject(new VersionManifestWrapper { FileList = serverManifestDict.Select(p => new VersionEntry { file = p.Key, manifest = p.Value }).ToList() });
        await File.WriteAllTextAsync(localManifestPath, serverManifestJson);
        UpdateStatus("更新完成！");
        await UniTask.Delay(500);
    }
    public static string GetPlatformName()
    {
#if UNITY_EDITOR
        switch (UnityEditor.EditorUserBuildSettings.activeBuildTarget)
        {
            case UnityEditor.BuildTarget.Android: return "Android";
            case UnityEditor.BuildTarget.iOS: return "iOS";
            case UnityEditor.BuildTarget.StandaloneWindows:
            case UnityEditor.BuildTarget.StandaloneWindows64: return "StandaloneWindows64";
            case UnityEditor.BuildTarget.StandaloneOSX: return "StandaloneOSX";
            default: return UnityEditor.EditorUserBuildSettings.activeBuildTarget.ToString();
        }
#else
        switch (Application.platform)
        {
            case RuntimePlatform.Android:           return "Android";
            case RuntimePlatform.IPhonePlayer:      return "iOS";
            case RuntimePlatform.WindowsPlayer:     return "StandaloneWindows64";
            case RuntimePlatform.OSXPlayer:         return "StandaloneOSX";
            default:                                return Application.platform.ToString();
        }
#endif
    }
    private async UniTask LoadGame()
    {
        UpdateStatus("正在加载游戏...");

        string hotfixDllName = "Hotfix.dll";
        byte[] dllBytes = null;

        string hotfixDllPathPersistent = Path.Combine(Application.persistentDataPath, hotfixDllName);
        dllBytes = await ReadPersistentDataBytesAsync(hotfixDllPathPersistent);

        if (dllBytes == null)
        {
            Debug.Log($"未在可写目录找到 {hotfixDllName}, 尝试从包体加载。");
            string hotfixDllPathStreaming = Path.Combine(Application.streamingAssetsPath, hotfixDllName);
            dllBytes = await ReadStreamingAssetBytesAsync(hotfixDllPathStreaming);
        }

        if (dllBytes == null)
        {
            throw new Exception($"热更新DLL ({hotfixDllName}) 在任何位置都找不到！");
        }

        Assembly hotfixAssembly = Assembly.Load(dllBytes);
        UpdateStatus("启动热更新逻辑...");

        Type entryType = hotfixAssembly.GetType("GameEntry");
        MethodInfo entryMethod = entryType?.GetMethod("StartGame", new Type[] { typeof(Assembly) });
        if (entryMethod != null)
        {
            entryMethod.Invoke(null, new object[] { hotfixAssembly });
        }
        else
        {
            throw new Exception("在Hotfix.dll中找不到入口方法 GameEntry.StartGame(Assembly)!");
        }

        if (this.gameObject.transform.parent != null)
        {
            this.gameObject.transform.parent.gameObject.SetActive(false);
        }
        else
        {
            this.gameObject.SetActive(false);
        }
    }

    // --- 辅助方法 ---

    private async UniTask CopyDirectoryAsync(string sourceDir, string destinationDir)
    {
#if UNITY_EDITOR || UNITY_STANDALONE
        if (!Directory.Exists(sourceDir)) return;
        var allFiles = Directory.GetFiles(sourceDir, "*.*", SearchOption.AllDirectories);
        for (int i = 0; i < allFiles.Length; i++)
        {
            string filePath = allFiles[i];
            if (filePath.EndsWith(".meta")) continue;

            UpdateProgress((float)(i + 1) / allFiles.Length);

            string relativePath = filePath.Substring(sourceDir.Length + 1).Replace("\\", "/");
            string destPath = Path.Combine(destinationDir, relativePath);

            Directory.CreateDirectory(Path.GetDirectoryName(destPath));

            byte[] bytes = await ReadStreamingAssetBytesAsync(filePath);
            if (bytes != null)
            {
                await File.WriteAllBytesAsync(destPath, bytes);
            }
        }
#else
        // On mobile, you need a pre-generated file list to copy from StreamingAssets.
        Debug.LogWarning("CopyDirectoryAsync on mobile requires a manifest file to work correctly, this step may be skipped.");
        await UniTask.CompletedTask;
#endif
    }

    /// <summary>
    /// [FIXED] Uses a more robust method to read from StreamingAssets.
    /// </summary>
    private async UniTask<byte[]> ReadStreamingAssetBytesAsync(string path)
    {
        using (UnityWebRequest www = UnityWebRequest.Get(path))
        {
            await www.SendWebRequest(); // Directly await the operation

            if (www.result == UnityWebRequest.Result.Success)
            {
                return www.downloadHandler.data;
            }
            else
            {
                Debug.LogError($"[ReadStreamingAssetBytesAsync] Failed to load from {path}. Error: {www.error}");
                return null;
            }
        }
    }

    private async UniTask<byte[]> ReadPersistentDataBytesAsync(string path)
    {
        if (File.Exists(path))
        {
            try
            {
                return await File.ReadAllBytesAsync(path);
            }
            catch (Exception e)
            {
                Debug.LogError($"[ReadPersistentDataBytesAsync] 读取文件失败: {path}, Error: {e.Message}");
                return null;
            }
        }
        return null;
    }

    private void UpdateStatus(string text)
    {
        if (statusText != null) statusText.text = text;
        Debug.Log($"[Launcher] {text}");
    }

    private void UpdateProgress(float value)
    {
        if (progressBar != null) progressBar.value = value;
    }

    private string ToReadableSize(long bytes)
    {
        if (bytes < 1024) return $"{bytes} B";
        if (bytes < 1024 * 1024) return $"{(double)bytes / 1024:F2} KB";
        return $"{(double)bytes / (1024 * 1024):F2} MB";
    }
}


