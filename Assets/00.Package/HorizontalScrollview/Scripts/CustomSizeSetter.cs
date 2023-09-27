using UnityEngine.EventSystems;

namespace UnityEngine.UI
{
    [ExecuteAlways]
    [RequireComponent(typeof(HorizontalScrollView))]
    [RequireComponent(typeof(RectTransform))]
    public class CustomSizeSetter : UIBehaviour, ILayoutSelfController
    {
        public float Width;
        public float Height;

        private RectTransform m_Rect;
        private RectTransform rectTransform
        {
            get
            {
                if (m_Rect == null)
                    TryGetComponent(out m_Rect);
                return m_Rect;
            }
        }

        private HorizontalScrollView horizontalScrollView
        {
            get
            {
                if (m_horizontalScrollView == null)
                {
                    TryGetComponent(out m_horizontalScrollView);
                }
                return m_horizontalScrollView;
            }
        }
        private HorizontalScrollView m_horizontalScrollView;

        private CustomSizeFitter customSizeFitter
        {
            get
            {
                if (m_customSizeFitter == null)
                {
                    horizontalScrollView.List.TryGetComponent(out m_customSizeFitter);
                }
                return m_customSizeFitter;
            }
        }
        private CustomSizeFitter m_customSizeFitter;

        // field is never assigned warning
#pragma warning disable 649
        private DrivenRectTransformTracker m_Tracker;
#pragma warning restore 649

        protected override void OnEnable()
        {
            base.OnEnable();
            SetDirty();
        }

        protected override void OnDisable()
        {
            m_Tracker.Clear();
            LayoutRebuilder.MarkLayoutForRebuild(rectTransform);
            base.OnDisable();
        }

        protected override void OnRectTransformDimensionsChange()
        {
            SetDirty();
        }

        private void HandleSelfFitting()
        {
            float contentWidth = customSizeFitter.Width / horizontalScrollView.List.childCount;
            LayoutUtility.GetMinSize(m_Rect, 0);
            m_Tracker.Add(this, rectTransform, DrivenTransformProperties.SizeDeltaX);
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, horizontalScrollView.ShowingContentCount * contentWidth);
            //rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, Width);

            m_Tracker.Add(this, rectTransform, DrivenTransformProperties.SizeDeltaY);
            rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, Height);
        }

        public virtual void SetLayoutHorizontal()
        {
            m_Tracker.Clear();
            HandleSelfFitting();
        }

        public virtual void SetLayoutVertical()
        {
            HandleSelfFitting();
        }

        protected void SetDirty()
        {
            if (!IsActive())
                return;

            LayoutRebuilder.MarkLayoutForRebuild(rectTransform);
        }

#if UNITY_EDITOR
        protected override void OnValidate()
        {
            SetDirty();
        }
#endif
    }
}
