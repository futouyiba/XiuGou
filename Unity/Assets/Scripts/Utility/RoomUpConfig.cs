using System;
using System.Collections.Generic;
using System.IO;
using RoomUpgrade;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using Sirenix.Utilities;
using Unity.Entities.Serialization;
using UnityEngine;
using UnityEngine.Events;
using Object = UnityEngine.Object;

namespace ET.Utility
{
    public class RoomUpConfig : SerializedMonoBehaviour
    {
        private int levelForDebug = 0;
        // [BoxGroup("SerializeTest")]
        // [OdinSerialize]
        // public Dictionary<int, int> INTDict = new Dictionary<int, int>();
        // [OdinSerialize]
        // public Dictionary<int, Action> ActionDict = new Dictionary<int, Action>();
        // [OdinSerialize]
        // public Dictionary<int, UnityAction> UnityActionsDict = new Dictionary<int, UnityAction>();
        //
        // public KeyValuePair<int, Action> KeyValuePairActionNoParam = new KeyValuePair<int, Action>();
        //
        // public KeyValuePair<int, int> KeyValuePairIntInt = new KeyValuePair<int, int>();
        //
        // public KeyValuePair<int, Action<int>> KeyValuePairActionWithInt = new KeyValuePair<int, Action<int>>();

        [NonSerialized,OdinSerialize]
        public List<LevelInfo> LevelInfos = new List<LevelInfo>();
        
        // [OdinSerialize]
        // public Action Action;
        // [OdinSerialize]
        // public UnityAction UnityAction;
        // [OdinSerialize]
        // public UnityAction<int> UnityActionInt;
        // [OdinSerialize]
        // public int intVar;

            
        // public void TestUnityFunctionWithInt(int param)
        // {
        //     Debug.Log("testUnityFunctionWithInt:"+param );
        // }
        // [Button("Upgrade")]
        // void Upgrade()
        // {
        //     levelForDebug++;
        //     for (int i = 0; i < levelForDebug; i++)
        //     {
        //         LevelInfos[i].otherBehaviour.Invoke();
        //     }
        // }
        //
        // [Button("init")]
        // void Init()
        // {
        //     GameObject.FindObjectsOfType<UpgradableObject>().ForEach(o =>
        //     {
        //         // if (o.GetType().HasElementType())
        //         {
        //             // o.SendMessage("Awake");
        //         }
        //     });
        // }

        [SerializeField] private TextAsset configTextAsset;
        [Button("Save2File")]
        public void SaveState()
        {
            List<Object> objects = new List<Object>();
            var nodes = SerializationUtility.SerializeValue(LevelInfos,DataFormat.JSON,out objects);
            File.WriteAllBytes("D:/temp/test.txt", nodes);
        }

        [Button("LoadFromFile")]
        public void LoadState()
        {
            var bytes = File.ReadAllBytes("D:/temp/test.txt");
            List<Object> objects = new List<Object>();
            LevelInfos = SerializationUtility.DeserializeValue<List<LevelInfo>>(bytes, DataFormat.JSON, objects);
        }
    }
    


    // [InlineProperty]
    public struct LevelInfo
    {
        public int TheLvl;
        public int GuysNeeded;
        public Action<bool> cameraBehaviour;
        // public int cameraLvl;
        public UnityEvent otherBehaviour;

    }

    public class SerializationDictionary<TKey, TValue> : ISerializationCallbackReceiver
    {
        [SerializeField]
        private List<TKey> keys;
        [SerializeField]
        private List<TValue> values;
    
        private Dictionary<TKey, TValue> target;
        public Dictionary<TKey, TValue> ToDictionary() { return target; }
    
        public SerializationDictionary(Dictionary<TKey, TValue> target)
        {
            this.target = target;
        }
    
        public void OnBeforeSerialize()
        {
            keys = new List<TKey>(target.Keys);
            values = new List<TValue>(target.Values);
        }
    
        public void OnAfterDeserialize()
        {
            var count = Math.Min(keys.Count, values.Count);
            target = new Dictionary<TKey, TValue>(count);
            for (var i = 0; i < count; ++i)
            {
                target.Add(keys[i], values[i]);
            }
        }
    }
}