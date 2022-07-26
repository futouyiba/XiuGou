using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;
using UnityEngine.Rendering;

namespace ET.Utility.AllIn1SpriteShader
{
    
    public abstract class ShaderEffectBase : SerializedMonoBehaviour
    {
        [Button("ApplyValues")]
        public abstract void ApplyValues(bool isOn);

        [ReadOnly] public Material mat;

        private void Awake()
        {
            mat = GetComponent<Material>();
        }
    }

    public class ShaderVar<T>
    {

        private Action<bool> dlg;
        private Material mat;
        [NonSerialized, OdinSerialize]public string name;
        [NonSerialized, OdinSerialize]public T OnVal;
        [NonSerialized, OdinSerialize]public T OffVal;

        public ShaderVar(string name, T OnVal, T OffVal, Material mat)
        {
            this.name = name;
            this.OnVal = OnVal;
            this.OffVal = OffVal;
            this.mat = mat;
        }


        public void ApplyValue(bool isOn)
        {
            T targetVal = isOn ? OnVal : OffVal;
            if (targetVal is int ival)
            {
                mat.SetInt(name, ival);
            }
            else if (targetVal is float fval)
            {
                mat.SetFloat(name, fval);
            }
            else if (targetVal is bool bval)
            {
                if(bval) mat.EnableKeyword(name);
                else mat.DisableKeyword(name);
                
            }
            else if (targetVal is Texture tval)
            {
                mat.SetTexture(name,tval);
            }
        }


    }
}