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
        // NPC ĳ������ Transform�� �����ɴϴ�.
        npcTransform = transform;

        // Canvas�� RectTransform�� �����ɴϴ�.
        canvasRectTransform = canvas.GetComponent<RectTransform>();

        // NPC �̸��� ��� ������Ʈ�� �����մϴ�.
        npcNameObj = Instantiate(talkBubbleImage, canvas.transform);
        npcNameText = npcNameObj.GetComponentInChildren<Text>();
        npcNameText.text = "NPC Name";

        // NPC �̸��� ��� ��ġ�� �ʱ�ȭ�մϴ�.
        UpdateNPCNamePosition();
    }

    private void LateUpdate()
    {
        // NPC �̸��� �׻� ī�޶� �������� �����մϴ�.
        npcNameObj.transform.rotation = Quaternion.LookRotation(npcNameObj.transform.position - Camera.main.transform.position);
    }

    private void UpdateNPCNamePosition()
    {
        // NPC ĳ������ ��ġ�� �������� NPC �̸��� ��� ��ġ�� �����մϴ�.
        Vector3 npcPosition = npcTransform.position;
        Vector3 npcNamePosition = new Vector3(npcPosition.x, npcPosition.y + 2f, npcPosition.z);
        npcNameObj.transform.position = npcNamePosition;

        // NPC �̸��� ��� ��ġ�� ȭ�� ��ǥ�� ��ȯ�մϴ�.
        Vector2 screenPosition = Camera.main.WorldToScreenPoint(npcNamePosition);

        // ȭ�� ��ǥ�� Canvas�� ��ǥ�� ��ȯ�մϴ�.
        Vector2 canvasPosition;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(canvasRectTransform, screenPosition, null, out canvasPosition);

        // NPC �̸��� ��� ��ġ�� �����մϴ�.
        npcNameObj.GetComponent<RectTransform>().anchoredPosition = canvasPosition;
    }
}
