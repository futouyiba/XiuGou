using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;

namespace ET
{
    public class ScatterSingles : MonoBehaviour
    {
        public Transform Max;

        public Transform Min;

        private float maxX;

        private float maxY;

        private float minX;

        private float minY;
        // Start is called before the first frame update
        void Start()
        {
            var position = Max.position;
            maxX = position.x;
            maxY = position.y;
            var position1 = Min.position;
            minX = position1.x;
            minY = position1.y;

        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKey(KeyCode.K))
            {
                var cSingles = GameObject.FindGameObjectsWithTag("Character");
                foreach (var cSingle in cSingles)
                {
                        var x = UnityEngine.Random.Range(minX, maxX);
                        var y = UnityEngine.Random.Range(minY, maxY);
                        var z = UnityEngine.Random.Range(-10f, 10f);
                        cSingle.transform.position = new Vector3(x, y,z);

                }
            }

            if (Input.GetKey(KeyCode.Alpha0))
            {
                var cSingles = GameObject.FindGameObjectsWithTag("Character");
                foreach (var cSingle in cSingles)
                {
                    var x = 0f;
                    var y = 0f;
                    var z = 0f;
                    cSingle.transform.position = new Vector3(x, y,z);

                }
            }
            
            if (Input.GetKey(KeyCode.L))
            {
                var cSingles = GameObject.FindGameObjectsWithTag("Character");
                foreach (var cSingle in cSingles)
                {
                    var x = UnityEngine.Random.Range(minX, maxX);
                    var y = UnityEngine.Random.Range(minY, maxY);
                    var z = 20f;
                    cSingle.transform.position = new Vector3(x, y,z);

                }
            }
        }
    }
}
