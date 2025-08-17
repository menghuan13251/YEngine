// AutoAtlasGenerator.cs (V2 - Robust and with Progress Bar)

using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEngine.U2D;
using UnityEditor.U2D;

public class AutoAtlasGenerator
{
    // --- 在这里配置你的路径 ---

    // 指定你的图集主文件夹路径 (相对于 "Assets" 目录)
    // 脚本将扫描这个文件夹下的所有子文件夹
    private const string AtlasRootFolder = "Assets/GameRes_Hotfix/Atlas";

    // --- 配置结束 ---

    [MenuItem("工具/图集工具/根据子文件夹自动生成图集(推荐)")]
    public static void GenerateAtlasesFromSubfolders()
    {
        Debug.Log("开始执行图集自动生成/更新流程...");

        // 1. 验证主文件夹是否存在
        string rootPath = Path.Combine(Directory.GetCurrentDirectory(), AtlasRootFolder);
        if (!Directory.Exists(rootPath))
        {
            Debug.LogError($"错误：找不到指定的图集主文件夹路径: {AtlasRootFolder}");
            return;
        }

        // 2. 获取主文件夹下的所有一级子目录
        // 使用Unity的API获取路径，避免平台差异
        string[] subfolderPaths = Directory.GetDirectories(AtlasRootFolder);

        if (subfolderPaths.Length == 0)
        {
            Debug.LogWarning($"在 '{AtlasRootFolder}' 中没有找到任何子文件夹，流程结束。");
            return;
        }

        int foldersProcessed = 0;

        // 3. 使用 try...finally 确保进度条在任何情况下都会被关闭
        try
        {
            // 遍历每一个子文件夹
            for (int i = 0; i < subfolderPaths.Length; i++)
            {
                string subfolderPath = subfolderPaths[i].Replace('\\', '/'); // 规范化路径分隔符
                string subfolderName = Path.GetFileName(subfolderPath);

                // --- 显示进度条 ---
                string progressBarTitle = "自动生成图集";
                string progressBarInfo = $"正在处理文件夹: {subfolderName} ({i + 1}/{subfolderPaths.Length})";
                float progress = (float)(i + 1) / subfolderPaths.Length;

                // 如果用户在进度条上点击了取消按钮，则中断操作
                if (EditorUtility.DisplayCancelableProgressBar(progressBarTitle, progressBarInfo, progress))
                {
                    Debug.LogWarning("用户取消了图集生成操作。");
                    break;
                }

                // 检查子文件夹内是否有图片资源，如果没有则跳过
                string[] guids = AssetDatabase.FindAssets("t:Texture2D", new[] { subfolderPath });
                if (guids.Length == 0)
                {
                    Debug.Log($"文件夹 '{subfolderName}' 中没有图片，已跳过。");
                    continue;
                }

                // 构造对应的图集路径
                string atlasPath = Path.Combine(AtlasRootFolder, subfolderName + ".spriteatlas");

                // 加载或创建图集
                SpriteAtlas atlas = AssetDatabase.LoadAssetAtPath<SpriteAtlas>(atlasPath);

                if (atlas == null)
                {
                    atlas = new SpriteAtlas();
                    AssetDatabase.CreateAsset(atlas, atlasPath);
                    Debug.Log($"创建了新的图集: {atlasPath}");
                }

                // --- 更新图集内容 ---

                // a. (重要) 移除所有已打包的对象，防止旧资源残留
                atlas.Remove(atlas.GetPackables());

                // b. (优化) 直接将文件夹对象添加到图集中
                Object folderObject = AssetDatabase.LoadAssetAtPath<DefaultAsset>(subfolderPath);
                if (folderObject != null)
                {
                    atlas.Add(new[] { folderObject });
                }
                else
                {
                    Debug.LogError($"无法加载文件夹对象: {subfolderPath}");
                    continue;
                }

                // c. 标记图集为已修改状态
                EditorUtility.SetDirty(atlas);

                foldersProcessed++;
                Debug.Log($"成功处理文件夹 '{subfolderName}' -> 图集 '{atlas.name}'");
            }
        }
        catch (System.Exception e)
        {
            Debug.LogError($"图集生成过程中发生错误: {e.Message}\n{e.StackTrace}");
        }
        finally
        {
            // --- 无论成功、失败还是取消，最后都要关闭进度条 ---
            EditorUtility.ClearProgressBar();

            // 4. 所有循环结束后，统一保存所有资源更改
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();

            Debug.Log($"流程结束！共处理了 {foldersProcessed} 个包含图片的子文件夹。");
        }
    }
}