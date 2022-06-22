using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class CharAnimateSpeedConfig : SerializedMonoBehaviour
    {
        [NonSerialized, OdinSerialize] public Dictionary<int, float> speedConfig;
    }
}
