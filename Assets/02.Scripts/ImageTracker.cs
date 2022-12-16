using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ImageTracker : MonoBehaviour
{
    public Text debugText_AR;
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;

    public GameObject MyDataStruct_obj;

    private void Awake()
    {

        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();
        //MyDataStruct.table = new Dictionary<string, GameObject>();

        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            spawnedObject.Add(newObject.name, newObject);
            MyDataStruct.table.Add(newObject.name, newObject);
            //MyDataStruct.PrefabList.Add(Instantiate(obj));

            if (MyDataStruct.table != null)
            {
                debugText_AR.text = "table != null";
            }

            //prefabsNumDict.Add(spawnedObject, prefabNum);
            //PlayerPrefs.SetInt(newObject.name, prefabNum);
            //PlayerPrefs.SetString(prefabNum.ToString(), newObject.name);
            // SetString(string key, string value);
            // SetInt(string key, int value);
            // key = ������(�̹���) �̸�, value = ��ȣ 

        }

        //foreach (KeyValuePair<Dictionary<string, GameObject>, int> data in prefabsNumDict)
        //{
        //    
        //}
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImageChanged;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImageChanged;
    }

    void OnTrackedImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added) // .added Ʈ��ŷ�Ǵ� �̹����� �߰��Ǿ��� ��
        {
            UpdateSpawnObject(trackedImage);

            if (trackedImage != null)
            {
                //debugText_AR.text = "trackedImage != null";
            }
            /*
            MyDataStruct.RecognizePrefab.name = trackedImage.name;

            if (MyDataStruct.RecognizePrefab)
            {
                foreach (GameObject prefab in MyDataStruct.PrefabList)
                    MyDataStruct.table.Add(prefab.name, prefab);

                MyDataStruct_obj.GetComponent<MyDataStruct>().SetPrefab(MyDataStruct_obj.GetComponent<MyDataStruct>().GetName(MyDataStruct.RecognizePrefab));

            }*/
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated Ʈ��ŷ�Ǵ� �̹����� ����Ǿ��� ��
        {
            UpdateSpawnObject(trackedImage);
        }

        foreach (ARTrackedImage trackedImage in eventArgs.removed) // .removed Ʈ��ŷ�Ǵ� �̹����� �����Ǿ��� ��
        {
            spawnedObject[trackedImage.referenceImage.name].SetActive(false);
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary���� ������ �̸� �޾ƿ�

        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // ������ ������Ʈ(������)�� ��ġ�� Ʈ��ŷ�� �̹����� ��ġ ��ġ��Ű��
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);

        MyDataStruct.RecognizePrefabName = referenceImageName;
        MyDataStruct_obj.GetComponent<MyDataStruct>().GetName();
        MyDataStruct_obj.GetComponent<MyDataStruct>().SetPrefab();

    }

    private void Update()
    {
        
    }
}
