using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET.Utility.AllIn1SpriteShader
{
    public class ShaderEffectRainbowOutline : ShaderEffectBase
    {

        public ShaderVar<bool> OnOff;

        public ShaderVar<float> baseWidth;

        public ShaderVar<bool> textureOn;

        public ShaderVar<Texture> outlineTexture;
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public override void ApplyValues(bool isOn)
        {
            ExecVal(OnOff, isOn);
            ExecVal(baseWidth, isOn);
            ExecVal(textureOn, isOn);
            ExecVal(outlineTexture, isOn);

        }
    }
}
