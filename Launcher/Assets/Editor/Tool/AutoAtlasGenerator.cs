// AutoAtlasGenerator.cs (V2 - Robust and with Progress Bar)

using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEngine.U2D;
using UnityEditor.U2D;

public class AutoAtlasGenerator
{
    // --- �������������·�� ---

    // ָ�����ͼ�����ļ���·�� (����� "Assets" Ŀ¼)
    // �ű���ɨ������ļ����µ��������ļ���
    private const string AtlasRootFolder = "Assets/GameRes_Hotfix/Atlas";

    // --- ���ý��� ---

    [MenuItem("����/ͼ������/�������ļ����Զ�����ͼ��(�Ƽ�)")]
    public static void GenerateAtlasesFromSubfolders()
    {
        Debug.Log("��ʼִ��ͼ���Զ�����/��������...");

        // 1. ��֤���ļ����Ƿ����
        string rootPath = Path.Combine(Directory.GetCurrentDirectory(), AtlasRootFolder);
        if (!Directory.Exists(rootPath))
        {
            Debug.LogError($"�����Ҳ���ָ����ͼ�����ļ���·��: {AtlasRootFolder}");
            return;
        }

        // 2. ��ȡ���ļ����µ�����һ����Ŀ¼
        // ʹ��Unity��API��ȡ·��������ƽ̨����
        string[] subfolderPaths = Directory.GetDirectories(AtlasRootFolder);

        if (subfolderPaths.Length == 0)
        {
            Debug.LogWarning($"�� '{AtlasRootFolder}' ��û���ҵ��κ����ļ��У����̽�����");
            return;
        }

        int foldersProcessed = 0;

        // 3. ʹ�� try...finally ȷ�����������κ�����¶��ᱻ�ر�
        try
        {
            // ����ÿһ�����ļ���
            for (int i = 0; i < subfolderPaths.Length; i++)
            {
                string subfolderPath = subfolderPaths[i].Replace('\\', '/'); // �淶��·���ָ���
                string subfolderName = Path.GetFileName(subfolderPath);

                // --- ��ʾ������ ---
                string progressBarTitle = "�Զ�����ͼ��";
                string progressBarInfo = $"���ڴ����ļ���: {subfolderName} ({i + 1}/{subfolderPaths.Length})";
                float progress = (float)(i + 1) / subfolderPaths.Length;

                // ����û��ڽ������ϵ����ȡ����ť�����жϲ���
                if (EditorUtility.DisplayCancelableProgressBar(progressBarTitle, progressBarInfo, progress))
                {
                    Debug.LogWarning("�û�ȡ����ͼ�����ɲ�����");
                    break;
                }

                // ������ļ������Ƿ���ͼƬ��Դ�����û��������
                string[] guids = AssetDatabase.FindAssets("t:Texture2D", new[] { subfolderPath });
                if (guids.Length == 0)
                {
                    Debug.Log($"�ļ��� '{subfolderName}' ��û��ͼƬ����������");
                    continue;
                }

                // �����Ӧ��ͼ��·��
                string atlasPath = Path.Combine(AtlasRootFolder, subfolderName + ".spriteatlas");

                // ���ػ򴴽�ͼ��
                SpriteAtlas atlas = AssetDatabase.LoadAssetAtPath<SpriteAtlas>(atlasPath);

                if (atlas == null)
                {
                    atlas = new SpriteAtlas();
                    AssetDatabase.CreateAsset(atlas, atlasPath);
                    Debug.Log($"�������µ�ͼ��: {atlasPath}");
                }

                // --- ����ͼ������ ---

                // a. (��Ҫ) �Ƴ������Ѵ���Ķ��󣬷�ֹ����Դ����
                atlas.Remove(atlas.GetPackables());

                // b. (�Ż�) ֱ�ӽ��ļ��ж�����ӵ�ͼ����
                Object folderObject = AssetDatabase.LoadAssetAtPath<DefaultAsset>(subfolderPath);
                if (folderObject != null)
                {
                    atlas.Add(new[] { folderObject });
                }
                else
                {
                    Debug.LogError($"�޷������ļ��ж���: {subfolderPath}");
                    continue;
                }

                // c. ���ͼ��Ϊ���޸�״̬
                EditorUtility.SetDirty(atlas);

                foldersProcessed++;
                Debug.Log($"�ɹ������ļ��� '{subfolderName}' -> ͼ�� '{atlas.name}'");
            }
        }
        catch (System.Exception e)
        {
            Debug.LogError($"ͼ�����ɹ����з�������: {e.Message}\n{e.StackTrace}");
        }
        finally
        {
            // --- ���۳ɹ���ʧ�ܻ���ȡ�������Ҫ�رս����� ---
            EditorUtility.ClearProgressBar();

            // 4. ����ѭ��������ͳһ����������Դ����
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();

            Debug.Log($"���̽������������� {foldersProcessed} ������ͼƬ�����ļ��С�");
        }
    }
}