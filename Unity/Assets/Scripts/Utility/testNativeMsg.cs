using System.Collections;
using System.Collections.Generic;
using ET.Utility;
using LitJson;
using UnityEngine;

namespace ET
{
    public class testNativeMsg : MonoBehaviour
    {
        [SerializeField] protected string testJson;
        // Start is called before the first frame update
        void Start()
        {
            UnityTypeBindings.Register();
            var ext = NativeProxy.GetOp(testJson);
            var ext3 = NativeProxy.GetOpdata(testJson);
            var ext4 = NativeProxy.GetOpdata<UserMove>(testJson);
            Debug.Log("111");

            UserMove obj = new UserMove();
            obj.ts = 1650539296;
            obj.position = new Vector2(.513215f, .2354564f);
            Operation<UserMove> op = new Operation<UserMove>(obj)
            {
                Op = "UserMove"
            };
            
            // op.Opdata = obj;
            var msg = JsonMapper.ToJson(op);
            var ext5 = NativeProxy.GetOpdata<UserMove>(msg);


            var msg3=NativeProxy.SendMyPos(new Vector2(.5f, .2f));
            Debug.Log("222");
        }

        protected UserMove testUserMoveIn(string json)
        {
            UserMove obj = new UserMove();
            obj.ts = 1650539296;
            obj.position = new Vector2(.513215f, .2354564f);
            Operation<UserMove> op = new Operation<UserMove>(obj)
            {
                Op = "UserMove"
            };
            var msg = JsonMapper.ToJson(op);
            return obj;
        }

        protected string testUserMoveSend()
        {
            UserMove obj = new UserMove();
            obj.ts = 1650539296;
            obj.position = new Vector2(.513215f, .2354564f);
            Operation<UserMove> op = new Operation<UserMove>(obj)
            {
                Op = "UserMove"
            };
            
            // op.Opdata = obj;
            var msg = JsonMapper.ToJson(op);
            return msg;
        }

        protected void testUserList()
        {
            
        }

        // Update is called once per frame
        void Update()
        {
        
        }
    }
}
