using System;
using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
    public class MonoBehaviourEnableMixerPlayable:PlayableBehaviour
    {
        private MonoBehaviourEnableTrack.PostPlaybackState m_PostPlaybackState;
        private bool m_BoundMonoBehaviourInitialState;

        private MonoBehaviour m_BoundMonoBehaviour; 
        
        public static ScriptPlayable<MonoBehaviourEnableMixerPlayable> Create(PlayableGraph graph, int inputCount)
        {
            return ScriptPlayable<MonoBehaviourEnableMixerPlayable>.Create(graph, inputCount);
        }

        public MonoBehaviourEnableTrack.PostPlaybackState PostPlaybackState
        {
            get { return m_PostPlaybackState; }
            set { m_PostPlaybackState = value; }
        }

        public override void OnPlayableDestroy(Playable playable)
        {
            base.OnPlayableDestroy(playable);
            if (m_BoundMonoBehaviour ==null)
            {
                return;
            }

            switch (m_PostPlaybackState)
            {
                case MonoBehaviourEnableTrack.PostPlaybackState.Active:
                    m_BoundMonoBehaviour.enabled = true;
                    break;
                case MonoBehaviourEnableTrack.PostPlaybackState.Inactive:
                    m_BoundMonoBehaviour.enabled = false;
                    break;
                case MonoBehaviourEnableTrack.PostPlaybackState.Revert:
                    m_BoundMonoBehaviour.enabled = m_BoundMonoBehaviourInitialState;
                    break;
                case MonoBehaviourEnableTrack.PostPlaybackState.LeaveAsIs:
                    break;
                default:
                    break;
            }
        }

        public override void ProcessFrame(Playable playable, FrameData info, object playerData)
        {
            base.ProcessFrame(playable, info, playerData);
            if (m_BoundMonoBehaviour == null)
            {
                m_BoundMonoBehaviour = playerData as MonoBehaviour;
                m_BoundMonoBehaviourInitialState = m_BoundMonoBehaviour != null && m_BoundMonoBehaviour.enabled;
            }

            if (m_BoundMonoBehaviour == null)
            {
                return;
            }

            var inputCount = playable.GetInputCount();
            var hasInput = false;
            for (int i = 0; i < inputCount; i++)
            {
                if (playable.GetInputWeight(i)>0)
                {
                    hasInput = true;
                    break;
                }
            }

            m_BoundMonoBehaviour.enabled = hasInput;

        }
    }
}