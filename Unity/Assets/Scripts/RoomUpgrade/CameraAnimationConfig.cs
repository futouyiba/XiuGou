using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;
using UnityEngine.Events;

namespace ET
{
    public class CameraAnimationConfig : SerializedMonoBehaviour
    {

        [NonSerialized, OdinSerialize] public Dictionary<int, UnityEvent> cameraBehs;
    }
    
    
}
