using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
    class MaterialMixerPlayable : PlayableBehaviour
    {
        // bool m_BoundMeshRendererInitialStateIsActive;

        private MeshRenderer mBoundMeshRenderer;
        private Material m_material;


        public static ScriptPlayable<MaterialMixerPlayable> Create(PlayableGraph graph, int inputCount)
        {
            return ScriptPlayable<MaterialMixerPlayable>.Create(graph, inputCount);
        }

        public override void OnPlayableDestroy(Playable playable)
        {
            if (mBoundMeshRenderer == null)
                return;

            mBoundMeshRenderer.material = m_material;
            
        }

        public override void ProcessFrame(Playable playable, FrameData info, object playerData)
        {
            if (mBoundMeshRenderer == null)
            {
                mBoundMeshRenderer = playerData as MeshRenderer;
                // m_BoundMeshRendererInitialStateIsActive = mBoundMeshRenderer != null && mBoundMeshRenderer.enabled;
            }

            if (mBoundMeshRenderer == null)
                return;

            int inputCount = playable.GetInputCount();
            Material mat = mBoundMeshRenderer.material;
            var blendedColor = Color.clear;
            
            bool hasInput = false;
            for (int i = 0; i < inputCount; i++)
            {
                float inputWeight = playable.GetInputWeight(i);
                if (inputWeight <= 0)
                {
                    continue;
                }
                ScriptPlayable<MaterialBehaviour> materialBehaviour =
                    (ScriptPlayable<MaterialBehaviour>)playable.GetInput(i);
                var behaviour = materialBehaviour.GetBehaviour();
                var color = behaviour.color;
                blendedColor += color * inputWeight;
                mat = behaviour.material;
                // mBoundMeshRenderer.material = behaviour.material;
            }

            mBoundMeshRenderer.material = mat;
            mBoundMeshRenderer.material.color = blendedColor;
            // mBoundMeshRenderer.SetActive(hasInput);
        }
    }
}
