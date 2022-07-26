using System;
using Sirenix.Serialization;

namespace ET.Utility.AllIn1SpriteShader
{
    
    public class ShaderEffectBlur :ShaderEffectBase
    {
        public ShaderVar<float> intensity;
        public ShaderVar<bool> isLowQuality;

        // private void Start()
        // {
        //     intensity = new ShaderVar<float>("_Blurintensity", 10, 0, this);
        //     isLowQuality = new ShaderVar<bool>("_BlurHD", true, false, this);
        // }

        public override void ApplyValues(bool isOn)
        {
            ExecVal(intensity, isOn);
            ExecVal(isLowQuality, isOn);
            // intensity.ApplyValue(isOn);
            // isLowQuality.ApplyValue(isOn);
        }
    }
}