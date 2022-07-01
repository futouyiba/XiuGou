#if UNITY_EDITOR
using System.ComponentModel;
#endif

using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
#if UNITY_EDITOR
    [DisplayName("MonoBehaviourEnable Clip")]
#endif
    public class MonoBehaviourEnableAsset:PlayableAsset, ITimelineClipAsset
    {
        public MonoBehaviourEnableBehaviour MonoBehaviourEnableBehaviour = new MonoBehaviourEnableBehaviour();

        public override Playable CreatePlayable(PlayableGraph graph, GameObject owner)
        {
            var playable = ScriptPlayable<MonoBehaviourEnableBehaviour>.Create(graph, MonoBehaviourEnableBehaviour);

            return Playable.Create(graph);
        }

        public ClipCaps clipCaps => ClipCaps.None;
    }

    public class MonoBehaviourEnableBehaviour : MaterialBehaviour
    {
    }
}