using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeatBlock : MonoBehaviour
{

    [SerializeField]private int bindChannel;

    [SerializeField] private float multiplier;
    [SerializeField] private float bottom;
    [SerializeField] private float cap;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Init(int bindChannel)
    {
        this.bindChannel = bindChannel;
    }

    public void UpdateLength()
    {
        var data = BeatBlockMgr.instance.GetChannel(bindChannel);
        var scaley = Mathf.Clamp(data * multiplier, bottom, cap);
        var scale = new Vector3(1, scaley, 1);
        transform.localScale = scale;
    }
}
