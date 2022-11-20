using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;

public class ImageTracker : MonoBehaviour
{
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;
    //private Dictionary<Dictionary<string, GameObject>, int> prefabsNumDict;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();
        //prefabsNumDict = new Dictionary<Dictionary<string, GameObject>, int>();;

        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            spawnedObject.Add(newObject.name, newObject);

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
            PlayerPrefs.SetString(trackedImage.name, trackedImage.name);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated Ʈ��ŷ�Ǵ� �̹����� ����Ǿ��� ��
        {
            UpdateSpawnObject(trackedImage);
            PlayerPrefs.SetString(trackedImage.name, trackedImage.name);
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
    }
}
