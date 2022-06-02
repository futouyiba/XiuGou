using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class OrbitObj : MonoBehaviour
{
    protected Action onDestroyAction;
    [SerializeField] private List<GameObject> objPrefabs;
    protected GameObject objInst;
    
    public void Init(Action onDestroy)
    {
        AddDestroyDlg(onDestroy);
        int random = Random.Range(0, objPrefabs.Count);
        var prefab = objPrefabs[random];
        var created = Instantiate(prefab, transform);
        objInst=created;
        created.transform.localPosition = Vector3.zero;
        var xrot = Random.Range(0f, 60f);
        var zrot = Random.Range(0f, 60f);
        created.transform.Rotate(new Vector3(xrot, 0, zrot));
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log($"collided with {collision.transform.name}");
        // throw new NotImplementedException();
        objInst.SetActive(false);
        onDestroyAction?.Invoke();
        Destroy(this.gameObject);
    }

    private void OnTriggerEnter(Collider other)
    {
        throw new NotImplementedException();
    }

    private void AddDestroyDlg(Action dlg)
    {
        if (dlg==null)
        {
            Debug.LogError($"dlg to add is null");
        }
        onDestroyAction += dlg;
    }

    public void testSimCollided()
    {
        objInst.GetComponent<Collider>().enabled = false;
        onDestroyAction?.Invoke();
        Destroy(this.gameObject);
    }
}
