using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class LightMgr : MonoBehaviour
    {
        [SerializeField] private GameObject MainLights;

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
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void SwitchMainLight(bool isOn)
        {
            MainLights.SetActive(isOn);
        }
    }
}
