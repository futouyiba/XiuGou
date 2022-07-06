using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class AddGroup : MonoBehaviour
    {
        [SerializeField] GameObject GroupPrefab;
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
            if  (Input.GetKey(KeyCode.A)){
                GameObject.Instantiate(GroupPrefab);
            }
        }
    }
}
