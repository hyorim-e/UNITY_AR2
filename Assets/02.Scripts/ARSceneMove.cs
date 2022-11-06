using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARSceneMove : MonoBehaviour
{
    public void OnClickButton()
    {
        SceneManager.LoadScene("GameScene");
    }

}
