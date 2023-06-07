using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]  // 스크립트를 사용하는 게임 오브젝트에 자동으로 AudioSource 컴포넌트가 추가
public class SoundEffectManager : Singleton<SoundEffectManager>
{
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip[] clips;  // 사용 가능한 모든 사운드 클립을 저장

    private Dictionary<string, AudioClip> clipDictionary;


    protected override void Awake()
    {
        base.Awake();

        InitializeClipDictionary();
    }

    private void InitializeClipDictionary()
    {
        /*
        사운드 클립을 이름으로 접근할 수 있는 딕셔너리를 생성
        사운드 클립의 이름을 키로 사용하여 사운드 클립을 값으로 저장
        */

        clipDictionary = new Dictionary<string, AudioClip>();

        for (int index = 0; index < clips.Length; index++)
        {
            clipDictionary.Add(clips[index].name, clips[index]);
        }
    }

    public void PlaySound(string name, float volume = 1.0f, float pitch = 1.0f)
    {
        /*
        PlaySound()
        주어진 이름의 사운드를 재생
        클립 딕셔너리에서 해당 이름을 찾아서 사운드를 재생
        volume 매개변수는 사운드의 볼륨을 설정하고, pitch 매개변수는 사운드의 피치(음높이)를 설정
        */
        if (!clipDictionary.ContainsKey(name)) return;

        audioSource.pitch = pitch;
        audioSource.PlayOneShot(clipDictionary[name], volume);
    }
}
