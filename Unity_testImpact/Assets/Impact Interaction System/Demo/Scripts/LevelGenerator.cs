using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class LevelGenerator : MonoBehaviour
{
    [SerializeField] protected List<GameObject> pickupPrefabs;
    [SerializeField] protected Grid grid;
    [SerializeField] protected Transform small;
    [SerializeField] protected Transform big;
    [SerializeField] protected List<Color> teamColors;


    // Start is called before the first frame update
    void Start()
    {
        CreatePickups();
        
        testNodes = GenerateNodes();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    protected void CreatePickups()
    {
        var nodes = GenerateNodes();
        foreach (var node in nodes)
        {
            var random = Random.Range(0, 2);
            var prefab = pickupPrefabs[random];
            var created = Instantiate(prefab);
            created.transform.position = node+ 2f*Vector3.up;
            var pickups = created.GetComponent<Pickups>();
            var randomTeam = Random.Range(0, 4);
            var randomMassMultiply = Random.Range(0.8f, 1.5f);
            pickups.Init(randomTeam,teamColors[randomTeam],pickups.Mass*randomMassMultiply);
        }
    }

    protected List<Vector3> GenerateNodes()
    {
        List<Vector3> result = new List<Vector3>();
        //each grid one item first
        //get borders
        var cellSmall = grid.WorldToCell(small.position);
        var cellBig = grid.WorldToCell(big.position);
        Debug.Log($"generating nodes from x:{cellSmall.x}~{cellBig.x}, y:{cellSmall.z},{cellBig.z}");

        for (int col = cellSmall.x; col < cellBig.x; col++)
        {
            if(col%3!=0) continue; 
            for (int row = cellSmall.z; row < cellBig.z; row++)
            {
                if(row%3!=0) continue;
                var cellCenter=grid.CellToWorld(new Vector3Int(row, 3, col));
                //snap to terrain
                var snapPos = cellCenter;
                var hits = Physics.RaycastAll(cellCenter, Vector3.down, 100f);
                foreach (var hit in hits)
                {
                    if (hit.transform.CompareTag("Terrian"))
                    {
                        snapPos = hit.point;// + .5f* Vector3.up;                        
                        break;
                    }
                }
   
                result.Add(snapPos);
            }
        }

        return result;
    }

    private List<Vector3> testNodes = new List<Vector3>();
    private void OnDrawGizmos()
    {
        // foreach (var node in testNodes)
        // {
        //     Gizmos.DrawSphere(node, .5f);
        // }

        
    }
}
