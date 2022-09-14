using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ImageTracker : MonoBehaviour
{
    private ARTrackedImageManager TIManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;

    private void Awake()
    {
        TIManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();

        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            spawnedObject.Add(newObject.name, newObject);
        }
    }

    private void OnEnable()
    {
        TIManager.trackedImagesChanged += OnTrackedImageChanged;
    }

    private void OnDisable()
    {
        TIManager.trackedImagesChanged -= OnTrackedImageChanged;
    }

    void OnTrackedImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added) // .added Ʈ��ŷ�Ǵ� �̹����� �߰��Ǿ��� ��
        {
            UpdateSpawnObject(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated Ʈ��ŷ�Ǵ� �̹����� ����Ǿ��� ��
        {
            UpdateSpawnObject(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.removed) // .removed Ʈ��ŷ�Ǵ� �̹����� �����Ǿ��� ��
        {
            spawnedObject[trackedImage.name].SetActive(false);
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary���� ������ �̸� �޾ƿ�

        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // ������ ������Ʈ(������)�� ��ġ�� Ʈ��ŷ�� �̹����� ��ġ ��ġ��Ű��
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);
    }
    void Start()
    {

    }

    void Update()
    {

    }
}
