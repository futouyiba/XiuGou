using UnityEngine;

namespace ET.Utility.AllIn1SpriteShader
{
    public class ShaderEffectGlitch:ShaderEffectBase
    {
        public ShaderVar<float> glitchAmount;
        public ShaderVar<float> glitchSize;

        public override void ApplyValues(bool isOn)
        {
            Debug.Log($"applying glitch values:{isOn}");
            ExecVal(glitchAmount,isOn);
            ExecVal(glitchSize,isOn);
            // glitchAmount.ApplyValue(isOn);
            // glitchSize.ApplyValue(isOn);
        }
    }
}