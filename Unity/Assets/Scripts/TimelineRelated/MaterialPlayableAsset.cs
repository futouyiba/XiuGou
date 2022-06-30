#if UNITY_EDITOR
using System.ComponentModel;
#endif
using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
    /// <summary>
    /// Playable Asset class for Material Tracks
    /// </summary>
#if UNITY_EDITOR
    [DisplayName("Material Clip")]
#endif
    class MaterialPlayableAsset : PlayableAsset, ITimelineClipAsset
    {
        public MaterialBehaviour MaterialBehaviour = new MaterialBehaviour();
        /// <summary>
        /// Returns a description of the features supported by Material clips
        /// </summary>
        public ClipCaps clipCaps { get { return ClipCaps.Blending; } }

        /// <summary>
        /// Overrides PlayableAsset.CreatePlayable() to inject needed Playables for an Material asset
        /// </summary>
        public override Playable CreatePlayable(PlayableGraph graph, GameObject go)
        {
            var playable = ScriptPlayable<MaterialBehaviour>.Create(graph, MaterialBehaviour);
            return playable;
        }
    }
}