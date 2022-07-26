using System;
using Sirenix.Serialization;

namespace ET.Utility.AllIn1SpriteShader
{
    
    public class ShaderEffectBlur :ShaderEffectBase
    {
        public ShaderVar<float> intensity;
        public ShaderVar<bool> isLowQuality;

        private void Start()
        {
            intensity = new ShaderVar<float>("_Blurintensity", 10, 0, mat);
            isLowQuality = new ShaderVar<bool>("_BlurHD", true, false, mat);
        }

        public override void ApplyValues(bool isOn)
        {
            intensity.ApplyValue(isOn);
            isLowQuality.ApplyValue(isOn);
        }
    }
}