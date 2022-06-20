using System.Collections;
using System.Collections.Generic;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class ColliderPivot : MonoBehaviour
    {
        [OdinSerialize] public List<Collider> colliders;
        
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public Collider GetCollider(int id)
        {
            if (id >= colliders.Count)
            {
                Debug.LogError($"collider {id} does not exist");
                return null;
            }

            return colliders[id];
        }
        
        
    }
}
