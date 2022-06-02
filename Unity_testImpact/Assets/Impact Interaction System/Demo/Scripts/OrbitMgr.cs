using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class OrbitMgr : MonoBehaviour
{
    [SerializeField] protected List<GameObject> followers;
    [SerializeField] private float rotationSpeed;
    [SerializeField] private float radius;

    [SerializeField] private GameObject orbitObjPrefab;
    // private Transform center;
    // Start is called before the first frame update
    void Start()
    {
        followers = new List<GameObject>();
        // center = transform;
        Rearrange();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.I))
        {
            CreateOrbitObj();
        }

        if (Input.GetKeyDown(KeyCode.O))
        {
            RemoveOrbitObj();
        }
        
        this.transform.Rotate(Vector3.up, rotationSpeed*Time.deltaTime);
    }

    
    
    private void Rearrange()
    {
        var count = followers.Count;
        if (count <= 0)
        {
            return;
        }
        // var startAngle = 0f;
        // var endAngle = 360f;
        var startVec = this.transform.forward;
        var deltaAngle = 360f / count;
        // Debug.Log($"{count} objs , delta angle is {deltaAngle}");
        for (int i = 0; i < count; i++)
        {
            var objAngle = i * deltaAngle;
            var objVec = Quaternion.AngleAxis(objAngle, Vector3.up) * startVec;
            // Debug.Log($"{i} nd obj,obj angle is {objAngle}, objVec={objVec}");
            followers[i].transform.localPosition = objVec * radius;
        }

    }

    public void AddOrbit(GameObject obj)
    {
        followers.Add(obj);
        Rearrange();
    }

    public void RemoveOrbit(GameObject obj)
    {
        followers.Remove(obj);
        Rearrange();
    }

    public void CreateOrbitObj()
    {
        var created = Instantiate(orbitObjPrefab, transform);
        var orbit = created.GetComponent<OrbitObj>();
        orbit.Init(() => this.RemoveOrbit(created));
        AddOrbit(created);
    }

    public void RemoveOrbitObj()
    {
        if (followers.Count == 0) return;
        var toRemove = this.followers.First();
        var orbit = toRemove.GetComponent<OrbitObj>();
        orbit.testSimCollided();
    }

    public void UpdateFollowPos(Vector3 deltaPos)
    {
        transform.position += deltaPos;
    }

    // public void UpdateOrbitPositions(Vector3 deltaPos)
    // {
    //     Vector3 movePos = new Vector3(deltaPos.x, 0, deltaPos.z);
    //     foreach (var follower in followers)
    //     {
    //         var position = center.position;
    //         follower.transform.position += movePos;
    //         follower.transform.RotateAround(position, Vector3.up, rotationSpeed*Time.deltaTime);
    //         // var desiredPosition = (follower.transform.position - position).normalized * radius + position;
    //         // follower.transform.position = Vector3.MoveTowards(follower.transform.position, desiredPosition, Time.deltaTime * radiusSpeed);
    //     }
    // }
    

    
}
