using System;
using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
    /// <summary>
    /// Track that can be used to control the active state of a MonoBehaviour.
    /// </summary>
    [Serializable]
    [TrackClipType(typeof(MonoBehaviourEnableAsset))]
    [TrackBindingType(typeof(MonoBehaviour))]
    [ExcludeFromPreset]
    public class MonoBehaviourEnableTrack : TrackAsset
    {
        [SerializeField]
        PostPlaybackState m_PostPlaybackState = PostPlaybackState.LeaveAsIs;
        MonoBehaviourEnableMixerPlayable m_monoBehaviourEnableMixer;

        /// <summary>
        /// Specify what state to leave the MonoBehaviour in after the Timeline has finished playing.
        /// </summary>
        public enum PostPlaybackState
        {
            /// <summary>
            /// Set the MonoBehaviour to active.
            /// </summary>
            Active,

            /// <summary>
            /// Set the MonoBehaviour to Inactive.
            /// </summary>
            Inactive,

            /// <summary>
            /// Revert the MonoBehaviour to the state in was in before the Timeline was playing.
            /// </summary>
            Revert,

            /// <summary>
            /// Leave the MonoBehaviour in the state it was when the Timeline was stopped.
            /// </summary>
            LeaveAsIs
        }


        /// <summary>
        /// Specifies what state to leave the MonoBehaviour in after the Timeline has finished playing.
        /// </summary>
        public PostPlaybackState postPlaybackState
        {
            get { return m_PostPlaybackState; }
            set { m_PostPlaybackState = value; UpdateTrackMode(); }
        }

        /// <inheritdoc/>
        public override Playable CreateTrackMixer(PlayableGraph graph, MonoBehaviour monoBehaviour, int inputCount)
        {
            var mixer = MonoBehaviourEnableMixerPlayable.Create(graph, inputCount);
            m_monoBehaviourEnableMixer = mixer.GetBehaviour();

            UpdateTrackMode();

            return mixer;
        }

        internal void UpdateTrackMode()
        {
            if (m_monoBehaviourEnableMixer != null)
                m_monoBehaviourEnableMixer.PostPlaybackState = m_PostPlaybackState;
        }

        MonoBehaviour GetMonoBehaviourBinding(PlayableDirector director)
        {
            if (director == null)
                return null;

            var binding = director.GetGenericBinding(this);

            return binding as MonoBehaviour;
        }

        /// <inheritdoc/>
        public override void GatherProperties(PlayableDirector director, IPropertyCollector driver)
        {
            var monoBehaviour = GetMonoBehaviourBinding(director);
            if (monoBehaviour != null)
            {
                driver.AddFromName(monoBehaviour, "m_IsActive");
            }
        }

        /// <inheritdoc/>
        protected override void OnCreateClip(TimelineClip clip)
        {
            clip.displayName = "Enabled";
            base.OnCreateClip(clip);
        }
    }
}
