using System;
using UnityEngine;

namespace ET
{
    public class NonAnimateEventNotifier :MonoBehaviour
    {
        [SerializeField] private float duration;
        private float timer;
        private CameraPointCollection manager;
        // Start is called before the first frame update
        void Start()
        {
            manager = transform.parent.parent.parent.GetComponent<CameraPointCollection>();
            ResetTimer();
        }


        private void Update()
        {
            timer -= Time.deltaTime;
            if (timer <= 0)
            {
                manager.CameraAnimateEnd();
                ResetTimer();
            }
        }

        private void ResetTimer()
        {
            timer = duration;
        }
    }
}