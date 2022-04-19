using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;

namespace ET
{
    public class CharMgr : MonoBehaviour
    {
        [SerializeField]
        protected GameObject charPrefab;

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

        // Start is called before the first frame update
        void Start()
        {
            charDict = new Dictionary<int, CharMain>();
        }

        // Update is called once per frame
        void Update()
        {
        
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
            var goCreated = GameObject.Instantiate(this.charPrefab);
            var charView = goCreated.GetComponent<CharMain>();
            charView.SetName(name);
            charView.SetNameColor(color);

            var truePos = DanceFloorHelper.PosUnified2Scene(position);
            goCreated.transform.position = truePos;
            
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
    }
}
