using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryClick : MonoBehaviour
{
    private string imageName;
    private GameObject selectedObject;
    public Text text;

    public void OnClick()
    {
        imageName = this.GetComponentInChildren<Sprite>().name;

        text.text = imageName;

        selectedObject = GameObject.Find(imageName);

        MyDataStruct.spawnedObject = selectedObject;

        // ImageTracker2.cs 의 SetIndicator() 실행
        // ARManager2.cs 의 OnClickMakePrefabBtn() 실행

    }
}
