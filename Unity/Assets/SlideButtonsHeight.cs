using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace ET
{
    public class SlideButtonsHeight : MonoBehaviour
    {
        public Transform top;

        public Transform bottom;

        public Transform buttonsParent;
        
        // Start is called before the first frame update
        public void AdjustButtonsHeight()
        {
            var value = this.GetComponent<Slider>().value;
            buttonsParent.position = Vector3.Lerp(bottom.position, top.position, value);
        }
    }
}
