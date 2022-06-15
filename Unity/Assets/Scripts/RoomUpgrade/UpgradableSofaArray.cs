using System.Collections;
using System.Collections.Generic;
using RoomUpgrade;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class UpgradableSofaArray : MonoBehaviour
    {
        [OdinSerialize] public List<UpgradableSofa> sofas;
        
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void Material0()
        {
            foreach (var sofa in sofas)
            {
                sofa.Material0();
            }
        }
        
        public void Material1()
        {
            foreach (var sofa in sofas)
            {
                sofa.Material1();
            }
        }
        
        public void Material2()
        {
            foreach (var sofa in sofas)
            {
                sofa.Material2();
            }
        }
        
    }
}
