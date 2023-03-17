using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoystickSound : MonoBehaviour
{
    public AudioClip soundClip;
    public float cooldownTime = 0.5f; // 중복 재생 방지용 쿨다운 시간
    private AudioSource audioSource;
    private float lastPlayTime = -1f;

    void Start()
    {
        audioSource = transform.GetChild(0).GetComponent<AudioSource>();
    }

    void FixedUpdate()
    {
        float horizontal = Input.GetAxis("Horizontal");
        float vertical = Input.GetAxis("Vertical");

        if (horizontal != 0 || vertical != 0)
        {
            if (Time.time - lastPlayTime > cooldownTime)
            {
                audioSource.PlayOneShot(soundClip);
                lastPlayTime = Time.time;
            }
        }
    }
}
