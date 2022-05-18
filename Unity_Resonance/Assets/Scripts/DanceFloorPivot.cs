using UnityEngine;
using System;
using UnityEngine.InputSystem;
using TouchPhase = UnityEngine.TouchPhase;

public class DanceFloorPivot : MonoBehaviour
    {
        [SerializeField] public Transform small;

        [SerializeField] public Transform big;

        [SerializeField] protected MeshCollider floor;

        [SerializeField] private GameObject indicator;
        // Start is called before the first frame update
        void Start()
        {
            floor = this.GetComponentInChildren<MeshCollider>();
        }

        // Update is called once per frame
        void Update()
        {
            #if UNITY_EDITOR
            var ms = Mouse.current;
            // if(Input.GetMouseButtonDown(0))
            if (ms.leftButton.wasPressedThisFrame)
            {
                RaycastHit hit;
                // Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                // var oldmsPos = Input.mousePosition;
                var newmsPos = ms.position.ReadValue();
                Ray ray = Camera.main.ScreenPointToRay(ms.position.ReadValue());
                Debug.DrawRay(ray.origin,ray.direction*100f,Color.black,2f);
                if (Physics.Raycast(ray, out hit, Single.MaxValue))
                {
                    if (hit.collider == floor)
                    {
                        var worldPosition = hit.point;
                        // Debug.LogWarning(worldPosition);
                        // testCube.transform.position = worldPosition;
                    
                        Vector2 scenePos = new Vector2(worldPosition.x, worldPosition.z);
                        var danceFloorPos = DanceFloorHelper.PosScene2Unified(scenePos);       
                        var me = CharManager.instance.GetMe();
                        if(me) me.MoveStart(worldPosition);

                        // ShowPointer(worldPosition);
                        
                    }
                }
                // if (floor.Raycast(ray, out hit, Single.MaxValue))
                // {
                    // var worldPosition = hit.point;
                    // Vector2 scenePos = new Vector2(worldPosition.x, worldPosition.z);
                    // var danceFloorPos = DanceFloorHelper.PosScene2Unified(scenePos);
                    //
                    // Debug.LogWarning(danceFloorPos);
                // }
            }
            #endif
            
            // #if PLATFORM_ANDROID || PLATFORM_IOS
            // if (Input.touchCount > 0)
            // {
            //     for (int i = 0; i < Input.touchCount; i++)
            //     {
            //         var touch_i = Input.GetTouch(i);
            //         if (touch_i.phase == TouchPhase.Began)
            //         {
            //             RaycastHit hit;
            //             Ray ray = Camera.main.ScreenPointToRay(touch_i.position);
            //             if (floor.Raycast(ray, out hit, Single.MaxValue))
            //             {
            //                 Debug.Log($"click position is {hit.point}");
            //                 var worldPosition = hit.point;
            //                 // Debug.LogWarning(worldPosition);
            //                 // testCube.transform.position = worldPosition;
            //                 Vector2 scenePos = new Vector2(worldPosition.x, worldPosition.z);
            //                 var danceFloorPos = DanceFloorHelper.PosScene2Unified(scenePos);
            //                 // Debug.LogWarning(danceFloorPos);
            //                 //移动我
            //                 // var me = CharMgr.instance.GetMe();
            //                 // if(me) me.Move(danceFloorPos);
            //                 
            //                 // ShowPointer(worldPosition);
            //
            //             }
            //         }
            //     }
            // }
            // #endif
            
        }

    //     private int curTimerID = -1;
    //     void ShowPointer(Vector3 position)
    //     {
    //         if (indicator.activeSelf && curTimerID != -1)
    //         {
    //             TimeMgr.instance.RemoveTimer(curTimerID);
    //         }
    //         indicator.SetActive(true);
    //         indicator.transform.position = position;
    //         this.curTimerID = TimeMgr.instance.AddTimer(1000, HidePointer);
    //     }
    //
    //     void HidePointer()
    //     {
    //         indicator.SetActive(false);
    //         curTimerID = -1;
    //     }
    // }

        
    }
