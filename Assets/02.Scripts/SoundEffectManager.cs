using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]  // ��ũ��Ʈ�� ����ϴ� ���� ������Ʈ�� �ڵ����� AudioSource ������Ʈ�� �߰�
public class SoundEffectManager : Singleton<SoundEffectManager>
{
    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip[] clips;  // ��� ������ ��� ���� Ŭ���� ����

    private Dictionary<string, AudioClip> clipDictionary;


    protected override void Awake()
    {
        base.Awake();

        InitializeClipDictionary();
    }

    private void InitializeClipDictionary()
    {
        /*
        ���� Ŭ���� �̸����� ������ �� �ִ� ��ųʸ��� ����
        ���� Ŭ���� �̸��� Ű�� ����Ͽ� ���� Ŭ���� ������ ����
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
        �־��� �̸��� ���带 ���
        Ŭ�� ��ųʸ����� �ش� �̸��� ã�Ƽ� ���带 ���
        volume �Ű������� ������ ������ �����ϰ�, pitch �Ű������� ������ ��ġ(������)�� ����
        */
        if (!clipDictionary.ContainsKey(name)) return;

        audioSource.pitch = pitch;
        audioSource.PlayOneShot(clipDictionary[name], volume);
    }
}
