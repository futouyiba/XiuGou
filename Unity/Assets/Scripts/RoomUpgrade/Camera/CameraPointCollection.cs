using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using Unity.Transforms;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using Random = UnityEngine.Random;

namespace ET
{
    public class CameraPointCollection : SerializedMonoBehaviour
    {
        [Header("Initials")]
        [ReadOnly] public List<GameObject> actives;
        [ReadOnly] public List<GameObject> inactives;

        [Header("Config")] 
        [NonSerialized, OdinSerialize] public Dictionary<int, GameObject> levels;

        [NonSerialized, OdinSerialize] public GameObject initVcam;

        [Header("vCam")] [ReadOnly] public GameObject curVcam;

        [NonSerialized, OdinSerialize] public int testToLevel = 0;
        // [NonSerialized, OdinSerialize] public 
        // Start is called before the first frame update

        private void Start()
        {
            actives = new List<GameObject>();
            inactives = new List<GameObject>();
            foreach (Transform child in transform)
            {
                if (child.gameObject.activeSelf) actives.Add(child.gameObject);
                else inactives.Add(child.gameObject);
            }

            curVcam = initVcam;
        }

        public void ResetCollection()
        {
            // foreach (var active in actives)
            // {
            //     active.SetActive(true);
            // }
            //
            // foreach (var inactive in inactives)
            // {
            //     inactive.SetActive(false);
            // }

            if (curVcam)
            {
                curVcam.SetActive(false);
            }
            SwitchLevel(0);
        }

        
        public void SwitchLevel(int level)
        {
            if (!levels.TryGetValue(level, out var levelObj))
            {
                Debug.LogError($"level {level} does not exist");
                return;
            }
            curVcam.SetActive(false);
            // var curLevelVcamTransform = curVcam.transform.parent;
            // if(!curLevelVcamObj.activeSelf) Debug.LogError($"level vcam obj={curLevelVcamObj.name} is not active");
            // curLevelVcamObj.SetActive(false);
            // levelObj.transform.GetChild(0).gameObject.SetActive(true);
            //todo: 找到这个level下的默认vcam，打开它，然后设为curVcam
            var baseVcam = levelObj.transform.GetChild(0).GetChild(0).gameObject;
            baseVcam.SetActive(true);
            curVcam = baseVcam;
        }

        [Button("RandomCam")]
        public void SwitchRandomCamera()
        {
            var camRootObj = curVcam.transform.parent.gameObject;
            var sibId = curVcam.transform.GetSiblingIndex();
            var camcount = camRootObj.transform.childCount;
            if (camcount <= 1)
            {
                Debug.Log($"only {camcount} vcam returning");
                return;
            }
            var randCamId = -1;
            do
            {
                randCamId = Random.Range(1, camcount);
            } while (randCamId == sibId);
             
            var chosenCam = camRootObj.transform.GetChild(randCamId);
            
            curVcam.SetActive(false);
            chosenCam.gameObject.SetActive(true);
            curVcam = chosenCam.gameObject;

        }

        [Button("NextCam")]
        public void SwitchNextCamera()
        {
            var camRootObj = curVcam.transform.parent.gameObject;
            var sibId = curVcam.transform.GetSiblingIndex();
            var nextSibId = sibId + 1;
            var camcount = camRootObj.transform.childCount;
            if (nextSibId >= camcount)
            {
                nextSibId = 0;
            }
                         
            var chosenCam = camRootObj.transform.GetChild(nextSibId);
            
            curVcam.SetActive(false);
            chosenCam.gameObject.SetActive(true);
            curVcam = chosenCam.gameObject;
        }

        [Button("BaseCam")]
        public void SwitchBaseCamera()
        {
            var camRootObj = curVcam.transform.parent.gameObject;
            var baseCam = camRootObj.transform.GetChild(0).gameObject;
            curVcam.SetActive(false);
            baseCam.SetActive(true);
            curVcam = baseCam;
        }


        [Button("lvX")]
        public void testLv4()
        {
            SwitchLevel(testToLevel);
        }


        /// <summary>
        /// 用于带有vcam的obj播放完动画通知本类
        /// </summary>
        public void CameraAnimateEnd()
        {
            SwitchNextCamera();
        }
    }
}
