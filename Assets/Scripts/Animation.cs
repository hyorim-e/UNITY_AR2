using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Animation : MonoBehaviour
{
    private Animator animator;

    public ARRaycastManager arRaycaster;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();

    public ARSessionOrigin arOrigin;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        MoveAnimation();
    }

    public void MoveAnimation()
    {
        //if (Input.touchCount == 0) return;

        Touch touch = Input.GetTouch(0);
        if (touch.phase != TouchPhase.Began) return;

        if (arRaycaster.Raycast(touch.position, hits, TrackableType.Planes))
        {
            Pose hitPose = hits[0].pose;

            animator.SetBool("Touch", true);
        }
        if (this.transform.position == arOrigin.transform.position)
        {
            animator.SetBool("Touch", false);
        }


    }
}
