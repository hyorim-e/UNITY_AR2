using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NPCManager : MonoBehaviour
{
    /* [SerializeField] private Canvas canvas;

     [SerializeField] private GameObject talkBubbleImage;

     private Transform npcTransform;
     private RectTransform canvasRectTransform;
     private GameObject npcNameObj;
     private Text npcNameText;

     public Transform playerTransform;
     public Transform objectTransform;
     public float distanceThreshold = 2.0f;
     //public Canvas canvas;
     public Image image;

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

     void Update()
     {
         float distance = Vector3.Distance(playerTransform.position, objectTransform.position);
         if (distance < distanceThreshold)
         {
             canvas.enabled = true;
             image.enabled = true;
         }
         else
         {
             canvas.enabled = false;
             image.enabled = false;
         }
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
     }*/

    public Transform playerTransform;
    public Transform objectTransform;
    public float distanceThreshold = 2.0f;
    [SerializeField] public Canvas canvas;
    [SerializeField] public Image bubbleImage;
    [SerializeField] public Text bubbleText;

    private bool isBubbleActive = false;

    void Update()
    {
        float distance = Vector3.Distance(playerTransform.position, objectTransform.position);
        if (distance < distanceThreshold && !isBubbleActive)
        {
            ShowBubble();
        }
        else if (distance >= distanceThreshold && isBubbleActive)
        {
            HideBubble();
        }
    }

    void ShowBubble()
    {
        isBubbleActive = true;
        canvas.enabled = true;
        bubbleImage.enabled = true;
        bubbleText.enabled = true;

        // ��ǳ�� ��ġ�� ������Ʈ ���� �����մϴ�.
      /*  Vector3 objectPosition = objectTransform.position;
        Vector3 screenPosition = Camera.main.WorldToScreenPoint(objectPosition);
        RectTransform rectTransform = bubbleImage.GetComponent<RectTransform>();
        rectTransform.position = screenPosition + new Vector3(0, rectTransform.rect.height / 2, 0);*/
    }

    void HideBubble()
    {
        isBubbleActive = false;
        canvas.enabled = false;
        bubbleImage.enabled = false;
        bubbleText.enabled = false;
    }
}
