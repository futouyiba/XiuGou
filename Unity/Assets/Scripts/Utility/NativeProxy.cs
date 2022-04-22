using System;
using System.CodeDom;
using System.Collections.Generic;
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

        /// <summary>
        /// 接到消息的处理函数
        /// </summary>
        /// <param name="msg"></param>
        public void OnReciveMsg(string msg)
        {
            var cmd = GetOp(msg);
            var cmdType = MsgCode2Type(cmd);
            switch (cmd)
            {
                case "UserEnter":
                    var userenter = GetOpdata<UserEnter>(msg);
                    CharMgr.instance.CreateCharView(userenter.uid, userenter.position, userenter.uname, Color.white);
                    break;
                case "MeEnter":
                    var meenter = GetOpdata<MeEnter>(msg);
                    var pos = DanceFloorHelper.GetRandomDanceFloorPos();
                    CharMgr.instance.CreateCharView(meenter.uid, pos,meenter.uname, Color.white);
                    //todo:发个消息告知我在哪里
                    break;
                case "UserExit":
                    var userexit = GetOpdata<UserExit>(msg);
                    CharMgr.instance.RemoveCharView(userexit.uid);
                    break;
                case "UserList":
                    var userlist = GetOpdata<UserList>(msg);
                    var uids = userlist.uids;
                    var upos = userlist.positions;
                    var unames = userlist.unames;
                    for (int i = 0; i < uids.Count; i++)
                    {
                        var res = CharMgr.instance.GetCharacter(uids[i]);
                        if (res == null)
                        {
                            CharMgr.instance.CreateCharView(uids[i], upos[i], unames[i], Color.white);
                        }
                        else
                        {
                            res.Move(upos[i]);
                        }
                    }
                    break;
                case "UserMove":
                    var usermove = GetOpdata<UserMove>(msg);
                    var chara = CharMgr.instance.GetCharacter(usermove.uid);
                    if (chara != null)
                    {
                        chara.Move(usermove.position);
                    }
                    else
                    {
                        Debug.LogError($"char {usermove.uid} not exist");    
                    }
                    break;
                
                
            }
            

        }

        /// <summary>
        /// 发送json message去native
        /// </summary>
        /// <param name="json"></param>
        public static void SendNativeMsg(string json)
        {
            
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
            SendNativeMsg(msg);
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
            SendNativeMsg(msg);
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