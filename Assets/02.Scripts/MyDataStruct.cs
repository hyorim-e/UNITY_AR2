using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyDataStruct : MonoBehaviour
{
    public static List<GameObject> PrefabList;
    //public static List<String> PrefabNameList;
    //public static List<string> PrefabList;
    //private static List<string> AnimalList;

    //public static Hashtable table = new Hashtable();
    public static Dictionary<string, GameObject> table = new Dictionary<string, GameObject>();

    public static string RecognizePrefabName;
    public static GameObject RecognizePrefab;

    private bool has;

    public static GameObject PlaceablePrefab;

    private void Awake()
    {
        //table = new Hashtable();
        //table = new Dictionary<string, GameObject>();
    }
    public MyDataStruct()
    {
        //PrefabList = new List<GameObject>();
        //PrefabNameList = new List<string>();
        //AnimalList = new List<string>();
        
        //FileManager fM = new FileManager();
        //fM.Start();

    }

    public void GetName()
    {
        has = table.ContainsKey(RecognizePrefabName); // �ش� Ű�� ���ԵǾ� �ִ��� true or false
        //foreach(GameObject prefab in PrefabList)
        //{
            //if (name.CompareTo(prefab.name) == 0)
            //{
            //}
        //}
    }

    public void SetPrefab()
    {
        if (has)
        {
            PlaceablePrefab = table[RecognizePrefabName];
        }
    }
}

/*
public class FileManager
{
    public FileManager()
    {
        FileManager fM
    }
}
*/

