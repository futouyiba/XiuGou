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
            mat = GetComponent<SpriteRenderer>().material;
        }

        private Material GetMat()
        {
            return mat;
        }

        public void ExecVal<T>(ShaderVar<T> shaderVar, bool isOn)
        {
            T targetVal = shaderVar.GetValue(isOn);
            if (targetVal is int ival)
            {
                mat.SetInt(shaderVar.name, ival);
            }
            else if (targetVal is float fval)
            {
                mat.SetFloat(shaderVar.name, fval);
            }
            else if (targetVal is bool bval)
            {
                if(bval) mat.EnableKeyword(shaderVar.name);
                else mat.DisableKeyword(shaderVar.name);
            }
            else if (targetVal is Texture tval)
            {
                mat.SetTexture(shaderVar.name,tval);
            }
        }
        
    }

    public class ShaderVar<T>
    {

        // private Action<bool> dlg;
        // [ReadOnly]public Material mat;
        // private Func<Material> matDlg;
        [NonSerialized, OdinSerialize]public string name;
        [NonSerialized, OdinSerialize]public T OnVal;
        [NonSerialized, OdinSerialize]public T OffVal;


        public T GetValue(bool isOn)
        {
            return isOn ? OnVal : OffVal;
        }
        
        
        public ShaderVar(string name, T OnVal, T OffVal)
        {
            this.name = name;
            this.OnVal = OnVal;
            this.OffVal = OffVal;
            // this.matDlg = matDlg;
            // this.mat = parent.mat;
        }


        // public void ApplyValue(bool isOn)
        // {

        //     T targetVal = isOn ? OnVal : OffVal;
        //     if (targetVal is int ival)
        //     {
        //         matDlg.Invoke().SetInt(name, ival);
        //     }
        //     else if (targetVal is float fval)
        //     {
        //         matDlg.Invoke().SetFloat(name, fval);
        //     }
        //     else if (targetVal is bool bval)
        //     {
        //         if(bval) matDlg.Invoke().EnableKeyword(name);
        //         else matDlg.Invoke().DisableKeyword(name);
        //         
        //     }
        //     else if (targetVal is Texture tval)
        //     {
        //         matDlg.Invoke().SetTexture(name,tval);
        //     }
        // }


    }
}