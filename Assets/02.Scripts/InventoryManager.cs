using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    public Sprite[] MoviePosterList;
    // 에디터에서 해당 배열에 할당하는 이미지 이름과
    // MyDataStruct.spawnedObject.name(이미지를 인식했을 때 나오는 프리팹의 이름)이 같아야
    public Image[] InvenList;
    // 여기 인벤토리에 저장함.

    private int InvenListIndex;
    // 여기서 초기화하면 앱 껐다 켜도 리셋이 안됨. Awake에서 해야 하는 듯.

    public Text debugText1;
    public Text debugText2;

    private void Awake()
    {
        InvenListIndex = 0;
    }
    void Start()
    {
        //InvenListIndex = 0; 
        // Start에서 초기화하면 인벤토리 껐다 킬 때마다 계속 0으로 갱신되는 듯함. 그래서 계속 인벤토리 첫 칸만 바뀌는 듯.
    }

    void Update()
    {
        
    }

    public void InventoryUpdate()
    {
        foreach (Sprite MoviePoster in MoviePosterList)
        {
            debugText1.text = "MoviePoster = " + MoviePoster.name; 
            // 항상 Ticket만 뜸. 버튼 터치 시 시점이 이미 foreach가 다 돌아서 마지막인 Ticket으로만 무조건 뜨는 듯.
            debugText2.text = "RecogPrefab = " + MyDataStruct.spawnedObject.name;

            if (MoviePoster.name == MyDataStruct.spawnedObject.name)
            {
                debugText2.text = "MoviePoster.name == MyDataStruct.spawnedIbject.name";

                // 인벤토리에 빈 슬롯이 있는지 확인
                if (InvenListIndex < InvenList.Length)
                {

                    // 스프라이트를 다음 사용 가능한 슬롯에 할당
                    InvenList[InvenListIndex].sprite = MoviePoster;
                    InvenListIndex += 1;

                    
                }
                else
                {
                    debugText1.text = "Inventory full";
                }
            }    
        }
        //debugText2.text = "InventoryUpdate Function Done";
    }
}