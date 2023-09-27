using System;
using System.Collections.Specialized;
using System.IO;
using System.Net;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

namespace BackendModule.Image.Imgur
{
    public class ImgurClient
    {
        private const string UPLOAD_URL = "https://api.imgur.com/3/upload.json";
        private const string BASE_URL = "https://api.imgur.com/3/image/";
        private const string CLIENT_ID = "d1924cc115dd7ab";

        private readonly string clientId;

        public event EventHandler<OnImageUploadedEventArgs> OnImageUploaded;

        public ImgurClient(string clientId = CLIENT_ID)
        {
            if (string.IsNullOrWhiteSpace(clientId))
            {
                Debug.Log("Error");
            }

            this.clientId = clientId;
            ServicePointManager.ServerCertificateValidationCallback += (o, certificate, chain, errors) => true;
        }

        public void TakeAndUploadScreenshot(string fileName, bool isDeleteFileAfterUpload = true)
        {
            Debug.Log(Application.streamingAssetsPath);
            if (!Directory.Exists(Application.streamingAssetsPath))
            {
                Directory.CreateDirectory(Application.streamingAssetsPath);
            }

            var filePath = Path.Combine(Application.streamingAssetsPath, fileName);
            ScreenCapture.CaptureScreenshot(filePath);

            var thread = new Thread(async () =>
            {
                while (!File.Exists(filePath))
                {
                    Thread.Sleep(10);
                }

                await UploadImageFromFilePathAsync(filePath);

                if (isDeleteFileAfterUpload)
                {
                    if (File.Exists(filePath))
                    {
                        File.Delete(filePath);
                    }
                }
            })
            {
                IsBackground = true
            };
            thread.Start();
        }

        public async Task UploadImageFromFilePathAsync(string filePath)
        {
            if (!File.Exists(filePath)) return;

            var image = File.ReadAllBytes(filePath);
            var base64Image = Convert.ToBase64String(image);

            await UploadImageAsync(base64Image);
        }

        public async Task UploadImageAsync(string base64Image)
        {
            await UploadAsync(base64Image, (response) =>
            {
                if (OnImageUploaded != null)
                {
                    OnImageUploaded(this, new OnImageUploadedEventArgs(response));
                }
            });
        }

        private async Task UploadAsync(string base64Image, Action<UploadResponse> OnUploadCompleted)
        {
            await Task.Run(() =>
            {
                using (var client = new WebClient())
                {
                    client.Headers.Add("Authorization", "Client-ID " + clientId);
                    var parameters = new NameValueCollection()
                    {
                        { "image", base64Image }
                    };

                    var response = client.UploadValues(UPLOAD_URL, parameters);
                    var json = Encoding.UTF8.GetString(response);

                    OnUploadCompleted(JsonUtility.FromJson<UploadResponse>(json));
                }
            });
        }

        public void Delete(string deleteHash)
        {
            var thread = new Thread(() =>
            {
                using (var client = new WebClient())
                {
                    client.Headers.Add("Authorization", "Client-ID " + clientId);
                    var response = client.UploadString(BASE_URL + deleteHash, "DELETE", "");
                    Debug.Log(response);
                }
            })
            {
                IsBackground = true
            };
            thread.Start();
        }

        private void Update(string deleteHash, string title, string description)
        {
            var thread = new Thread(() =>
            {
                using (var client = new WebClient())
                {
                    client.Headers.Add("Authorization", "Client-ID " + clientId);
                    var parameters = new NameValueCollection()
                    {
                        { "title", title },
                        { "description", description }
                    };
                    var response = client.UploadValues(BASE_URL + deleteHash, "POST", parameters);
                    var json = Encoding.UTF8.GetString(response);
                    Debug.Log(json);
                }
            })
            {
                IsBackground = true
            };
            thread.Start();
        }

        public class OnImageUploadedEventArgs : EventArgs
        {
            public UploadResponse response;

            public OnImageUploadedEventArgs(UploadResponse response)
            {
                this.response = response;
            }
        }
    }
}