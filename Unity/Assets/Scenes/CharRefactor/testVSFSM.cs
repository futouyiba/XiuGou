using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

namespace ET
{
    public class testVSFSM : MonoBehaviour
    {

        private testModel testModel;
        // Start is called before the first frame update
        void Start()
        {
            testModel = new testModel();
            var fsm = new StateMachine();
        }

        // Update is called once per frame
        void Update()
        {
        
        }
        
        
        
    }

    public class testModel
    {
        public int testInt;
        public float testFloat;
        
        
    }
}
