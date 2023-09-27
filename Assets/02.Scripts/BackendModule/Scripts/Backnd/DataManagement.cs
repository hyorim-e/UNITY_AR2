using BackEnd;
using UnityEngine;

namespace BackendModule.Backnd.Data
{
    public class PLAYER_PROFILE
    {
        public string NickName;
        public string Description;
        public string Image;
        public int Vote;
    }

    public class PLAYER_IMAGE
    {
        public string Id;
        public string Hash;
    }

    public class DataManagement
    {
        public void UploadProfile(PLAYER_PROFILE data)
        {
            var parameters = new Param();
            parameters.Add("Data", data);

            var result = Backend.GameData.Insert(Constants.TABLE_PLAYER_DATA, parameters);
        }

        private static Param GetParam<T>(T data)
        {
            var parameters = new Param();

            var type = data.GetType();
            var fields = type.GetFields();

            foreach (var field in fields)
            {
                parameters.Add(field.Name, field.GetValue(data));
            }

            return parameters;
        }

        public static void InsertTable<T>(T data)
        {
            var parameters = GetParam(data);
            var result = Backend.GameData.Insert(Constants.TABLE_PLAYER_PROFILE, parameters);
            if (result.IsSuccess())
            {
                Debug.Log("Success To Insert");
            }
            else
            {
                Debug.Log("Failed To Insert : " + result.GetErrorCode());
            }
        }

        public static void Update<T>(T data) where T : class, new()
        {
            var result = GetTables<T>();
        }

        public static void DeleteTable<T>(Where where = null)
        {
            var result = Backend.GameData.Delete(typeof(T).ToString(), where.IsNull() ? Constants.WHERE_DEFAULT : where);
            if (result.IsSuccess())
            {
                Debug.Log("Delete Complete");
            }
        }

        public static T GetTable<T>() where T : class, new()
        {
            var datas = GetTables<T>();
            if (datas.IsNull()) return null;
            return datas[0];
        }

        public static T[] GetTables<T>() where T : class, new()
        {
            var type = typeof(T);
            var result = Backend.GameData.GetMyData(type.ToString(), new Where());
            if (!result.IsSuccess())
            {
                Debug.Log("Failed To GetData" + result.GetErrorCode());
                return null;
            }

            var rows = result.FlattenRows();
            if (rows.Count == 0)
            {
                Debug.Log("There Is No Data" + result.GetErrorCode());
                return null;
            }

            var tableArray = new T[rows.Count];
            var keys = rows.Keys;
            for (int index = 0; index < rows.Count; index++)
            {
                var tableData = new T();
                foreach (var fieldName in keys)
                {
                    var field = type.GetField(fieldName);
                    field.SetValue(tableData, rows[index][fieldName].ToString());
                }
                tableArray[index] = tableData;
            }
            return tableArray;
        }
    }
}