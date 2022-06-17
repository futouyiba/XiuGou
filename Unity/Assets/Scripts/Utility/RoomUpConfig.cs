using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor;
using Sirenix.Serialization;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;

namespace ET.Utility
{
    
    public class RoomUpConfig : SerializedMonoBehaviour
    {
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

        [OdinSerialize]
        public List<LevelInfo> LevelInfos = new List<LevelInfo>();
        
        // [OdinSerialize]
        // public Action Action;
        // [OdinSerialize]
        // public UnityAction UnityAction;
        // [OdinSerialize]
        // public UnityAction<int> UnityActionInt;
        // [OdinSerialize]
        // public int intVar;

            
        public void TestUnityFunctionWithInt(int param)
        {
            Debug.Log("testUnityFunctionWithInt:"+param );
        }
    }

    // [InlineProperty]
    public struct LevelInfo
    {
        public int TheLvl;
        public int GuysNeeded;
        public RoomUpEvent Effects;

    }
    
    [System.Serializable]
    public class RoomUpEvent : UnityEvent
    {}

    
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