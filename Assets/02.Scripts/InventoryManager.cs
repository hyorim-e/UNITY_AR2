using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryManager : MonoBehaviour
{
    public Sprite[] MoviePosterList;
    public Image[] InvenList;

    private int InvenListIndex = 0;

    public Text debugText1;
    public Text debugText2;

    private void Awake()
    {
        //InvenListIndex = 0;
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
                InvenList[InvenListIndex].sprite = MoviePoster;
                InvenListIndex += 1;
            }
            // 첫 번째 칸 여우는 잘 바뀌는데 두 번째 칸 토끼가 포스터랑 겹치게 나옴.
        }
    }
}
