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
    /// Canvas_Recog의 배치하기 버튼에 연결
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

        // if object != null 보다 ! ReferenceEquals(object, null) 이 성능 개선된다고 함.
        // 근데 개선사항으로 is not null 추천됨. is not null 도 성능 개선 되는지?
        //if (MyDataStruct.spawnedObject is not null && MyDataStruct.spawnedObject_Indicator is not null)
        // indicator도 null이 아닐 때를 조건으로 해버리면 SetIndicator에서 indicator 할당하기 때문에 아래 함수들이 실행이 안됨.
        if (MyDataStruct.spawnedObject is not null) // 인식된 게 있으면
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
        else if (MyDataStruct.spawnedObject is null) // 인식된 게 없으면
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
    /// Canvas_Place의 PlacePrefabButton에 연결
    /// </summary>
    public void OnClickPlacePrefabButton()
    {
        btnClickSound.Play();
    }


    /// <summary>
    /// Canvas_Place의 CancelButton에 연결
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

        //슬롯별로 해당 함수와 inventorySlotClick 스크립트 컴포넌트 넣고 inventorySlotClick.OnClick도 연결
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