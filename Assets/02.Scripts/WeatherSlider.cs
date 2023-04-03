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

    public float rain_simulationSpeed;

    // Start is called before the first frame update
    void Start()
    {
        rain_simulationSpeed = rain.main.simulationSpeed;

        // rainSlider.on

        rainSlider.onValueChanged.RemoveAllListeners();
        rainSlider.minValue = 0;
        rainSlider.maxValue = 100;
        Debug.Log(rain.main.simulationSpeed);

        rainSlider.value = rain_simulationSpeed;
        rainSlider.onValueChanged.AddListener(delegate { OnRainSlider(); });
    }

    public void OnRainSlider()
    {
        // rain = GetComponent<ParticleSystem>();
        // float rain_simulationSpeed = rain.main.simulationSpeed;
        // rainSlider.onValueChanged.RemoveAllListeners();
        /*
        rainSlider.value = rain.main.simulationSpeed;
        rainSlider.minValue = 0;
        rainSlider.maxValue = 100;
        Debug.Log(rain.main.simulationSpeed);
        */
        //rainSlider.value = rain.main.simulationSpeed;
        rain_simulationSpeed = rainSlider.value;
        //rain.main.simulationSpeed = rainSlider.value;

    }

    /*
    public void OnSnowSlider()
    {
        // snow = GetComponent<ParticleSystem>();
        // float snow_simulationSpeed = snow.main.simulationSpeed;

        snowSlider.value = snow.main.simulationSpeed;
        snowSlider.minValue = 0;
        snowSlider.maxValue = 100;
    }
    */
}
