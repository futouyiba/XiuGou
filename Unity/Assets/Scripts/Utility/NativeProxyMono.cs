using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET.Utility
{
    public class NativeProxyMono : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void Native2UnityMsg(string msg)
        {
            NativeProxy.instance.Native2UnityMsg(msg);
        }

        public void Unity2NativeMsg(string msg)
        {
            NativeProxy.Unity2NativeMsg(msg);
        }

        public void testSendProxyMsg()
        {
            NativeProxy.SendMyPos(new Vector2(.5f, .5f));
        }
    }
}
