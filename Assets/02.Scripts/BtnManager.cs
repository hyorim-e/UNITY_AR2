using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BtnManager : MonoBehaviour
{
    [SerializeField]
    private ARManager2 arManager2_cs;
    [SerializeField]
    private ImageTracker2 imageTracker2_cs;
    [SerializeField]
    private InventoryManager inventoryManager_cs;
    [SerializeField]
    private CollectionBookManager collectionBookManager_cs;
    [SerializeField]
    private ReadQRCode readQRCode_cs;
    private HideObject[] hideObjects;

    [SerializeField]
    private GameObject arManager;

    public GameObject ARSOrigin_ARRecog;
    public GameObject ARSOrigin_Game;

    public GameObject Canvas_ARRecog;
    public GameObject Canvas_Game;
    public GameObject Canvas_Place;

    public GameObject inventoryUI;

    public GameObject settingBtn;
    public GameObject setting;
    public GameObject collectionBtn;
    public GameObject inventoryBtn;

    public GameObject plane;
    public GameObject gameDeco;
    public GameObject character;
    public GameObject randomMove;   
    
    public GameObject weather;

    public Button placePrefabBtn;
    public Button PosterRecognizeBtn;

    public AudioSource btnClickSound;

    public Text debugTxt;

    private void Awake()
    {
        hideObjects = FindObjectsOfType<HideObject>();
    }

    public void OnClickRecogBtn()
    {
        arManager.SetActive(false);

        ARSOrigin_Game.SetActive(false);
        ARSOrigin_ARRecog.SetActive(true);

        Canvas_Game.SetActive(false);
        Canvas_ARRecog.SetActive(true);
        Canvas_Place.SetActive(false);

        plane.SetActive(false);
        gameDeco.SetActive(false);
        character.SetActive(false);
        randomMove.SetActive(false);

            
        if (MyDataStruct.spawnedObject is not null && imageTracker2_cs.spawnedObject.ContainsKey(MyDataStruct.spawnedObject.name))
        //if (MyDataStruct.spawnedObject.name.Equals("TheHost"))
        {
            imageTracker2_cs.spawnedObject[MyDataStruct.spawnedObject.name].transform.localScale = imageTracker2_cs.spawnedObject_scale[MyDataStruct.spawnedObject.name];
            //MyDataStruct.spawnedObject.transform.localScale = imageTracker2_cs.spawnedObject_scale[MyDataStruct.spawnedObject.name];
            //MyDataStruct.spawnedObject.transform.localScale = new Vector3(1,1,1);
        }
    }

    /// <summary>
    /// Canvas_Recog�� ��ġ�ϱ� ��ư�� ����
    /// </summary>
    public void OnClickGameBtn()
    {
        btnClickSound.Play();

        arManager.SetActive(true);

        ARSOrigin_ARRecog.SetActive(false);
        ARSOrigin_Game.SetActive(true);

        plane.SetActive(true);
        gameDeco.SetActive(true);
        character.SetActive(true);
        randomMove.SetActive(true);

        foreach (HideObject myScript in hideObjects)
        {
            myScript.StartCoroutineInScript();
        }

        // if object != null ���� ! ReferenceEquals(object, null) �� ���� �����ȴٰ� ��.
        // �ٵ� ������������ is not null ��õ��. is not null �� ���� ���� �Ǵ���?
        //if (MyDataStruct.spawnedObject is not null && MyDataStruct.spawnedObject_Indicator is not null)
        // indicator�� null�� �ƴ� ���� �������� �ع����� SetIndicator���� indicator �Ҵ��ϱ� ������ �Ʒ� �Լ����� ������ �ȵ�.
        if (MyDataStruct.spawnedObject is not null) // �νĵ� �� ������
        {
            Canvas_ARRecog.SetActive(false);
            Canvas_Game.SetActive(false);
            Canvas_Place.SetActive(true);

            inventoryManager_cs.InventoryUpdate();
            imageTracker2_cs.SetIndicator();
            imageTracker2_cs.HideSpawnedObject();
            collectionBookManager_cs.CollectionOpen();
            arManager2_cs.OnClickMakePrefabBtn();

            debugTxt.text = DateTime.Now.ToString(("yyyy-MM-dd tt HH:mm:ss"));
            //Debug.Log(DateTime.Now.ToString(("yyyy-MM-dd tt HH:mm:ss")));

        }
        else if (MyDataStruct.spawnedObject is null) // �νĵ� �� ������
        {
            Canvas_ARRecog.SetActive(false);
            Canvas_Place.SetActive(false);
            Canvas_Game.SetActive(true);
        }

        readQRCode_cs.HideSpawnedObject_QR();
    }

    public void OnClickPlaceButton()
    {
        weather.SetActive(true);
    }

    /// <summary>
    /// Canvas_Place�� PlacePrefabButton�� ����
    /// </summary>
    public void OnClickPlacePrefabButton()
    {
        btnClickSound.Play();
    }


    /// <summary>
    /// Canvas_Place�� CancelButton�� ����
    /// </summary>
    public void OnClickCancelButton()
    {
        btnClickSound.Play();

        if (MyDataStruct.spawnedObject_Indicator is not null)
        {
            MyDataStruct.spawnedObject_Indicator.SetActive(false);
        }

        arManager2_cs.isMakePrefabBtnClick = false;

        Canvas_Game.SetActive(true);
        Canvas_Place.SetActive(false);

        //placePrefabBtn.onClick.AddListener(arManager_cs.OnClickMakePrefabBtn);
        //placePrefabBtn.onClick.RemoveListener(arManager_cs.PlaceIndicatorPrefab);
    }

    public void OnClickInvenSlot()
    {
        btnClickSound.Play();

        settingBtn.SetActive(true);
        setting.SetActive(false);
        collectionBtn.SetActive(true);
        inventoryBtn.SetActive(true);
        weather.SetActive(true);
        inventoryUI.SetActive(false);

        Canvas_Game.SetActive(false);
        Canvas_Place.SetActive(true);

        //���Ժ��� �ش� �Լ��� inventorySlotClick ��ũ��Ʈ ������Ʈ �ְ� inventorySlotClick.OnClick�� ����
    }

    public void OnClickButton()
    {
        SceneManager.LoadScene("OceanMap");
    }

    public void OnClickButton2()
    {
        SceneManager.LoadScene("MergeScene");
    }
}