using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace ET
{
    public class ParticleSystemCollection : MonoBehaviour
    {
        [SerializeField] private List<ParticleSystem> particles;
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        [Button("PlayAll")]
        public void PlayAll()
        {
            foreach (var particle in particles)
            {
                particle.Play();
            }
        }
    }
}

