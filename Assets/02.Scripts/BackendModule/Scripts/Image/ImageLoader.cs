using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

namespace BackendModule.Image
{
    public class ImageLoader
    {
        public static async Task<Texture> LoadAsync(string url = "https://i.imgur.com/zA7g60K.png")
        {
            var task = await new Task<Texture>(() =>
            {
                var www = UnityWebRequestTexture.GetTexture(url);
                var result = www.SendWebRequest();
                while (!result.isDone)
                {
                }
                if (www.result != UnityWebRequest.Result.Success) return null;
                return ((DownloadHandlerTexture)www.downloadHandler).texture;
            });
            return task;
        }
    }
}