using System;
using UnityEngine.Playables;

namespace UnityEngine.Timeline
{
    [Serializable]
    public class MaterialBehaviour:PlayableBehaviour
    {
        public Material material = null;
        public Color color = Color.white;
    }
}