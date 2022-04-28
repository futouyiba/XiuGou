using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using ET.Utility;
using UnityEditor;
using UnityEngine;
using UnityEngine.Serialization;

namespace ET
{
    public class CharMgr : MonoBehaviour
    {
        [SerializeField]
        protected List<GameObject> charPrefabs;

        protected Dictionary<int, CharMain> charDict;

        private int _id = 0;
        protected int id
        {
            get
            {
                var returnid = _id;
                _id++;
                return returnid;
            }
        }

        private static CharMgr _instance;
        public static CharMgr instance
        {
            get
            {
                return _instance;
            }
            private set{}
        }

        // Start is called before the first frame update
        void Start()
        {
            _instance = this;
            CursorLockMode lockMode = CursorLockMode.None;
            Cursor.lockState = lockMode;
            charDict = new Dictionary<int, CharMain>();
            // for (int i = 0; i < 10; i++)
            // {
            //     CreateCharView(this.id, DanceFloorHelper.GetRandomDanceFloorPos(), $"I am {i}", Color.white);
            // }


        }

        // Update is called once per frame
        void Update()
        {
            #if UNITY_EDITOR
            if (Input.GetKeyDown(KeyCode.A))
            {
                for (int i = 0; i < 100; i++)
                {
                    var char_id = this.id;
                    CreateCharView(char_id, DanceFloorHelper.GetRandomDanceFloorPos(), $"i am {char_id}",-1, Color.white);
                }
            }
            if (Input.GetKeyDown(KeyCode.C))
            {
                var msg =
                    "{\"Op\":\"UserEnter\",\"OpData\":{\"uid\":2339817, \"ts\":1650539296, \"uname\":\"时光”\", \"ismale\":false, \"position\":{\"x\":0.513215,\"y\":0.2354564}}}";
                NativeProxy.instance.Native2UnityMsg(msg);

                // CreateCharView(this.id,DanceFloorHelper.GetRandomDanceFloorPos(), "hahaha", Color.white);
            }

            if (Input.GetKeyDown(KeyCode.D))
            {
                var msg = "{\"Op\":\"UserExit\",\"OpData\":{\"uid\":2339817, \"ts\":1650960605116}}";
                NativeProxy.instance.Native2UnityMsg(msg);
            }
            #endif
        }

        public void CreateCharNativeCall(string _params)
        {
            CreateCharView(id, DanceFloorHelper.GetRandomDanceFloorPos(), $"I am {_params}",-1, Color.white);
            //todo send the random pos to native app
            
        }
        
        
        /// <summary>
        /// 
        /// </summary>
        /// <param name="position">unified pos</param>
        /// <param name="name">char name</param>
        /// <param name="name_color"> char name color</param>
        /// <returns></returns>
        public GameObject CreateCharView(int id, Vector2 position, string name,int appearance_id , Color name_color)
        {
            
            if (appearance_id > charPrefabs.Count - 1)
            {
                Debug.LogWarning($"appearance");
                appearance_id = Random.Range(0, charPrefabs.Count - 1);
            }
            var to_create = this.charPrefabs[appearance_id];
            var goCreated = GameObject.Instantiate(to_create);
            var charView = goCreated.GetComponent<CharMain>();
            charView.SetName(name);
            charView.SetNameColor(name_color);

            var truePos = DanceFloorHelper.PosUnified2Scene(position);
            goCreated.transform.position = new Vector3(truePos.x, DanceFloorHelper.GetPivotY(), truePos.y);
            
            charDict.Add(id, charView);
            
            return goCreated;

        }


        public void RemoveCharView(int id)
        {
            var charView = charDict[id];
            if (charView != null)
            {
                charDict.Remove(id);
                charView.CharLeave();
            }
        }

        public static KeyValuePair<int,CharMain>? GetRandomChar()
        {
            if (instance.charDict.Count <= 0) return null;
            var rand = Random.Range(0, instance.charDict.Count);
            return instance.charDict.ElementAt(rand);
        }

        public CharMain GetCharacter(int uid)
        {
            var succeed = this.charDict.TryGetValue(uid, out CharMain result);
            if (!succeed)
            {
                Debug.LogWarning($"no user found for {uid}");
                return null;
            }

            return result;
        }

        public void EveryOneSpeak(string text)
        {
            foreach (var charkv in charDict)
            {
                charkv.Value.Speak(text);
            }
        }


    }
}
