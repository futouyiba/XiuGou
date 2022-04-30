using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class DanceFloorPivot : MonoBehaviour
    {
        [SerializeField] public Transform small;

        [SerializeField] public Transform big;

        [SerializeField] protected MeshCollider floor;

        [SerializeField] private GameObject testCube;
        // Start is called before the first frame update
        void Start()
        {
            floor = this.GetComponentInChildren<MeshCollider>();
        }

        // Update is called once per frame
        void Update()
        {
            #if UNITY_EDITOR
            if(Input.GetMouseButtonDown(0))
            {
                RaycastHit hit;
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                if (floor.Raycast(ray, out hit, Single.MaxValue))
                {
                    var worldPosition = hit.point;
                    // Debug.LogWarning(worldPosition);
                    // testCube.transform.position = worldPosition;
                    Vector2 scenePos = new Vector2(worldPosition.x, worldPosition.z);
                    var danceFloorPos = DanceFloorHelper.PosScene2Unified(scenePos);
                    var me = CharMgr.instance.GetMe();
                    if(me) me.Move(danceFloorPos);
                    // Debug.LogWarning(danceFloorPos);
                }
            }
            #endif
            
            #if PLATFORM_ANDROID
            if (Input.touchCount > 0)
            {
                for (int i = 0; i < Input.touchCount; i++)
                {
                    var touch_i = Input.GetTouch(i);
                    if (touch_i.phase == TouchPhase.Began)
                    {
                        RaycastHit hit;
                        Ray ray = Camera.main.ScreenPointToRay(touch_i.position);
                        if (floor.Raycast(ray, out hit, Single.MaxValue))
                        {
                            var worldPosition = hit.point;
                            // Debug.LogWarning(worldPosition);
                            // testCube.transform.position = worldPosition;
                            Vector2 scenePos = new Vector2(worldPosition.x, worldPosition.z);
                            var danceFloorPos = DanceFloorHelper.PosScene2Unified(scenePos);
                            // Debug.LogWarning(danceFloorPos);
                            //移动我
                            var me = CharMgr.instance.GetMe();
                            if(me) me.Move(danceFloorPos);
                        }
                    }
                }
            }
            #endif
            
        }
    }
}
