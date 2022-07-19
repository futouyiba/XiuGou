using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class ClickableSwitch : ClickableObject
    {
        [SerializeField] private MeshRenderer meshRenderer;

        protected override void OnClick()
        {
            Debug.Log($"clicked {gameObject.name}");
            meshRenderer.material.color = Random.ColorHSV();
        }
    }
}
