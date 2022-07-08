using UnityEngine;

namespace ET
{
    [RequireComponent(typeof(Animator))]
    public class AnimateEventNotifier : MonoBehaviour
    {
        private CameraPointCollection manager;
        // Start is called before the first frame update
        void Start()
        {
            manager = transform.parent.parent.parent.GetComponent<CameraPointCollection>();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void AnimateEndNotify()
        {
            manager.CameraAnimateEnd();
        }
        
        
    }
}
