using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class Animation : MonoBehaviour
{
    private Animator animator;

    List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private void Awake()
    {
        animator = GetComponent<Animator>();

        animator.SetBool("Touch", true);
    }

    void Update()
    {
        MoveAnimation();
    }

    public void MoveAnimation()
    {
        if (Input.touchCount == 0) return;

        Touch touch = Input.GetTouch(0);
        if (touch.phase != TouchPhase.Began) return;

        Pose hitPose = hits[0].pose;
        if (this.transform.position.Equals(hitPose.position)){
            animator.SetBool("Touch", false);
        }
        else animator.SetBool("Touch", true);

    }
}
