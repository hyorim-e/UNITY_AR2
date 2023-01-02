using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class BtnManager : MonoBehaviour
{
    public GameObject ARManager;

    public GameObject ARSOrigin_ARRecog;
    public GameObject ARSOrigin_Game;

    public GameObject Canvas_ARRecog;
    public GameObject Canvas_Game;

    public GameObject plane;
    public GameObject gameDeco;

    public void OnClickRecogBtn()
    {
        ARManager.SetActive(false);

        ARSOrigin_Game.SetActive(false);
        ARSOrigin_ARRecog.SetActive(true);

        Canvas_Game.SetActive(false);
        Canvas_ARRecog.SetActive(true);

        plane.SetActive(false);
        gameDeco.SetActive(false);
    }

    public void OnClickGameBtn()
    {
        ARManager.SetActive(true);

        ARSOrigin_ARRecog.SetActive(false);
        ARSOrigin_Game.SetActive(true);

        Canvas_ARRecog.SetActive(false);
        Canvas_Game.SetActive(true);

        plane.SetActive(true);
        gameDeco.SetActive(true);
    }
}