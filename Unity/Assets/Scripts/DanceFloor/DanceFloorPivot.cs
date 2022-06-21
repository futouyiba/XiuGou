using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using Unity.Mathematics;
using UnityEngine;

namespace ET
{
    [ExecuteInEditMode]
    public class DanceFloorPivot : MonoBehaviour
    {
        [SerializeField] public Transform small;

        [SerializeField] public Transform big;
        [SerializeField] public Transform high;

        [SerializeField] protected MeshCollider floor;

        [SerializeField] private GameObject indicator;

        [SerializeField] private CylinderBorder cylinderBorder;
        [SerializeField] public Transform center;

        public float cur_Radius;
        // [OdinSerialize] public Vector3 smallPos1;
        // [OdinSerialize] public Vector3 bigPos1;
        // [ButtonGroup]
        // [Button(ButtonStyle.Box)]
        // private void Save1()
        // {
        //     smallPos1 = small.position;
        //     bigPos1 = big.position;
        //     UpdateColliders();
        // }
        //
        // [ButtonGroup]
        // [Button(ButtonStyle.Box)]
        // private void Load1()
        // {
        //     small.position = smallPos1;
        //     big.position = bigPos1;
        //     UpdateColliders();
        // }
        //
        // [OdinSerialize] public Vector3 smallPos2;
        // [OdinSerialize] public Vector3 bigPos2;
        // [ButtonGroup]
        // [Button(ButtonStyle.Box)]
        // private void Save2()
        // {
        //     smallPos2 = small.position;
        //     bigPos2 = big.position;
        //     UpdateColliders();
        // }
        //
        // [ButtonGroup]
        // [Button(ButtonStyle.Box)]
        // private void Load2()
        // {
        //     small.position = smallPos2;
        //     big.position = bigPos2;
        //     UpdateColliders();
        // }
        // [OdinSerialize] public Vector3 smallPos3;
        // [OdinSerialize] public Vector3 bigPos3;
        // [ButtonGroup]
        // [Button(ButtonStyle.Box)]
        // private void Save3()
        // {
        //     smallPos3 = small.position;
        //     bigPos3 = big.position;
        //     UpdateColliders();
        // }
        //
        // [ButtonGroup]
        // [Button(ButtonStyle.Box)]
        // private void Load3()
        // {
        //     small.position = smallPos3;
        //     big.position = bigPos3;
        //     UpdateColliders();
        // }
        
        
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
                    if(me) me.MoveStart(danceFloorPos);

                    
                    // var scenePos = DanceFloorHelper.PosUnified2Scene(target);
                    var targetPos = DanceFloorHelper.BuildWorldPosition(scenePos);
                    ShowPointer(targetPos);
                    // Debug.LogWarning(targetPos);
                }
            }
            #endif
            
            #if PLATFORM_ANDROID || PLATFORM_IOS
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
                            Debug.Log($"click position is {hit.point}");
                            var worldPosition = hit.point;
                            // Debug.LogWarning(worldPosition);
                            // testCube.transform.position = worldPosition;
                            Vector2 scenePos = new Vector2(worldPosition.x, worldPosition.z);
                            var danceFloorPos = DanceFloorHelper.PosScene2Unified(scenePos);
                            // Debug.LogWarning(danceFloorPos);
                            //移动我
                            var me = CharMgr.instance.GetMe();
                            if(me) me.MoveStart(danceFloorPos);
                            
                            ShowPointer(worldPosition);

                        }
                    }
                }
            }
            #endif
            
        }

        private int curTimerID = -1;
        void ShowPointer(Vector3 position)
        {
            if (indicator.activeSelf && curTimerID != -1)
            {
                TimeMgr.instance.RemoveTimer(curTimerID);
            }
            indicator.SetActive(true);
            indicator.transform.position = position;
            this.curTimerID = TimeMgr.instance.AddTimer(1000, HidePointer);
        }

        void HidePointer()
        {
            indicator.SetActive(false);
            curTimerID = -1;
        }


        private void UpdateColliders()
        {
            
            
            // var pivotSmall = small.GetComponent<ColliderPivot>();
            // var smallXCollider = pivotSmall.GetCollider(0) as BoxCollider;
            // var smallZCollider = pivotSmall.GetCollider(1) as BoxCollider;
            // var pivotBig = big.GetComponent<ColliderPivot>();
            // var bigXCollider = pivotBig.GetCollider(0) as BoxCollider;
            // var bigZCollider = pivotBig.GetCollider(1) as BoxCollider;
            //
            
            // var xCenter=(small.position.x + big.position.x) / 2;
            // var zCenter = (small.position.z + big.position.z) / 2;
            // var xDist= Math.Abs(big.position.x - small.position.x);
            // var zDist= Math.Abs(big.position.z - small.position.z);
            //
            // var smallxSize = smallXCollider.size;
            // smallxSize.x = xDist;
            // smallXCollider.size = smallxSize;
            // var smallxCenter = smallXCollider.center;
            // smallxCenter.x = xCenter;
            // smallXCollider.center = smallxCenter;
            //
            // var smallzSize = smallZCollider.size;
            // smallzSize.z = zDist;
            // smallZCollider.size = smallzSize;
            // var smallzCenter = smallZCollider.center;
            // smallzCenter.z = zCenter;
            // smallZCollider.center = smallzCenter;
            //
            // var bigxSize = bigXCollider.size;
            // bigxSize.x = xDist;
            // smallXCollider.size = bigxSize;
            // var bigxCenter = bigXCollider.center;
            // bigxCenter.x = xCenter;
            // bigXCollider.center = bigxCenter;
            //
            // var bigzSize = bigZCollider.size;
            // bigzSize.z = zDist;
            // bigZCollider.size = bigzSize;
            // var bigzCenter = bigZCollider.center;
            // bigzCenter.z = zCenter;
            // bigZCollider.center = bigzCenter;

        }

        public void UpdateBorder(int id)
        {
            if (id < 0 || id > 2)
            {
                Debug.LogError($"{id} is out of range");
                return;
            }

            cur_Radius = cylinderBorder.ScaleTo(id);
        }


        private void OnDrawGizmos()
        {
            if (Input.GetKey(KeyCode.Y))
            {
                var target = DanceFloorHelper.PosUnifiedPolar2Scene(new Vector2(0, 0));
                Gizmos.DrawSphere(target, .5f);
            }
        }
    }
}
