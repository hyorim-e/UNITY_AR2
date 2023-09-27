using UnityEngine;
using UnityEngine.UI;

public class HorizontalScrollView : MonoBehaviour
{
    public RectTransform List => list;
    [SerializeField] private RectTransform list;

    [Range(1, 10, order = 10)]
    [SerializeField] private int stepCount;

    public int ShowingContentCount => showingContentCount;
    [Range(1, 10, order = 10)]
    [SerializeField] private int showingContentCount;

    [Range(1.0f, 10.0f)]
    [SerializeField] private float moveSpeed;
    [SerializeField] private bool canLoop;

    private CustomSizeFitter listSizeFitter;
    private bool isScroll;
    private float contentWidth;
    private float listWidth;
    private float listMinX;
    private float listMaxX;
    [SerializeField] private Vector2 targetPosition;

    private void Awake()
    {
        list.TryGetComponent(out listSizeFitter);
        listWidth = listSizeFitter.Width;
        contentWidth = listWidth / list.childCount;
        listMinX = contentWidth * -(showingContentCount * 0.5f);
        listMaxX = contentWidth * (showingContentCount - list.childCount - (showingContentCount * 0.5f));
        targetPosition.x = listMinX;
    }

    private void Update()
    {
        if (!isScroll) return;

        list.localPosition = Vector2.Lerp(list.localPosition, targetPosition, Time.deltaTime * moveSpeed);
        if (Mathf.Abs(list.position.x - targetPosition.x) < 0.1f)
        {
            list.localPosition = targetPosition;
            isScroll = false;
        }
    }

    public void OnClickLeftButton()
    {
        if (targetPosition.x < listMinX || canLoop)
        {
            targetPosition.x += contentWidth * stepCount;
            if (targetPosition.x > listMinX)
            {
                targetPosition.x = (canLoop) ? listMaxX : listMinX;
            }
            isScroll = true;
        }
    }

    public void OnClickRightButton()
    {
        if (targetPosition.x > listMaxX || canLoop)
        {
            targetPosition.x -= contentWidth * stepCount;
            if (targetPosition.x < listMaxX)
            {
                targetPosition.x = (canLoop) ? listMinX : listMaxX;
            }
            isScroll = true;
        }
    }
}