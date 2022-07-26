namespace ET.Utility.AllIn1SpriteShader
{
    public class ShaderEffectGhost :ShaderEffectBase
    {
        public ShaderVar<float> colorBoost;
        public ShaderVar<float> transparency;
        public ShaderVar<float> blend;
        public override void ApplyValues(bool isOn)
        {
            ExecVal(colorBoost,isOn);
            ExecVal(transparency,isOn);
            ExecVal(blend,isOn);
        }
    }
}