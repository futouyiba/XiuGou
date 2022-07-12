using System;
using System.Collections;
using System.Collections.Generic;
using LitJson;
using Newtonsoft.Json.Linq;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
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

        private void Awake()
        {
            UnityTypeBindings.Register();
        }

        public void Native2UnityMsg(string msg)
        {
            Debug.Log($"native proxy mono receives msg from native:{msg}");
            NativeProxy.instance.Native2UnityMsg(msg);
        }

        public void Unity2NativeMsg(string msg)
        {
            Debug.Log($"native proxy mono sends msg to native :{msg}");
            NativeProxy.Unity2NativeMsg(msg);
        }

        public void testSendProxyMsg()
        {
            NativeProxy.SendMyPos(new Vector2(.5f, .5f));
        }

        [Header("SimRecvUserMove")]
        [OdinSerialize] public int moveUserId;
        [OdinSerialize] public Vector2 moveTarget;
        [Button("SimUserMove")]
        public void testSimRecvUserMove()
        {
            var msg =
                "{\"Op\":\"UserMove\",\"OpData\":{\"userId\":"+moveUserId+", \"ts\":\"1652352835457\", \"position\":{\"x\":" +
                moveTarget.x + ",\"y\":" + moveTarget.y + "}}}";
            NativeProxy.instance.Native2UnityMsg(msg);
        }

        [Header("SimRecvUserSit")] 
        [OdinSerialize] public int sitUserId;
        [OdinSerialize] public int sitPos;

        [Button("SimUserSit")]
        public void testSimUserSit()
        {
            var usersit= NativeProxy.MakeOp(new UserSit()
            {
                micId = sitPos,
                userId = sitUserId,
            });
            // Debug.LogError($"msg={usersit}");
            NativeProxy.instance.Native2UnityMsg(usersit);
        }
        
    }
}
