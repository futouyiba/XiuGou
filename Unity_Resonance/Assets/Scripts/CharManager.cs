using System;
using System.Collections;
using System.Collections.Generic;
using ColorGame;
using UnityEngine;
using UnityEngine.InputSystem;
using Random = UnityEngine.Random;

public class CharManager : MonoBehaviour
{
    [SerializeField]
    protected List<GameObject> charPrefabs;

    [SerializeField] protected GameObject npcPrefab;



    protected Dictionary<int, CharacterMain> charDict;

    protected int myId = -1;

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

    private static CharManager _instance;
    public static CharManager instance
    {
        get
        {
            return _instance;
        }
        private set{}
    }

    private void Awake()
    {
        if (!_instance)
        {
            _instance = this;
            UnityEngine.Random.InitState((int)Time.time);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    private void Start()
    {
        charDict = new Dictionary<int, CharacterMain>();

    }


    private void Update()
    {

        
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
                var camera = Camera.main.GetComponent<ColorGameCamera>();
                camera.FollowMe(charMain.gameObject);
                // CameraBolt.TriggerEvent("Idle2Follow");
                // CameraBolt.TriggerEvent("Follow2Idle");
            }
            else
            {
                Debug.LogError($"charmain for me {id} not found!");
            }
            
        }

        public CharacterMain GetMe()
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
            
            if (appearance_id > charPrefabs.Count - 1 || appearance_id < 0)
            {
                Debug.Log($"appearance {appearance_id} does not exist, using random");
                appearance_id = Random.Range(0, charPrefabs.Count - 1);
            }
            var to_create = this.charPrefabs[appearance_id];
            var goCreated = GameObject.Instantiate(to_create);
            var charView = goCreated.GetComponent<CharacterMain>();
            charView.Init(id, name, name_color, DanceFloorHelper.PosUnified2Scene(position));
            // charView.SetName(name);
            // charView.SetNameColor(name_color);
            // charView.Id = id;
            // charView.transform.position = DanceFloorHelper.PosUnified2Scene(position);
            charDict.Add(id, charView);
            
            return goCreated;

        }
        
        
        public GameObject CreateNpcView(int id, Vector2 position, string name, Color name_color)
        {
            var to_create = this.npcPrefab;
            var goCreated = GameObject.Instantiate(to_create);
            var charView = goCreated.GetComponent<CharacterMain>();
            charView.Init(id, name, name_color, DanceFloorHelper.PosUnified2Scene(position));
            // charView.SetName(name);
            // charView.SetNameColor(name_color);
            // charView.Id = id;
            // charView.transform.position = DanceFloorHelper.PosUnified2Scene(position);
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
        
        
        public CharacterMain GetCharacter(int uid)
        {
            var succeed = this.charDict.TryGetValue(uid, out CharacterMain result);
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
