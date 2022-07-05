using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Unity.Transforms;
using UnityEngine;

namespace ET
{
    public class CameraPointCollection : MonoBehaviour
    {
        [ReadOnly] public List<GameObject> actives;
        [ReadOnly] public List<GameObject> inactives;
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
    }
}
