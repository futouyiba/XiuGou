using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
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
            charDict = new Dictionary<int, CharMain>();
            for (int i = 0; i < 10; i++)
            {
                CreateCharView(DanceFloorHelper.GetRandomDanceFloorPos(), $"I am {i}", Color.cyan);
            }

            _instance = this;
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.C))
            {
                CreateCharView(DanceFloorHelper.GetRandomDanceFloorPos(), "hahaha", Color.cyan);
            }
        }

        public void CreateCharNativeCall(string _params)
        {
            CreateCharView(DanceFloorHelper.GetRandomDanceFloorPos(), $"I am {_params}", Color.cyan);
            //todo send the random pos to native app
        }
        
        
        /// <summary>
        /// 
        /// </summary>
        /// <param name="position">unified pos</param>
        /// <param name="name">char name</param>
        /// <param name="color"> char name color</param>
        /// <returns></returns>
        public GameObject CreateCharView(Vector2 position, string name, Color color)
        {
            var prefabIndex = Random.Range(0, charPrefabs.Count - 1);
            var goCreated = GameObject.Instantiate(this.charPrefabs[prefabIndex]);
            var charView = goCreated.GetComponent<CharMain>();
            charView.SetName(name);
            charView.SetNameColor(color);

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

        public static GameObject GetRandomChar()
        {
            var rand = Random.Range(0, instance.charDict.Count);
            return instance.charDict.ElementAt(rand).Value.gameObject;
        }


    }
}
