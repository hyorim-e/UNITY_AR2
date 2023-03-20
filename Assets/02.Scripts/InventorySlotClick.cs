using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventorySlotClick : MonoBehaviour
{
    public GameObject Inventory;

    private string imageName;
    private GameObject selectedObject;
    public Text text;

    public void OnClick()
    {
        Inventory.SetActive(false); 
        // 인벤토리 꺼짐은 관찰 가능한데 그 후론 모르겠음. 안되고 있는 듯함.
        // ARManager2.cs 의 OnClickMakePrefabBtn() (배치하기 눌렀을 때 배치 미리보기 나오는 기능) 실행 안됨.
        // 배치하기 버튼 누르면 기능 잘됨.

        imageName = this.GetComponentInChildren<Sprite>().name;

        text.text = imageName;

        // transform으로 찾아들어가면 비활성화된 오브젝트 접근 가능하다고 함.
        selectedObject = transform.Find(imageName).gameObject;
        //selectedObject = GameObject.Find(imageName);
        

        MyDataStruct.spawnedObject = selectedObject;

        // ImageTracker2.cs 의 SetIndicator() 실행
        // ARManager2.cs 의 OnClickMakePrefabBtn() 실행

    }
}
