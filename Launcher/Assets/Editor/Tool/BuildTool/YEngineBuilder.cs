using UnityEditor;
using UnityEngine;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Collections.Generic;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;
using System.Text;
using System.Collections;
using Newtonsoft.Json;

public class YEngineBuilder
{
    private const string HotfixAssemblyName = "Hotfix";
    private const string StubBaseClassName = "HotfixStub";
    private const string AOTStubDir = "Assets/Scripts/AOT/Stubs";
    private const string HotfixResRoot = "Assets/GameRes_Hotfix";
    // --- 【修改点 1】: 将固定的输出目录常量修改为基础目录 ---
    private const string HotfixOutputRoot = "HotfixOutput";
    private const string ConfigsABName = "configs.ab";

    [MenuItem("YEngine/准备母包资源", false, 100)]
    public static void CopyFilesMenu()
    {
        CopyAOTAssemblies.CopyFilesMenu();
    }

    [MenuItem("YEngine/关于YEngine", false, 0)]
    public static void ShowWindow()
    {
        AboutWindow.ShowWindow();
    }

    // --- 【修改点 2】: 拆分一键打包菜单 ---

    [MenuItem("YEngine/【一键打包】/Build For Windows", false, 1000)]
    public static void UltimateBuild_Windows()
    {
        // 指定目标平台
        BuildTarget target = BuildTarget.StandaloneWindows64;
        // 调用核心打包逻辑
        UltimateBuild(target);
    }

    [MenuItem("YEngine/【一键打包】/Build For Android", false, 1001)]
    public static void UltimateBuild_Android()
    {
        BuildTarget target = BuildTarget.Android;
        UltimateBuild(target);
    }

    [MenuItem("YEngine/【一键打包】/Build For Mac", false, 1002)]
    public static void UltimateBuild_Mac()
    {
        BuildTarget target = BuildTarget.StandaloneOSX;
        UltimateBuild(target);
    }
   
    // --- 【修改点 3】: 修改原有的 UltimateBuild 方法，使其接受一个 BuildTarget 参数 ---
    // 这个方法现在是私有的，作为内部核心实现
    private static void UltimateBuild(BuildTarget buildTarget)
    {
        // --- 【修改点 4】: 获取平台专属的输出路径 ---
        string outputDir = GetPlatformBuildPath(buildTarget);

        Debug.Log($"================ 开始为平台 [{buildTarget}] 一键打包，输出到 [{outputDir}] ================");

        // --- 【修改点 5】: 自动切换当前激活的 Build Target ---
        if (EditorUserBuildSettings.activeBuildTarget != buildTarget)
        {
            Debug.Log($"正在切换激活平台到: {buildTarget}...");
            if (!EditorUserBuildSettings.SwitchActiveBuildTarget(BuildPipeline.GetBuildTargetGroup(buildTarget), buildTarget))
            {
                Debug.LogError($"打包中断：切换平台到 {buildTarget} 失败！");
                return;
            }
            Debug.Log("平台切换成功！");
        }

        FrameworkConfig config = GetConfig();
        if (config == null) { Debug.LogError("打包中断：找不到 FrameworkConfig.asset 文件！"); return; }

        if (!EditorSceneManager.SaveCurrentModifiedScenesIfUserWantsTo())
        {
            Debug.LogError("打包中断：请先保存当前场景的修改。");
            return;
        }
        string originalScenePath = SceneManager.GetActiveScene().path;

        try
        {
            // DeleteAllStubScriptFiles();
            var hotfixTypes = GenerateStubs();

            if (hotfixTypes.Any())
            {
                InjectReferences(hotfixTypes);
            }
            else
            {
                Debug.LogWarning("项目中没有找到任何热更新脚本(MonoBehaviour)，跳过注入步骤。");
            }

            // --- 【修改点 6】: 将平台输出路径传递给打包方法 ---
            BuildAllResources(config, outputDir, buildTarget);
        }
        catch (System.Exception e)
        {
            Debug.LogError($"打包过程中发生严重错误: {e}");
        }
        finally
        {
            if (!string.IsNullOrEmpty(originalScenePath) && File.Exists(originalScenePath))
            {
                EditorSceneManager.OpenScene(originalScenePath);
            }
            Debug.Log($"================ 平台 [{buildTarget}] 打包流程结束 ================");
        }

        EditorUtility.RevealInFinder(outputDir);
    }

    // --- 【新增方法】: 根据BuildTarget获取平台专属的输出路径 ---
    private static string GetPlatformBuildPath(BuildTarget target)
    {
        // 使用 BuildTarget.ToString() 来获取平台名称，这是最直接且与HybridCLR等工具链保持一致的方式
        return Path.Combine(HotfixOutputRoot, target.ToString());
    }

    // ... (你原来的 DeleteAllStubScriptFiles, ClearAllStubComponentsMenu 等方法保持不变) ...
    // ... (GenerateStubs, InjectReferences, ClearAllStubComponents, ProcessGameObject, AnalyzeComponentReferences 等方法保持不变) ...

    // --- 【修改点 7】: 修改 BuildAllResources 及其调用的方法，以接收和使用平台相关的路径和Target ---
    private static void BuildAllResources(FrameworkConfig config, string outputDir, BuildTarget buildTarget)
    {
        ApplyLabelsAndGenerateMaps();
        CompileHotfixDLLs(outputDir, buildTarget);
        BuildAllAssetBundles(outputDir, buildTarget);
        GenerateVersionManifest(outputDir);
        PrepareFirstPackRes(config, outputDir); // 注意：PrepareFirstPackRes也需要知道源目录
    }

    // ApplyLabelsAndGenerateMaps 方法保持不变，因为它不涉及输出路径

    private static void CompileHotfixDLLs(string outputDir, BuildTarget buildTarget)
    {
        if (!Directory.Exists(outputDir)) Directory.CreateDirectory(outputDir);
        // 使用传入的 buildTarget
        HybridCLR.Editor.Commands.CompileDllCommand.CompileDll(buildTarget);
        string hotfixDllSrcDir = Path.Combine(HybridCLR.Editor.Settings.HybridCLRSettings.Instance.hotUpdateDllCompileOutputRootDir, buildTarget.ToString());
        // 拷贝到平台专属目录
        File.Copy(Path.Combine(hotfixDllSrcDir, "Hotfix.dll"), Path.Combine(outputDir, "Hotfix.dll"), true);
    }

    private static void BuildAllAssetBundles(string outputDir, BuildTarget buildTarget)
    {
        if (!Directory.Exists(outputDir)) Directory.CreateDirectory(outputDir);
        // 使用平台专属目录和传入的 buildTarget
        BuildPipeline.BuildAssetBundles(outputDir, BuildAssetBundleOptions.None, buildTarget);
    }

    private static void GenerateVersionManifest(string outputDir)
    {
        VersionManifestWrapper manifestWrapper = new VersionManifestWrapper();
        // 扫描平台专属目录
        foreach (var file in Directory.GetFiles(outputDir, "*", SearchOption.AllDirectories))
        {
            if (file.EndsWith(".manifest") || file.EndsWith(".meta") || Directory.Exists(file)) continue;
            // 相对路径的计算基准也要变成平台专属目录
            string relativePath = file.Substring(outputDir.Length + 1).Replace("\\", "/");
            manifestWrapper.FileList.Add(new VersionEntry { file = relativePath, manifest = new FileManifest { md5 = GetFileMD5(file), size = new FileInfo(file).Length } });
        }
        // 生成到平台专属目录
        File.WriteAllText(Path.Combine(outputDir, "version.json"), JsonConvert.SerializeObject(manifestWrapper, Formatting.Indented));
    }

    private static void PrepareFirstPackRes(FrameworkConfig config, string sourceDir)
    {
        string streamingAssets = Application.streamingAssetsPath;
        if (Directory.Exists(streamingAssets)) Directory.Delete(streamingAssets, true);
        Directory.CreateDirectory(streamingAssets);
        // CopyAOTAssemblies 已经是基于 activeBuildTarget 工作的，这里不用改
        CopyAOTAssemblies.CopyFiles(EditorUserBuildSettings.activeBuildTarget);

        List<string> filesToCopy = new List<string>();
        if (config.IncludeHotfixDllInFirstPack) filesToCopy.Add("Hotfix.dll");
        filesToCopy.AddRange(config.FirstPackABNames);
        filesToCopy.Add("version.json"); // 通常version.json也需要进首包

        foreach (var fileName in filesToCopy.Distinct())
        {
            // 从平台专属的源目录拷贝
            string srcPath = Path.Combine(sourceDir, fileName);
            if (File.Exists(srcPath))
            {
                File.Copy(srcPath, Path.Combine(streamingAssets, fileName), true);
            }
            else
            {
                Debug.LogWarning($"[PrepareFirstPackRes] 首包文件未在输出目录中找到，已跳过: {srcPath}");
            }
        }
        AssetDatabase.Refresh();
    }

    // ... (你原来的 GetHotfixTypes, GetAOTStubType, GetFriendlyTypeName, GetGameObjectPath, GetFileMD5, GetConfig 等辅助方法保持不变) ...

    #region 保持不变的原有代码
    // 为了代码的完整性，将不需要修改的方法折叠在这里
    // 你只需将上面修改过的代码替换或合并到你现有的 YEngineBuilder.cs 中即可

    [MenuItem("YEngine/清理所有存根文件", false, 500)]
    private static void ClearAllStubComponentsMenu()
    {
        Debug.Log("--- 开始清理所有存根组件 ---");
        DeleteAllStubScriptFiles();
        ClearAllStubComponents();
        AssetDatabase.SaveAssets();
        Debug.Log("✅ 清理完毕！");
    }

    public static void DeleteAllStubScriptFiles()
    {
        Debug.Log($"--- 准备删除存根脚本目录: {AOTStubDir} ---");
        if (Directory.Exists(AOTStubDir))
        {
            try
            {
                Directory.Delete(AOTStubDir, true);
                AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
                Debug.Log($"✅ 成功删除目录及其所有内容: {AOTStubDir}");
            }
            catch (System.Exception e)
            {
                Debug.LogError($"删除目录 '{AOTStubDir}' 时发生错误: {e.Message}");
            }
        }
        else
        {
            Debug.Log("目录不存在，无需删除。");
        }
    }

    private static List<System.Type> GenerateStubs()
    {
        Debug.Log("--- 步骤 1.1: 正在生成/更新存根(Stub)脚本 ---");
        if (!Directory.Exists(AOTStubDir)) Directory.CreateDirectory(AOTStubDir);

        var hotfixMonoTypes = GetHotfixTypes();
        var currentStubFiles = Directory.GetFiles(AOTStubDir, "*.cs").ToDictionary(p => Path.GetFileNameWithoutExtension(p), p => p);
        var hotfixTypeNames = hotfixMonoTypes.Select(t => t.Name).ToHashSet();

        foreach (var type in hotfixMonoTypes)
        {
            StringBuilder fieldDeclarations = new StringBuilder();
            HashSet<string> requiredNamespaces = new HashSet<string> { "UnityEngine" };
            FieldInfo[] fields = type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
            foreach (var field in fields)
            {
                if (field.IsPublic || field.GetCustomAttribute<SerializeField>() != null)
                {
                    if (field.FieldType.Namespace != null) requiredNamespaces.Add(field.FieldType.Namespace);
                    fieldDeclarations.AppendLine($"    public {GetFriendlyTypeName(field.FieldType)} {field.Name};");
                }
            }
            StringBuilder usingStatements = new StringBuilder();
            foreach (var ns in requiredNamespaces.OrderBy(n => n)) usingStatements.AppendLine($"using {ns};");
            File.WriteAllText(Path.Combine(AOTStubDir, $"{type.Name}.cs"),
$@"// Auto-generated. Do not edit!
{usingStatements}
public class {type.Name} : {StubBaseClassName}
{{
{fieldDeclarations}
}}
");
            if (currentStubFiles.ContainsKey(type.Name)) currentStubFiles.Remove(type.Name);
        }

        foreach (var fileToRemove in currentStubFiles.Values)
        {
            AssetDatabase.DeleteAsset(fileToRemove);
        }

        AssetDatabase.Refresh(ImportAssetOptions.ForceUpdate);
        return hotfixMonoTypes;
    }

    private static void InjectReferences(List<System.Type> hotfixTypes)
    {
        Debug.Log("--- 步骤 1.2: 正在为场景和预制体注入/更新引用 ---");

        ClearAllStubComponents();

        string[] allPrefabPaths = Directory.GetFiles(HotfixResRoot, "*.prefab", SearchOption.AllDirectories);
        foreach (string path in allPrefabPaths)
        {
            using (var prefabScope = new PrefabUtility.EditPrefabContentsScope(path))
            {
                ProcessGameObject(prefabScope.prefabContentsRoot, hotfixTypes);
            }
        }
        string[] allScenePaths = Directory.GetFiles(HotfixResRoot, "*.unity", SearchOption.AllDirectories);
        foreach (string path in allScenePaths)
        {
            var scene = EditorSceneManager.OpenScene(path, OpenSceneMode.Single);
            bool sceneDirty = false;
            foreach (var go in scene.GetRootGameObjects())
            {
                if (ProcessGameObject(go, hotfixTypes)) sceneDirty = true;
            }
            if (sceneDirty) EditorSceneManager.SaveScene(scene);
        }
        AssetDatabase.SaveAssets();
    }

    private static void ClearAllStubComponents()
    {
        string[] allPrefabPaths = Directory.GetFiles(HotfixResRoot, "*.prefab", SearchOption.AllDirectories);
        foreach (string path in allPrefabPaths)
        {
            using (var prefabScope = new PrefabUtility.EditPrefabContentsScope(path))
            {
                foreach (var stub in prefabScope.prefabContentsRoot.GetComponentsInChildren<HotfixStub>(true))
                    Object.DestroyImmediate(stub, true);
            }
        }
        string[] allScenePaths = Directory.GetFiles(HotfixResRoot, "*.unity", SearchOption.AllDirectories);
        foreach (string path in allScenePaths)
        {
            var scene = EditorSceneManager.OpenScene(path, OpenSceneMode.Single);
            bool sceneDirty = false;
            foreach (var go in scene.GetRootGameObjects())
            {
                foreach (var stub in go.GetComponentsInChildren<HotfixStub>(true))
                {
                    Object.DestroyImmediate(stub, true);
                    sceneDirty = true;
                }
            }
            if (sceneDirty) EditorSceneManager.SaveScene(scene);
        }
    }

    private static bool ProcessGameObject(GameObject go, List<System.Type> hotfixTypes)
    {
        bool isDirty = false;
        foreach (var hotfixType in hotfixTypes)
        {
            Component[] hotfixComponents = go.GetComponentsInChildren(hotfixType, true);
            foreach (var hotfixComp in hotfixComponents)
            {
                GameObject targetGO = hotfixComp.gameObject;
                System.Type stubType = GetAOTStubType(hotfixType.Name);
                if (stubType == null) continue;

                HotfixStub stub = targetGO.AddComponent(stubType) as HotfixStub;
                stub.HotfixScriptFullName = hotfixType.FullName;
                stub.References = AnalyzeComponentReferences(hotfixComp);

                foreach (var reference in stub.References)
                {
                    FieldInfo stubField = stubType.GetField(reference.FieldName);
                    if (stubField != null) stubField.SetValue(stub, reference.ReferencedObject);
                }
                EditorUtility.SetDirty(stub);
                isDirty = true;
            }
        }
        return isDirty;
    }

    private static List<HotfixObjectReference> AnalyzeComponentReferences(Component component)
    {
        List<HotfixObjectReference> fieldRefs = new List<HotfixObjectReference>();
        System.Type type = component.GetType();
        FieldInfo[] fields = type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
        foreach (FieldInfo field in fields)
        {
            if (!field.IsPublic && field.GetCustomAttribute<SerializeField>() == null) continue;
            object value = field.GetValue(component);
            if (value is UnityEngine.Object objRef && objRef != null)
                fieldRefs.Add(new HotfixObjectReference { FieldName = field.Name, ReferencedObject = objRef });
        }
        return fieldRefs;
    }

    private static void ApplyLabelsAndGenerateMaps()
    {
        foreach (string name in AssetDatabase.GetAllAssetBundleNames()) AssetDatabase.RemoveAssetBundleName(name, true);
        Dictionary<string, string> assetMap = new Dictionary<string, string>();
        var allFiles = new DirectoryInfo(HotfixResRoot).GetFiles("*", SearchOption.AllDirectories);
        foreach (var file in allFiles) SetLabelForFile(file, assetMap);

        string configDir = Path.Combine(HotfixResRoot, "Configs");
        Directory.CreateDirectory(configDir);
        string assetMapPath = Path.Combine(configDir, "asset_map.json");
        AssetMapWrapper mapWrapper = new AssetMapWrapper { AssetMapList = assetMap.Select(p => new AssetMapEntry { path = p.Key, abName = p.Value }).ToList() };
        File.WriteAllText(assetMapPath, JsonConvert.SerializeObject(mapWrapper, Formatting.Indented));
        AssetDatabase.ImportAsset(assetMapPath);
        SetLabelForPath(assetMapPath, ConfigsABName, assetMap);

        Dictionary<string, string> resDB = new Dictionary<string, string>();
        foreach (var pair in assetMap)
        {
            string resName = Path.GetFileNameWithoutExtension(pair.Key);
            if (!resDB.ContainsKey(resName)) resDB[resName] = pair.Key.Substring(HotfixResRoot.Length + 1).Replace("\\", "/");
        }
        string resDBPath = Path.Combine(configDir, "res_db.json");
        ResDBWrapper wrapper = new ResDBWrapper { ResMapList = resDB.Select(p => new ResDBEntry { res = p.Key, path = p.Value }).ToList() };
        File.WriteAllText(resDBPath, JsonConvert.SerializeObject(wrapper, Formatting.Indented));
        AssetDatabase.ImportAsset(resDBPath);
        SetLabelForPath(resDBPath, ConfigsABName, assetMap);
    }
    private static void SetLabelForFile(FileInfo file, Dictionary<string, string> assetMap)
    {
        if (file.Extension == ".meta" || file.Name.StartsWith(".")) return;
        string assetPath = file.FullName.Substring(Application.dataPath.Length - "Assets".Length).Replace("\\", "/");
        string dirPath = Path.GetDirectoryName(assetPath).Replace("\\", "/");
        string abName = (dirPath == HotfixResRoot) ? "general.ab" : dirPath.Substring(HotfixResRoot.Length + 1).Replace("/", "_").ToLower() + ".ab";
        SetLabelForPath(assetPath, abName, assetMap);
    }
    private static void SetLabelForPath(string assetPath, string abName, Dictionary<string, string> assetMap)
    {
        AssetImporter importer = AssetImporter.GetAtPath(assetPath);
        if (importer != null) { importer.assetBundleName = abName.ToLower(); assetMap[assetPath] = abName.ToLower(); }
    }
    private static List<System.Type> GetHotfixTypes()
    {
        var hotfixAsm = System.AppDomain.CurrentDomain.GetAssemblies().FirstOrDefault(a => a.GetName().Name == HotfixAssemblyName);
        return hotfixAsm?.GetTypes().Where(t => t.IsSubclassOf(typeof(MonoBehaviour))).ToList() ?? new List<System.Type>();
    }
    private static System.Type GetAOTStubType(string shortName)
    {
        var assemblies = System.AppDomain.CurrentDomain.GetAssemblies();
        foreach (var asm in assemblies)
        {
            var type = asm.GetType(shortName);
            if (type != null && type.IsSubclassOf(typeof(HotfixStub))) return type;
        }
        return null;
    }
    private static string GetFriendlyTypeName(System.Type type)
    {
        if (type == null) return "null";
        if (type.IsGenericType) return type.Name.Split('`')[0] + "<" + string.Join(", ", type.GetGenericArguments().Select(GetFriendlyTypeName).ToArray()) + ">";
        if (type.Namespace != null && (type.Namespace.StartsWith("UnityEngine") || type.Namespace.StartsWith("System"))) return type.FullName.Replace("+", ".");
        return type.Name;
    }
    private static string GetGameObjectPath(Transform t)
    {
        string path = t.name;
        while (t.parent != null) { t = t.parent; path = t.name + "/" + path; }
        return path;
    }
    private static string GetFileMD5(string filePath)
    {
        using (var md5 = System.Security.Cryptography.MD5.Create())
        using (var stream = File.OpenRead(filePath))
        {
            return System.BitConverter.ToString(md5.ComputeHash(stream)).Replace("-", "").ToLowerInvariant();
        }
    }
    private static FrameworkConfig GetConfig()
    {
        string[] guids = AssetDatabase.FindAssets("t:FrameworkConfig");
        if (guids.Length == 0) { Debug.LogError("找不到 FrameworkConfig.asset 文件！"); return null; }
        return AssetDatabase.LoadAssetAtPath<FrameworkConfig>(AssetDatabase.GUIDToAssetPath(guids[0]));
    }

  

    #endregion
}