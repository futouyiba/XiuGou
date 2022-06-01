using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Bomb : MonoBehaviour
{
    [SerializeField] protected float fuse = 99f;
    [SerializeField] protected float radius = 15f;
    [SerializeField] protected float force = 250;

    [SerializeField] protected TextMeshProUGUI tmp;

    protected int fuseInt = 99;

    public void Init(float fuse)
    {
        this.fuse = fuse;
        fuseInt = (int)fuse;
        UpdateFuseText(fuseInt);
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        fuse -= Time.deltaTime;
        if ((int) fuse < fuseInt)
        {
            fuseInt = (int)fuse;
            UpdateFuseText(fuseInt);
        }
        if (fuse <= 0)
        {
            Boom();
        }
    }

    public void Boom()
    {
        Collider[] hitColliders = Physics.OverlapSphere(this.transform.position, radius);
        if (hitColliders.Length == 0)
        {
            return;
        }

        var blowForce = force;

        foreach (var hitCollider in hitColliders)
        {
            if(!hitCollider.gameObject.CompareTag("Pickups")) continue;
            var dist = Vector3.Distance(hitCollider.transform.position, this.transform.position);
            var away = (hitCollider.transform.position - this.transform.position).normalized;
            var blow = (Vector3.up + away).normalized;
            blowForce = Mathf.Max(1 - dist / radius, 0.3f) * force;
            // hitCollider.attachedRigidbody.AddExplosionForce(blowForce, this.transform.position, 15f);
            hitCollider.attachedRigidbody.AddForce(blow*blowForce,ForceMode.Impulse);
        }
        
        Destroy(gameObject);
    }

    protected void UpdateFuseText(int number)
    {
        tmp.SetText(number.ToString());
    }
}
