using System;
using LitJson;
using UnityEngine;

namespace ET.Utility
{

    public class NativeProxy
    {
        private static NativeProxy _instance;
        public static NativeProxy instance
        {
            get { return _instance ??= new NativeProxy(); }
            private set{}
        }

        public void OnReciveMsg(string msg)
        {
            
            switch (GetOp(msg))
            {
                case "UserEnter":
                    var userenter = GetOpdata<UserEnter>(msg);
                    CharMgr.instance.CreateCharView(userenter.position, userenter.uname, Color.white);
                    break;
                case "MeEnter":
                    var meenter = GetOpdata<MeEnter>(msg);
                    var pos = DanceFloorHelper.GetRandomDanceFloorPos();
                    CharMgr.instance.CreateCharView(pos,meenter.uname, Color.white);
                    //todo:发个消息告知我在哪里
                    break;
                
            }
            

        }

        public static string SendMyPos(Vector2 pos)
        {
            var ts = (int)new DateTimeOffset(DateTime.Now).ToUnixTimeSeconds();
            var mypos = new MyPosition
            {
                ts = ts,
                position = pos
            };
            var msg = MakeOp(mypos,"MyPos");
            return msg;

        }

        // public static T Extract<T>(string json) where T : JsonMessage
        // {
        //     return JsonMapper.ToObject<T>(json);
        // }
        //
        // public static string Pack(JsonMessage message)
        // {
        //     return JsonMapper.ToJson(message);
        // }

        public static JsonData GetOpdata(string json)
        {
            var data = JsonMapper.ToObject(json);
            return data["OpData"];
        }

        public static string GetOp(string json)
        {
            var data = JsonMapper.ToObject(json);
            return data["Op"].ToString();
        }

        public static T GetOpdata<T>(string json) where T:JsonCmd
        {
            var data = JsonMapper.ToObject(json);
            var opData = data["OpData"];
            return JsonMapper.ToObject<T>(opData.ToJson());
        }

        public static string MakeOp<T>(T obj, string code) where T : JsonCmd
        {
            Operation<T> op = new Operation<T>(obj)
            {
                Op = code
            };
            var data = JsonMapper.ToJson(op);
            
            return data;
        }
        
        
        
        
    }
}