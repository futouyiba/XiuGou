using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Unity.VisualScripting;
using UnityEngine;

public class ColorGameCamera : MonoBehaviour
{
    [SerializeField] private StateMachine fsm;
    private static readonly Vector3 lookAtCamOffset = new Vector3(0f, 5.47f, -27.28f);
    public GameObject objFollowing;
    private Vector3 initPos;
    
    
    // Start is called before the first frame update
    void Start()
    {
        initPos = this.transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (objFollowing != null)
        {
            this.transform.position = objFollowing.transform.position + lookAtCamOffset;
        }
    }

    public void FollowMe(GameObject go)
    {
        objFollowing = go;
        fsm.TriggerUnityEvent("StartFollow");
    }

    public void ResetCam()
    {
        this.transform.position = initPos;
    }


}
