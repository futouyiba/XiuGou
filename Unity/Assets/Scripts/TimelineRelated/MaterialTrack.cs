using System;
using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
    /// <summary>
    /// Track that can be used to control the active state of a GameObject.
    /// </summary>
    [Serializable]
    [TrackClipType(typeof(MaterialPlayableAsset))]
    [TrackBindingType(typeof(MeshRenderer))]
    [ExcludeFromPreset]
    // [TimelineHelpURL(typeof(MaterialTrack))]
    public class MaterialTrack : TrackAsset
    {
        [SerializeField]
        PostPlaybackState m_PostPlaybackState = PostPlaybackState.LeaveAsIs;
        MaterialMixerPlayable m_MaterialMixer;
        private MeshRenderer m_TrackBinding;
        private Material m_Material;

        /// <summary>
        /// Specify what state to leave the GameObject in after the Timeline has finished playing.
        /// </summary>
        public enum PostPlaybackState
        {
            /// <summary>
            /// Set the GameObject to active.
            /// </summary>
            Active,

            /// <summary>
            /// Set the GameObject to Inactive.
            /// </summary>
            Inactive,

            /// <summary>
            /// Revert the GameObject to the state in was in before the Timeline was playing.
            /// </summary>
            Revert,

            /// <summary>
            /// Leave the GameObject in the state it was when the Timeline was stopped.
            /// </summary>
            LeaveAsIs
        }

        
        
        internal bool CanCompileClips()
        {
            return hasClips;
        }



        /// <inheritdoc/>
        public override Playable CreateTrackMixer(PlayableGraph graph, GameObject go, int inputCount)
        {
            var mixer = MaterialMixerPlayable.Create(graph, inputCount);
            m_MaterialMixer = mixer.GetBehaviour();

            return mixer;
        }


        MeshRenderer GetBinding(PlayableDirector director)
        {
            if (director == null)
                return null;

            UnityEngine.Object key = this;
            if (isSubTrack)
                key = parent;

            UnityEngine.Object binding = null;
            if (director != null)
                binding = director.GetGenericBinding(key);

            MeshRenderer meshRenderer = null;
            if (binding != null) // the binding can be an animator or game object
            {
                meshRenderer = binding as MeshRenderer;
                var gameObject = binding as GameObject;
                if (meshRenderer == null && gameObject != null)
                    meshRenderer = gameObject.GetComponent<MeshRenderer>();
            }

            return meshRenderer;
        }

        /// <inheritdoc/>
        public override void GatherProperties(PlayableDirector director, IPropertyCollector driver)
        {
            var meshRenderer = GetBinding(director);
            if (meshRenderer != null)
            {
                driver.AddFromName(meshRenderer, "m_meshRenderer");
            }
        }

        /// <inheritdoc/>
        protected override void OnCreateClip(TimelineClip clip)
        {
            clip.displayName = "Material";
            base.OnCreateClip(clip);
        }
    }
}
