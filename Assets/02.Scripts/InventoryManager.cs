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

    [HideInInspector]
    public int InvenListIndex;
    // 여기서 초기화하면 앱 껐다 켜도 리셋이 안됨. Awake에서 해야 하는 듯.

    private Button invenCloseBtn;

    public Text debugText1;
    public Text debugText2;

    private void Awake()
    {
        InvenListIndex = 0;

        invenCloseBtn = GameObject.Find("Canvas_Game").transform.Find("UI Tab(Inventory New Version)").transform.Find("Tab_Buttons").transform.Find("CloseButton").GetComponent<Button>();
        // 비활성화 오브젝트 Find 할 때는 transform으로 들어가야 한다고 했음.
        invenCloseBtn.onClick.AddListener(IndexCheck);

        debugText2.text = "인덱스 길이: " + InvenList.Length;
    }
    void Start()
    {
        //InvenListIndex = 0; 
        // Start에서 초기화하면 인벤토리 껐다 킬 때마다 계속 0으로 갱신되는 듯함. 그래서 계속 인벤토리 첫 칸만 바뀌는 듯.
    }

    public void InventoryUpdate()
    {
        debugText1.text = "인벤토리 인덱스: " + InvenListIndex;

        //bool exists = false;

        // 인벤토리 업데이트 전 인벤토리에 이미 존재하는지 확인
        /*foreach(Image inven in InvenList)
        {
            if (MyDataStruct.spawnedObject.name == inven.sprite.name)
            {
                exists = true;
                break;
            }
        }*/

        foreach (Sprite MoviePoster in MoviePosterList)
        {
            /*// 이미 존재하면 바로 종료
            if (exists)
            {
                debugText1.text = "이미 인식한 이미지입니다";
                break;
            }*/


            //debugText1.text = "MoviePoster = " + MoviePoster.name; 
            // 항상 Ticket만 뜸. 버튼 터치 시 시점이 이미 foreach가 다 돌아서 마지막인 Ticket으로만 무조건 뜨는 듯.
            //debugText2.text = "RecogPrefab = " + MyDataStruct.spawnedObject.name;

            if (MoviePoster.name == MyDataStruct.spawnedObject.name)
            {
                //debugText2.text = "MoviePoster.name == MyDataStruct.spawnedIbject.name";

                // 인벤토리에 빈 슬롯이 있는지 확인
                if (InvenListIndex < InvenList.Length)
                {

                    // 스프라이트를 다음 사용 가능한 슬롯에 할당
                    InvenList[InvenListIndex].sprite = MoviePoster;
                    InvenListIndex += 1;
                    break;
                    // 첫번째 인식할 때는 인덱스 증가가 안돼서 그 다음엔 첫 인벤토리가 덮어 씌워짐.
                    // 그 다음부터는 잘됨.
                    // 인벤토리 안눌러보고 바로 인식하기 갔을 때만 그러는 듯?
                    
                }
                else
                {
                    debugText1.text = "Inventory full";
                }
            }    
        }
        //debugText1.text = "인벤토리 인덱스: " + InvenListIndex;
        // 인벤토리 인덱스 증가를 보관함 버튼의 onClick이 아니라
        // AR인식하는 곳의 배치하기 버튼의 onClick에 넣어야 함

        //debugText2.text = "InventoryUpdate Function Done";
        Debug.Log("InventoryUpdate Function Done");
    }

    void IndexCheck()
    {
        debugText1.text = "인벤토리 인덱스: " + InvenListIndex;
    }
}