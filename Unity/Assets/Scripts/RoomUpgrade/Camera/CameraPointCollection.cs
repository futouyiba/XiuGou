using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using Unity.Transforms;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET
{
    public class CameraPointCollection : SerializedMonoBehaviour
    {
        [Header("Initials")]
        [ReadOnly] public List<GameObject> actives;
        [ReadOnly] public List<GameObject> inactives;

        [Header("Config")] 
        [NonSerialized, OdinSerialize] public Dictionary<int, GameObject> levels;

        [Header("vCam")] [ReadOnly] public GameObject curVcam;
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
        }

        public void ResetCollection()
        {
            foreach (var active in actives)
            {
                active.SetActive(true);
            }

            foreach (var inactive in inactives)
            {
                inactive.SetActive(false);
            }
        }

        public void SwitchLevel(int level)
        {
            if (!levels.TryGetValue(level, out var levelObj))
            {
                Debug.LogError($"level {level} does not exist");
                return;
            }
            curVcam.SetActive(false);
            var curLevelObj = curVcam.transform.parent.parent.gameObject;
            if(!curLevelObj.activeSelf) Debug.LogError($"level obj={curLevelObj.name} is not active");
            curLevelObj.SetActive(false);
            levelObj.SetActive(true);
            //todo: 找到这个level下的默认vcam，打开它，然后设为curVcam
        }

        public void SwitchCamera()
        {
            var sibId = curVcam.transform.GetSiblingIndex();
            var nextSibId = sibId + 1;
            if (curVcam.transform.parent.childCount <= nextSibId) nextSibId = 0;
            curVcam.SetActive(false);
            var nextVcam = curVcam.transform.parent.GetChild(nextSibId).gameObject;
            nextVcam.SetActive(true);
        }
    }
}
