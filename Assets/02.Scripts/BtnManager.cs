using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

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
    }

    // Canvas_Recog�� ��ġ�ϱ� ��ư�� ����
    public void OnClickGameBtn()
    {
        btnClickSound.Play();

        arManager.SetActive(true);

        ARSOrigin_ARRecog.SetActive(false);
        ARSOrigin_Game.SetActive(true);

        Canvas_ARRecog.SetActive(false);
        Canvas_Game.SetActive(false);
        Canvas_Place.SetActive(true);

        plane.SetActive(true);
        gameDeco.SetActive(true);
        character.SetActive(true);
        randomMove.SetActive(true);

        // if object != null ���� ! ReferenceEquals(object, null) �� ���� �����ȴٰ� ��.
        // �ٵ� ������������ is not null ��õ��. is not null �� ���� ���� �Ǵ���?
        //if (MyDataStruct.spawnedObject is not null && MyDataStruct.spawnedObject_Indicator is not null)
        // indicator�� null�� �ƴ� ���� �������� �ع����� SetIndicator���� indicator �Ҵ��ϱ� ������ �Ʒ� �Լ����� ������ �ȵ�.
        if (MyDataStruct.spawnedObject is not null)
        {
            inventoryManager_cs.InventoryUpdate();
            imageTracker2_cs.SetIndicator();
            imageTracker2_cs.HideSpawnedObject();
            collectionBookManager_cs.CollectionOpen();
            arManager2_cs.OnClickMakePrefabBtn();
        }
    }

    public void OnClickPlaceButton()
    {
        weather.SetActive(true);
    }

    // Canvas_Place�� CancelButton�� ����
    public void OnClickCancelButton()
    {
        MyDataStruct.spawnedObject_Indicator.SetActive(false);

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
}