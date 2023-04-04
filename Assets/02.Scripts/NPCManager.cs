using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NPCManager : MonoBehaviour
{
    [SerializeField] private Canvas canvas;

    [SerializeField] private GameObject talkBubbleImage;

    private Transform npcTransform;
    private RectTransform canvasRectTransform;
    private GameObject npcNameObj;
    private Text npcNameText;

    private void Start()
    {
        // NPC 캐릭터의 Transform을 가져옵니다.
        npcTransform = transform;

        // Canvas의 RectTransform을 가져옵니다.
        canvasRectTransform = canvas.GetComponent<RectTransform>();

        // NPC 이름을 띄울 오브젝트를 생성합니다.
        npcNameObj = Instantiate(talkBubbleImage, canvas.transform);
        npcNameText = npcNameObj.GetComponentInChildren<Text>();
        npcNameText.text = "NPC Name";

        // NPC 이름을 띄울 위치를 초기화합니다.
        UpdateNPCNamePosition();
    }

    private void LateUpdate()
    {
        // NPC 이름을 항상 카메라 방향으로 조정합니다.
        npcNameObj.transform.rotation = Quaternion.LookRotation(npcNameObj.transform.position - Camera.main.transform.position);
    }

    private void UpdateNPCNamePosition()
    {
        // NPC 캐릭터의 위치를 기준으로 NPC 이름을 띄울 위치를 설정합니다.
        Vector3 npcPosition = npcTransform.position;
        Vector3 npcNamePosition = new Vector3(npcPosition.x, npcPosition.y + 2f, npcPosition.z);
        npcNameObj.transform.position = npcNamePosition;

        // NPC 이름을 띄울 위치를 화면 좌표로 변환합니다.
        Vector2 screenPosition = Camera.main.WorldToScreenPoint(npcNamePosition);

        // 화면 좌표를 Canvas의 좌표로 변환합니다.
        Vector2 canvasPosition;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, screenPosition, null, out canvasPosition);

        // NPC 이름을 띄울 위치를 조정합니다.
        npcNameObj.GetComponent<RectTransform>().anchoredPosition = canvasPosition;
    }
}
