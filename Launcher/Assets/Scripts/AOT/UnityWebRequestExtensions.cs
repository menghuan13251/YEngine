using System;
using System.Collections;
using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public static class UnityWebRequestExtensions
{
    public static UniTask<UnityWebRequest> SendWebRequestAsTask(this UnityWebRequest www, MonoBehaviour runner)
    {
        var tcs = new UniTaskCompletionSource<UnityWebRequest>();
        runner.StartCoroutine(RequestCoroutine(www, tcs));
        return tcs.Task;
    }

    private static IEnumerator RequestCoroutine(UnityWebRequest www, UniTaskCompletionSource<UnityWebRequest> tcs)
    {
        using (www)
        {
            yield return www.SendWebRequest();
            if (www.result != UnityWebRequest.Result.Success)
            {
                tcs.TrySetException(new Exception($"Request failed for {www.url} with error: {www.error}"));
            }
            else
            {
                tcs.TrySetResult(www);
            }
        }
    }
}