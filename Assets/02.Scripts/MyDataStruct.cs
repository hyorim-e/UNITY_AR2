using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyDataStruct
{
    public static List<GameObject> PrefabList;
    //public static List<String> PrefabNameList;
    //public static List<string> PrefabList;
    //private static List<string> AnimalList;

    Hashtable table = new Hashtable();

    //public static string RecognizePrefabName;
    public static GameObject RecognizePrefab;

    private bool has;

    public static GameObject PlaceablePrefab;

    public MyDataStruct()
    {
        //PrefabList = new List<GameObject>();
        //PrefabNameList = new List<string>();
        //AnimalList = new List<string>();

        if (RecognizePrefab)
        {
            foreach(GameObject prefab in PrefabList)
                table.Add(prefab.name, prefab);

            SetPrefab(GetName(RecognizePrefab));

        }
        
        //FileManager fM = new FileManager();
        //fM.Start();

    }

    public GameObject GetName(GameObject Prefab)
    {
        has = table.Contains(Prefab.name); // 해당 키값 포함되어 있는지 true or false
        //foreach(GameObject prefab in PrefabList)
        //{
            //if (name.CompareTo(prefab.name) == 0)
            //{
            //}
        //}
        return Prefab;
    }

    public void SetPrefab(GameObject go)
    {
        if (has)
        {
            PlaceablePrefab = go;
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

