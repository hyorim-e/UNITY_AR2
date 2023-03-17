using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public VariableJoystick joy;
    public float speed;
    public AudioClip footSound;

    Rigidbody rigid;
    Animator anim;
    Vector3 moveVec;
    AudioSource audioSource;

    bool isPlayingFootstep = false;

    void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        anim = GetComponent<Animator>();
        audioSource = GetComponent<AudioSource>();
    }

    void FixedUpdate()
    {
        float x = joy.Horizontal;
        float z = joy.Vertical;

        moveVec = new Vector3(x, 0, z) * speed * Time.deltaTime;
        rigid.MovePosition(rigid.position + moveVec);

        if (moveVec.magnitude == 0)
            return;

        Quaternion dirQuat = Quaternion.LookRotation(moveVec);
        Quaternion moveQuat = Quaternion.Slerp(rigid.rotation, dirQuat, 0.3f);
        rigid.MoveRotation(moveQuat);

        /*  Vector3 moveVector = new Vector3(x, 0f, z);
          bool isMove = moveVector.magnitude > 0;
          anim.SetBool("isMove", isMove);

          if (isMove)
          {
              anim.transform.forward = moveVector;
              if (!audioSource.isPlaying)
              {
                  AudioSource.PlayClipAtPoint(footSound, transform.position);
              }
              else
              {
                  audioSource.Stop();
              }
          }

         transform.Translate(new Vector3(x, 0f, z).normalized * Time.deltaTime * 5f); */

        if (!isPlayingFootstep)
        {
            audioSource.PlayOneShot(footSound);
            isPlayingFootstep = true;
            Invoke("ResetFootstep", footSound.length);
        }
    }

    void ResetFootstep()
    {
        isPlayingFootstep = false;
    }


    void LateUpdate()
    {
        anim.SetBool("isMove", moveVec.magnitude > 0);
    }
}
