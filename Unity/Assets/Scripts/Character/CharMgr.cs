using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using ET.Utility;
using Sirenix.Utilities;
using UnityEditor;
using UnityEngine;
using UnityEngine.Serialization;
using Random = UnityEngine.Random;

namespace ET
{
    public class CharMgr : MonoBehaviour
    {
        [SerializeField] public List<GameObject> charPrefabs;
        [SerializeField] public GameObject blankPrefab;

        public Dictionary<int, CharMain> charDict;

        private Action<int> dlgCharAmountUpdate;
        
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

        protected int myId = -1;

        public Vector2 myposStored = Vector2.zero;

        public int CurrentCharAmount => charDict.Count;

        void Awake()
        {
            Random.InitState((int)Time.time);
            _instance = this;
            charDict = new Dictionary<int, CharMain>();
        }

        // Start is called before the first frame update
        void Start()
        {

            Cursor.lockState = CursorLockMode.None;
            
            // for (int i = 0; i < 10; i++)
            // {
            //     CreateCharView(this.id, DanceFloorHelper.GetRandomDanceFloorPos(), $"I am {i}", Color.white);
            // }
            
            //场景一开始就先发一个Mypos，然后还得存起来
            //refactor
            myposStored = DanceFloorHelper.GetRandomDanceFloorPos();
            var myPos = new MyPosition()
            {
                position = myposStored,
                ts= (int) new DateTimeOffset(DateTime.Now).ToUnixTimeMilliseconds()
            };
            var msgMyPos = NativeProxy.MakeOp(myPos);
            NativeProxy.Unity2NativeMsg(msgMyPos);
            
            
        }

        // Update is called once per frame
        void Update()
        {
            #if UNITY_EDITOR
            if (Input.GetKeyDown(KeyCode.A))
            {
                Create100TestGuys();
            }
            if (Input.GetKeyDown(KeyCode.C))
            {
                var msg =
                    "{\"Op\":\"UserEnter\",\"OpData\":{\"userId\":840167, \"ts\":1652352802993, \"nickName\":\"哈哈\", \"sex\":1}}";
                NativeProxy.instance.Native2UnityMsg(msg);
                RegisterMe(840167);
                // CreateCharView(this.id,DanceFloorHelper.GetRandomDanceFloorPos(), "hahaha", Color.white);
            }

            if (Input.GetKeyDown(KeyCode.S))
            {
                EveryOneSpeak("嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿嘿");
            }

            if (Input.GetKeyDown(KeyCode.V))
            {
                var msg= "{\"Op\":\"UserMove\",\"OpData\":{\"userId\":840167, \"ts\":\"1652352835457\", \"position\":{\"x\":0.77,\"y\":0.85}}}";
                NativeProxy.instance.Native2UnityMsg(msg);
            }

            if (Input.GetKeyDown(KeyCode.D))
            {
                var msg = "{\"Op\":\"UserExit\",\"OpData\":{\"uid\":840167, \"ts\":1650960605116}}";
                NativeProxy.instance.Native2UnityMsg(msg);
            }

            if (Input.GetKeyDown(KeyCode.Keypad1))
            {
                CreateTestGuysByNum(10);
            }
            // if (Input.GetKeyDown(KeyCode.Keypad2))
            // {
            //     CreateTestGuysByNum(100);
            // }
            // if (Input.GetKeyDown(KeyCode.Keypad3))  
            // {
            //     CreateTestGuysByNum(1000);
            // }
            if (Input.GetKeyDown(KeyCode.KeypadPlus))  
            {
                CreateTestGuysByNum(1);
            }

            if (Input.GetKeyDown(KeyCode.KeypadMinus))
            {
                testRemoveRandomGuy();
            }
           
            
            #endif
        }

        public void CreateTestGuysByNum(int num)
        {
            //var numStart = CharMgr.instance.charDict.Count;
            
            for (int i = 0; i < num; i++)
            {
                var index = id;
                var view = CreateCharView(index, DanceFloorHelper.GetRandomDanceFloorPos(), $"i am {index}", -1,
                    Color.white);
            }


            // dlgCharAmountUpdate?.Invoke(instance.charDict.Count);
            // Debug.Log($"added {num} chars, now we have char count:{CharMgr.instance.charDict.Count}");
        }

        public void testRemoveRandomGuy()
        {
            var random = Random.Range(0, charDict.Count);
            var keyValue = charDict.ElementAt(random);
            RemoveCharView(keyValue.Key);
        }
        
        public void Create100TestGuys()
        {
            var random_me = -1;
            for (int i = 0; i < 100; i++)
            {
                var char_id = this.id;
                if (char_id == 1)
                {
                    random_me = Random.Range(1, 100);
                    Debug.LogWarning($"my id is {random_me}");
                }

                var view = CreateCharView(char_id, DanceFloorHelper.GetRandomDanceFloorPos(), $"i am {char_id}", -1,
                    Color.white);
                if (char_id == random_me)
                {
                    RegisterMe(char_id);
                }
            }
            // dlgCharAmountUpdate?.Invoke(instance.charDict.Count);
        }
        
        public void CreateCharNativeCall(string _params)
        {
            CreateCharView(id, DanceFloorHelper.GetRandomDanceFloorPos(), $"I am {_params}",-1, Color.white);
            //todo send the random pos to native app
            
        }

        /// <summary>
        /// 在创建后指出哪个是我
        /// </summary>
        /// <param name="id"></param>
        public void RegisterMe(int id)
        {
            var charMain = GetCharacter(id);
            if (charMain)
            {
                myId = id;
                charMain.isMe = true;
                charMain.SetNameColor(Color.yellow);
                CameraBolt.TriggerEvent("Idle2Follow");
                CameraBolt.TriggerEvent("Follow2Idle");
            }
            else
            {
                Debug.LogError($"charmain for me {id} not found!");
            }
        }

        public CharMain GetMe()
        {
            if (myId < 0)
            {
                Debug.LogWarning($"my id is {myId}");
                return null;
            }
            var charmain = GetCharacter(myId);
            if (!charmain)
            {
                Debug.LogError($"charmain for me:{myId} does not exist");
                return null;
            }

            return charmain;
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
            if (charDict.TryGetValue(id, out CharMain charMain))
            {
                Debug.LogError($"user character :{id} already exists, skipping");
                return charMain.gameObject;
            }
            if (appearance_id > charPrefabs.Count - 1 || appearance_id < 0)
            {
                Debug.Log($"appearance {appearance_id} does not exist, using random");
                appearance_id = Random.Range(0, charPrefabs.Count - 1);
            }
            var to_create = this.charPrefabs[appearance_id];
            var goCreated = GameObject.Instantiate(to_create);
            var charView = goCreated.GetComponent<CharMain>();
            charView.userId = id;
            charView.SetName(name);
            charView.SetNameColor(name_color);
            charView.SetNameColor(name_color);
            if (position.x < -100f && position.y < -100f)
            {//未初始化
                charView.SetVisible(false);
                var truePos = DanceFloorHelper.PosUnified2Scene(new Vector2(-1f, -1f));
                goCreated.transform.position = new Vector3(truePos.x, DanceFloorHelper.GetPivotY(), truePos.y);
            }
            else
            {
                var truePos = DanceFloorHelper.PosUnified2Scene(position);
                goCreated.transform.position = new Vector3(truePos.x, DanceFloorHelper.GetPivotY(), truePos.y);
            }
            
            
            
            //20220622 set char animate speed
            charView.AnimSpeed = curAnimateSpeed;
            charView.StopParticle();
            //20220701 set char floating
            if(isFloating) charView.FloatStart();
            
            charDict.Add(id, charView);
            dlgCharAmountUpdate?.Invoke(charDict.Count);
            
            return goCreated;

        }


        public void RemoveCharView(int id)
        {
            var charView = charDict[id];
            if (charView != null)
            {
                charDict.Remove(id);
                charView.CharLeave();
                dlgCharAmountUpdate?.Invoke(charDict.Count);
            }
        }
        
        public void ChangeAppearance(int userId, int appearanceId)
        {
            // var userId = this.userId;
            var charView = GetCharacter(userId);
            if (charView == null)
            {
                Debug.LogError($"charview for {userId} not found");
                return;
            }
            var pos = charView.transform.position;
            var name = charView.name;
            var isMe = charView.isMe;
            CharMgr.instance.RemoveCharView(userId);

            CharMgr.instance.CreateCharView(userId, pos, name, appearanceId, Color.white);
            if (isMe)
            {
                CharMgr.instance.RegisterMe(userId);
            }
            
            
        }
        
        public void ShowBlankAprc(int userId)
        {
            var charView = GetCharacter(userId);
            if (charView == null)
            {
                Debug.LogError($"charview for {userId} not found");
                // todo create a blank aprc for userId
                return;
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

        public void EveryOneDanceStart()
        {
            foreach (var charkv in charDict)
            {
                charkv.Value.DanceStart();
            }
        }

        public void EveryOneDanceStop()
        {
            foreach (var charkv in charDict)
            {
                charkv.Value.DanceStop();
            }
        }


        public void ResetCharPosition(int userId)
        {
            if (!charDict.TryGetValue(userId, out CharMain charGot))
            {
                Debug.LogError($"character {userId} does not exist");
                return;
            }

            var newPos = DanceFloorHelper.PosUnified2Scene(DanceFloorHelper.GetRandomDanceFloorPos());
            var buildPos = new Vector3(newPos.x, DanceFloorHelper.GetPivotY() + 1f, newPos.y);
            charGot.transform.position = buildPos;

        }

        public void AddCharAmountUpdateDlg(Action<int> dlg)
        {
            if (dlg == null)
            {
                Debug.LogError($"dlg is null");
                return;
            }

            dlgCharAmountUpdate += dlg;
        }
        
        public void RemoveCharAmountUpdateDlg(Action<int> dlg)
        {
            if (dlg == null)
            {
                Debug.LogError($"dlg is null");
                return;
            }

            dlgCharAmountUpdate -= dlg;
        }


        #region character animate speed
        
        public float curAnimateSpeed = 1f;

        public void UpdateExistingAnimateSpeed()
        {
            foreach (var kv in charDict)
            {
                kv.Value.AnimSpeed = curAnimateSpeed;
                kv.Value.PlayLvUpParticle();
            }
        }


        


        #endregion


        #region floating
        private bool _isFloating;

        public bool isFloating
        {
            get => _isFloating;
            private set => _isFloating = value;
        }
        public void FloatStart()
        {
            if (_isFloating)
            {
                Debug.LogError("already floating");
                return;
            }

            foreach (var kvpair in charDict)
            {
                kvpair.Value.FloatStart();
            }

            _isFloating = true;
        }

        public void FloatEnd()
        {
            if (!_isFloating)
            {
                Debug.LogError("not floating");
                return;
            }
            foreach (var kvpair in charDict)
            {
                kvpair.Value.FloatEnd();
            }


            _isFloating = false;
        }
        

        #endregion
        
        
    }
}
