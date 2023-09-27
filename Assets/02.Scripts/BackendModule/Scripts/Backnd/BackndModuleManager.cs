using UnityEngine;
using BackEnd;
using BackendModule.Image.Imgur;
using System.Globalization;
using System.Threading.Tasks;
using BackendModule.Backnd.Data;
using BackendModule.Image;
using System.Linq;

namespace BackendModule.Backnd
{
    public static class Constants
    {
        internal const string TABLE_PLAYER_DATA = "PLAYER_DATA";
        internal const string TABLE_PLAYER_PROFILE = "PLAYER_PROFILE";
        internal const string TABLE_IMAGE = "IMAGE_IMGUR";

        internal static readonly Where WHERE_DEFAULT = new Where();
    }

    public class BackndModuleManager : MonoBehaviour
    {
        public PLAYER_PROFILE ProfileData;
        public UploadResponse response;

        private static Param parameters;

        private ImgurClient imgurClient;

        private void Start()
        {
            Initialize();
        }

        async void Initialize()
        {
            imgurClient = new ImgurClient();
            parameters = new Param();

            var initializeResult = Backend.Initialize();
            if (initializeResult.IsSuccess())
            {
                await Task.Run(() =>
                {
                    Authentication.SignUp("admin", "1234");
                    Authentication.Login("admin", "1234");
                });
            }

            if (string.IsNullOrWhiteSpace(Backend.UserNickName))
            {
                int playerNumber = 0;
                BackendReturnObject duplicationCheckResult;
                var nickName = "";
                do
                {
                    nickName = "Player" + ++playerNumber;
                    duplicationCheckResult = Backend.BMember.CheckNicknameDuplication(nickName);
                } while (!duplicationCheckResult.IsSuccess());
                Authentication.UpdateNickname(nickName);
            }

            if ((ProfileData = DataManagement.GetTable<PLAYER_PROFILE>()).IsNull())
            {
                Debug.Log("There Is No PLAYER_PROFILE Table Data. Create One");
                ProfileData = new PLAYER_PROFILE()
                {
                    NickName = Backend.UserNickName,
                    Description = "æ»≥Á«œººø‰."
                };
                DataManagement.InsertTable(ProfileData);
            }

            Debug.Log($"Profile Description : {ProfileData.Description}, Image : {ProfileData.Image}");

            UploadProfileImage();
        }

        public IOrderedEnumerable<PLAYER_PROFILE> LoadContestRanking()
        {
            var playerProfiles = DataManagement.GetTables<PLAYER_PROFILE>();
            var ranking = playerProfiles.OrderByDescending(profile => profile.Vote);
            return ranking;
        }

        public void UploadProfileImageSecond()
        {
            var image = DataManagement.GetTable<PLAYER_IMAGE>();
            if (!image.IsNull())
            {
                Debug.Log($"There Is Player Image. Will Delete Image : {image.Id}");
                DeleteProfileImage(image);
            }

            Debug.Log("There Is No Player Image. Upload New One");

            image = UploadImageSecond();
        }

        public void DeleteProfileImage(PLAYER_IMAGE image)
        {
            imgurClient.Delete(image.Hash);
            var where = new Where();
            where.Equal("Id", image.Id);
            DataManagement.DeleteTable<PLAYER_IMAGE>(where);
        }

        public void UploadProfileImage()
        {
            var result = Backend.GameData.GetMyData(Constants.TABLE_IMAGE, Constants.WHERE_DEFAULT);
            if (result.IsSuccess())
            {
                var data = result.FlattenRows();
                Debug.Log(data.Count + " Image Files Are Searched");
                if (data.Count > 0)
                {
                    //float.Parse("0.12", CultureInfo.InvariantCulture);
                    var id = data[0]["ID"].ToString();
                    var hash = data[0]["HASH"].ToString();
                    Debug.Log("There is " + id + " and will delete");
                    imgurClient.Delete(hash);
                }
            }
            UploadImage();
        }

        public PLAYER_IMAGE UploadImageSecond()
        {
            var image = new PLAYER_IMAGE();
            imgurClient.TakeAndUploadScreenshot("Test", isDeleteFileAfterUpload : true);
            imgurClient.OnImageUploaded += (sender, e) =>
            {
                Debug.Log("Upload Complete" + e.response.data.link);
                image.Id = e.response.data.id;
                image.Hash = e.response.data.deletehash;
            };
            return image;
        }

        public void UploadImage()
        {
            imgurClient.TakeAndUploadScreenshot("Test");
            imgurClient.OnImageUploaded += (sender, e) => 
            {
                Debug.Log(e.response.data.link);
                response = e.response;
                parameters.Clear();
                parameters.Add("ID", e.response.data.id);
                parameters.Add("HASH", e.response.data.deletehash);
                Backend.GameData.Insert("IMAGE_IMGUR", parameters);
            };
        }
    }
}