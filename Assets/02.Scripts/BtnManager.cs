using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class BtnManager : MonoBehaviour
{
    public GameObject ARManager;
    private ARManager2 ARManager_sc;

    public GameObject ARSOrigin_ARRecog;
    public GameObject ARSOrigin_Game;

    public GameObject Canvas_ARRecog;
    public GameObject Canvas_Game;
    public GameObject Canvas_Place;

    public GameObject plane;
    public GameObject gameDeco;
    public GameObject character;
    public GameObject randomMove;   
    
    public GameObject weather;

    public Button placePrefabBtn;
    public Button PosterRecognizeBtn;

    private void Awake()
    {
        ARManager_sc = ARManager.GetComponent<ARManager2>();
    }

    public void OnClickRecogBtn()
    {
        ARManager.SetActive(false);

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

    public void OnClickGameBtn()
    {
        ARManager.SetActive(true);

        ARSOrigin_ARRecog.SetActive(false);
        ARSOrigin_Game.SetActive(true);

        Canvas_ARRecog.SetActive(false);
        Canvas_Game.SetActive(false);
        Canvas_Place.SetActive(true);

        plane.SetActive(true);
        gameDeco.SetActive(true);
        character.SetActive(true);
        randomMove.SetActive(true);
    }

    public void OnClickPlaceButton()
    {
        weather.SetActive(true);
    }

    public void OnClickCancelButton()
    {
        MyDataStruct.spawnedObject_Indicator.SetActive(false);

        ARManager_sc.isMakePrefabBtnClick = false;

        //placePrefabBtn.onClick.AddListener(ARManager_sc.OnClickMakePrefabBtn);
        //placePrefabBtn.onClick.RemoveListener(ARManager_sc.PlaceIndicatorPrefab);
    }
}