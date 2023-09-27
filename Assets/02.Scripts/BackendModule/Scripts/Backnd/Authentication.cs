using BackEnd;
using UnityEngine;

namespace BackendModule.Backnd
{
    public class Authentication
    {
        public static void SignUp(string id, string password)
        {
            var result = Backend.BMember.CustomSignUp(id, password);
            if (result.IsSuccess())
            {
                Debug.Log("Signed Up Successfully");
            }
            else
            {
                Debug.Log("Failed To Signed Up");
            }
        }

        public static void Login(string id, string password)
        {
            var result = Backend.BMember.CustomLogin(id, password);
            if (result.IsSuccess())
            {
                Debug.Log("Logged In Successfully");
            }
            else
            {
                Debug.Log("Failed To Login");
            }
        }

        public static void UpdateNickname(string nickname)
        {
            var result = Backend.BMember.UpdateNickname(nickname);
            if (result.IsSuccess())
            {

            }
            else
            {

            }
        }
    }
}