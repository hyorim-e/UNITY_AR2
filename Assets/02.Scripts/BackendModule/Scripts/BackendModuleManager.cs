using BackendModule.Backnd;
using BackendModule.Image;
using BackendModule.Image.Imgur;
using UnityEngine;

namespace BackendModule
{
    public class BackendModuleManager : MonoBehaviour
    {
        public BackndModuleManager backndModule;
        public ImageModuleManager imageModule;
        public ImgurClient imgurClient;
        public UploadResponse response;

        [SerializeField] private string uploadName;

        private void Start()
        {
            backndModule = new BackndModuleManager();
            imgurClient = new ImgurClient();
        }

        public void OnClickUpload()
        {
            imgurClient.TakeAndUploadScreenshot(uploadName);
            imgurClient.OnImageUploaded += ImgurClient_OnImageUploaded;
        }

        private void ImgurClient_OnImageUploaded(object sender, ImgurClient.OnImageUploadedEventArgs e)
        {
            response = e.response;
        }
    }
}