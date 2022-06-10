using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace ET
{
    public class SlideButtonsHeight : MonoBehaviour
    {
        public Transform top;

        public Transform bottom;

        public Transform buttonsParent;
        
        // Start is called before the first frame update
        public void AdjustButtonsHeight(float value)
        {
            buttonsParent.position = Vector3.Lerp(bottom.position, top.position, value);
        }
    }
}
