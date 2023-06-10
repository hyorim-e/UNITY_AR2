using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// ImageTracker2.cs�� ������ �ʱ�ȭ �κ� �и��� ��ũ��Ʈ 
public class ObjectPool : MonoBehaviour
{
    //[SerializeField]
    public GameObject[] placeablePrefabs;
    [HideInInspector]
    public Dictionary<string, GameObject> spawnedObject;

    private void Awake()
    {
        placeablePrefabs = new GameObject[transform.childCount];
        spawnedObject = new Dictionary<string, GameObject>();

        for (int i = 0; i < placeablePrefabs.Length; i++)
        {
            placeablePrefabs[i] = transform.GetChild(i).gameObject;
            Debug.Log($"child({i}) = {transform.GetChild(i)}");
        }
        ///*
        // ��ġ�� �������� ������Ʈ
        foreach (GameObject obj in placeablePrefabs)
        {
            spawnedObject.Add(obj.name, obj);
        }
        //*
    }
}
