using System;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

[Serializable]
public class MonoBehaviourActivationClip : PlayableAsset, ITimelineClipAsset
{
    public MonoBehaviourActivationBehaviour template = new MonoBehaviourActivationBehaviour ();

    public ClipCaps clipCaps
    {
        get { return ClipCaps.Blending; }
    }

    public override Playable CreatePlayable (PlayableGraph graph, GameObject owner)
    {
        var playable = ScriptPlayable<MonoBehaviourActivationBehaviour>.Create (graph, template);
        return playable;
    }
}
