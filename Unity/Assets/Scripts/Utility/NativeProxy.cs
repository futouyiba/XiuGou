using System;
using System.CodeDom;
using System.Collections.Generic;
using LitJson;
using UnityEngine;

namespace ET.Utility
{

    public class NativeProxy:MonoBehaviour
    {
        private static NativeProxy _instance;
        public static NativeProxy instance
        {
            get { return _instance ??= new NativeProxy(); }
            private set{}
        }

        /// <summary>
        /// 接到消息的处理函数
        /// </summary>
        /// <param name="msg"></param>
        public void Native2UnityMsg(string msg)
        {
            var cmd = GetOp(msg);
            var cmdType = MsgCode2Type(cmd);
            switch (cmd)
            {
                case "UserEnter":
                    var userEnter = GetOpdata<UserEnter>(msg);
                    CharMgr.instance.CreateCharView(userEnter.uid, userEnter.position, userEnter.uname, Color.white);
                    break;
                case "MeEnter":
                    var meEnter = GetOpdata<MeEnter>(msg);
                    var pos = DanceFloorHelper.GetRandomDanceFloorPos();
                    CharMgr.instance.CreateCharView(meEnter.uid, pos,meEnter.uname, Color.white);
                    //todo:发个消息告知我在哪里
                    break;
                case "UserExit":
                    var userExit = GetOpdata<UserExit>(msg);
                    CharMgr.instance.RemoveCharView(userExit.uid);
                    break;
                case "UserList":
                    var userList = GetOpdata<UserList>(msg);
                    var uIds = userList.uids;
                    var uPos = userList.positions;
                    var uNames = userList.unames;
                    for (int i = 0; i < uIds.Count; i++)
                    {
                        var res = CharMgr.instance.GetCharacter(uIds[i]);
                        if (res == null)
                        {
                            CharMgr.instance.CreateCharView(uIds[i], uPos[i], uNames[i], Color.white);
                        }
                        else
                        {
                            res.Move(uPos[i]);
                        }
                    }
                    break;
                case "UserMove":
                    var userMove = GetOpdata<UserMove>(msg);
                    var chara = CharMgr.instance.GetCharacter(userMove.uid);
                    if (chara != null)
                    {
                        chara.Move(userMove.position);
                    }
                    else
                    {
                        Debug.LogError($"char {userMove.uid} not exist");    
                    }
                    break;
                case "UserMsg":
                    var userMsg = GetOpdata<UserMsg>(msg);
                    throw new Exception("not implemented");


            }
            

        }

        /// <summary>
        /// 发送json message去native
        /// </summary>
        /// <param name="json"></param>
        public static void Unity2NativeMsg(string json)
        {
            // AndroidJavaClass jc = new AndroidJavaClass("com.bjzy.showdog.voiceroom.unity.UnityCall");
            // var jo = jc.GetStatic<AndroidJavaObject>("unityCall");
            // jo.Call("test",json);
            
            // for testing...
            AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject jo = jc.GetStatic<AndroidJavaObject>("currentActivity");
            jo.Call("testMethod", json);
        }
        
        
        
        public static void SendMyPos(Vector2 pos)
        {
            var ts = (int)new DateTimeOffset(DateTime.Now).ToUnixTimeSeconds();
            var mypos = new MyPosition
            {
                ts = ts,
                position = pos
            };
            var msg = MakeOp(mypos);
            Unity2NativeMsg(msg);
        }

        public static void SendMeMove(Vector2 pos)
        {
            var ts= (int)new DateTimeOffset(DateTime.Now).ToUnixTimeSeconds();
            var target = new MeMove()
            {
                ts = ts,
                position = pos,
            };
            var msg = MakeOp(target);
            Unity2NativeMsg(msg);
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

        // public static JsonData GetOpdata(string json)
        // {
        //     var data = JsonMapper.ToObject(json);
        //     return data["OpData"];
        // }

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


        public static Dictionary<string, Type> cmdDict = new Dictionary<string, Type>()
        {
            {"UserEnter",typeof(UserEnter)},
            {"MeEnter",typeof(MeEnter)},
            {"UserExit",typeof(UserExit)},
            {"UserList",typeof(UserList)},
            {"UserMove",typeof(UserMove)},
            {"UserMsg",typeof(UserMsg)},
            {"MeMove",typeof(MeMove)},
            {"MeTap",typeof(MeTap)},
            {"MyPos",typeof(MyPosition)}
        };
        
        public static Type MsgCode2Type(string code)
        {
            var succeed = cmdDict.TryGetValue(code, out Type type);
            if (!succeed)
            {
                Debug.LogError($"failed coverting code for {code}");
                return null;
            }

            return type;
        }

        public static string MsgType2Code(Type type)
        {
            foreach (var kvpair in cmdDict)
            {
                if (kvpair.Value == type)
                {
                    return kvpair.Key;
                }
            }

            Debug.LogError($"failed converting type for {type.ToString()}");
            return null;
        }

        /// <summary>
        /// 构建Op消息
        /// </summary>
        /// <param name="obj"></param>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public static string MakeOp<T>(T obj) where T : JsonCmd
        {
            var code = MsgType2Code(typeof(T));
            Operation<T> op = new Operation<T>(obj)
            {
                Op = code
            };
            var data = JsonMapper.ToJson(op);
            //todo: get rid of "_t"'s
            return data;
        }
        
        
        
        
    }
}