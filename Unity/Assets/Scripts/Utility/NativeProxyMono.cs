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

        public void OnProxyMsg(string msg)
        {
            NativeProxy.instance.OnReciveMsg(msg);
        }

        public void SendProxyMsg(string msg)
        {
            NativeProxy.SendNativeMsg(msg);
        }

        public void testSendProxyMsg()
        {
            NativeProxy.SendMyPos(new Vector2(.5f, .5f));
        }
    }
}
