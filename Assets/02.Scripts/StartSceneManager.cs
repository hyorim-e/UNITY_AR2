using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class StartSceneManager : MonoBehaviour
{
    public int loadSceneIndex;

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

    public void OnClickButton()
    {
        SceneManager.LoadScene("MergeScene");
    }
}
