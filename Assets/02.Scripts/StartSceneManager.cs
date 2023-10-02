using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartSceneManager : MonoBehaviour
{
    // Build Settings���� ���Ӿ� ��ȣ �޶����� ���� ����
    public int loadSceneIndex = 1;

    public Slider progressSlider;
    public GameObject startBtn;
    public GameObject progressObj;

    private void Start()
    {
        StartCoroutine(LoadScene_Coroutine(loadSceneIndex));
    }

    public IEnumerator LoadScene_Coroutine(int index)
    {
        progressSlider.value = 0;

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(index);
        asyncOperation.allowSceneActivation = false;
        float progress = 0;

        while (!asyncOperation.isDone)
        {
            progress = Mathf.MoveTowards(progress, asyncOperation.progress, Time.deltaTime);
            progressSlider.value = progress;
            if (progress >= 0.9f)
            {
                progressSlider.value = 1;
                startBtn.SetActive(true);
                progressObj.SetActive(false);
            }
            yield return null;
        }
    }

    // ��ư �Ҹ� ���� �� ��ٸ����� 1�� �� �ε�
    public void OnClickStartBtn()
    {
        Invoke(nameof(LoadScene), 1);
        
    }

    public void LoadScene()
    {
        SceneManager.LoadScene("MergeScene");
    }
}
