using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [RequireComponent(typeof(Collider))]
    public abstract class ClickableObject : MonoBehaviour
    {

        private Collider collider;

        private void Awake()
        {
            collider = GetComponent<Collider>();
        }

        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        #if UNITY_EDITOR
            if (Input.GetMouseButtonDown(0))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                // Debug.DrawRay(ray.origin,ray.direction*10, Color.yellow);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit, Single.MaxValue))
                {
                    if(hit.collider.gameObject==gameObject) OnClick();
                }

            }   
        #endif
        #if PLATFORM_IOS || PLATFORM_ANDROID
            if (Input.touchCount > 0)
            {
                for (int i = 0; i < Input.touchCount; i++)
                {
                    var touch_i = Input.GetTouch(i);
                    if (touch_i.phase == TouchPhase.Began)
                    {
                        RaycastHit hit;
                        Ray ray = Camera.main.ScreenPointToRay(touch_i.position);
                        if (Physics.Raycast(ray, out hit, Single.MaxValue))
                        {
                            if(hit.collider.gameObject==gameObject) OnClick();
                        }
                        
                    }
                }

            }
        #endif

        }

        // private void OnMouseDown()
        // {
        //     Debug.Log($"clicked {gameObject.name}");
        // }

        // private void OnDrawGizmos()
        // {
        //     if (Input.GetMouseButton(0))
        //     {
        //         Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        //         Gizmos.DrawRay(ray);
        //     }
        // }


        /// <summary>
        /// 在子类中实现这个函数，以对应不同的点击需求
        /// </summary>
        protected abstract void OnClick();
        
    }
}
