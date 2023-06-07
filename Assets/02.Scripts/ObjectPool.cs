using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// ImageTracker2.cs의 프리팹 초기화 부분 분리한 스크립트 
public class ObjectPool : MonoBehaviour
{
    [SerializeField]
    private GameObject[] placeablePrefabs;
    [HideInInspector]
    public Dictionary<string, GameObject> spawnedObject;

    private void Awake()
    {
        spawnedObject = new Dictionary<string, GameObject>();

        for (int i = 0; i < transform.childCount; i++)
        {
            placeablePrefabs[i] = transform.GetChild(i).gameObject;
            Debug.Log($"child({i}) = {transform.GetChild(i)}");
        }
        ///*
        // 배치할 오리지널 오브젝트
        foreach (GameObject obj in placeablePrefabs)
        {
            spawnedObject.Add(obj.name, obj);
        }
        //*
    }
}
