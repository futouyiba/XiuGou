using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;

namespace ET
{
    public class LightMgr : MonoBehaviour
    {
        [SerializeField] private Light MainLight;
        [SerializeField] private float initIntensity;
        [SerializeField] private float intensityOff;
        private TweenerCore<float, float, FloatOptions> _switchLightTween;

        private static LightMgr _instance;
        public static LightMgr Instance
        {
            get => _instance;
            private set{}
        }

        private void Awake()
        {
            if (!_instance) _instance = this;
            else
            {
                Debug.LogError($"instance already exists");
                Destroy(this.gameObject);
            }
        }

        // Start is called before the first frame update
        void Start()
        {
            initIntensity = MainLight.intensity;
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void SwitchMainLight(bool isOn)
        {
            // MainLights.SetActive(isOn);
            if (_switchLightTween is {active: true})
            {
                _switchLightTween.Kill();
            }
            if (isOn)
            {
                _switchLightTween = DOTween.To(() => MainLight.intensity, x => MainLight.intensity = x, initIntensity,
                    1f);
            }
            else
            {
                _switchLightTween = DOTween.To(() => MainLight.intensity, x => MainLight.intensity = x, intensityOff,
                    1f);
            }
        }
    }
}
