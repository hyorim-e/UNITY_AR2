using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WeatherSlider : MonoBehaviour
{
    public Slider rainSlider;
    public Slider snowSlider;

    public ParticleSystem rain;
    public ParticleSystem snow;



    // Start is called before the first frame update
    void Start()
    {
        rainSlider.onValueChanged.AddListener(OnRainSlider);
        snowSlider.onValueChanged.AddListener(OnSnowSlider);
    }


    public void OnRainSlider(float value)
    {
        // rain ��ƼŬ�� MainModule�� ������
        ParticleSystem.MainModule mainModule = rain.main;

        // �ùķ��̼� �ӵ� ����
        mainModule.simulationSpeed = value;

        rainSlider.minValue = 2.5f;
        rainSlider.maxValue = 7.5f;
    }


    public void OnSnowSlider(float value)
    {
        // snow ��ƼŬ�� MainModule�� ������
        ParticleSystem.MainModule mainModule = snow.main;

        // �ùķ��̼� �ӵ� ����
        mainModule.simulationSpeed = value;

        snowSlider.minValue = 0.3f;
        snowSlider.maxValue = 1.0f;
    }

}
