using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventorySlotClick : MonoBehaviour
{
    private string imageName;
    //public Text debugText;

    ImageTracker2 imageTracker2_sc;
    ARManager2 arManager2_sc;
    ObjectPool objectPool_cs;

    private void Awake()
    {
        imageTracker2_sc = GameObject.Find("AR Session Origin_ARRecog").transform.Find("AR Session Origin").GetComponent<ImageTracker2>();
        // Find로 찾으려면 찾는 오브젝트가 활성화돼 있어야 가능.
        // 근데 AR Session Origin_ARRecog가 활성화돼 있으면 안돼서(AR Session Origin_Game랑 겹침)
        // AR Session Origin_ARRecog를 빈 오브젝트로 감싸서 자식으로 만들고 네이밍 다시 했음.
        arManager2_sc = GameObject.Find("ARManager").GetComponent<ARManager2>();
        objectPool_cs = GameObject.Find("ObjectPool").GetComponent<ObjectPool>();
    }

    // 인벤토리 버튼 별 배치되도록 하는 함수 (인스펙터에서 연결 필요)
    public void OnClick()
    {
        //SettingsMenu.cs의 toggleMenu

        // ARManager2.cs 의 OnClickMakePrefabBtn() (배치하기 눌렀을 때 배치 미리보기 나오는 기능) 실행 안됨.
        // 배치하기 버튼으로는 기능 잘됨.

        imageName = transform.GetChild(1).GetComponentInChildren<Image>().sprite.name;

        //debugText.text = imageName;
        Debug.Log("imageName => " + imageName);

        // ※GetComponentInChildren는 무조건 자식 중 첫 번째 꺼 받아오는거임※
        // ※자식 고르려면 transform의 GetChild(n) 사용해서 접근해야 함※

        // selectedObject = transform.Find(imageName).gameObject;
        //selectedObject = GameObject.Find(imageName);
        //selectedObject = imageTracker2_sc.spawnedObject[imageName];

        //Debug.Log(imageTracker2_sc.spawnedObject[imageName].name);

        //if (imageTracker2_sc.spawnedObject[imageName]) // 인벤토리에서 클릭한 이미지에 따른 프리팹 존재하면
        if (objectPool_cs.spawnedObject[imageName]) // 인벤토리에서 클릭한 이미지에 따른 프리팹 존재하면
        {    
            //MyDataStruct.spawnedObject = imageTracker2_sc.spawnedObject[imageName];
            MyDataStruct.spawnedObject = objectPool_cs.spawnedObject[imageName];
        }

        imageTracker2_sc.SetIndicator();
        arManager2_sc.OnClickMakePrefabBtn();
    }
}
