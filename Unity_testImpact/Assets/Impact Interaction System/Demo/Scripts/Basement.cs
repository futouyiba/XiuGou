using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class Basement : MonoBehaviour
{
    [SerializeField] protected int TeamId;
    [SerializeField] protected Color color;
    
    [SerializeField] protected Text text;

    [SerializeField] private Vector3 minScale;
    // protected float mass;

    private Rigidbody Rigidbody => this.GetComponent<Rigidbody>();
    private Renderer MeshRenderer => this.GetComponent<MeshRenderer>();


    private void Awake()
    {
        SetBasementColor(color);
        UpdateMassText();

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.KeypadPlus))
        {
            Gain(1.12f);
        }

        if (Input.GetKeyDown(KeyCode.KeypadMinus))
        {
            Loss(1.12f);
        }
        
    }

    void Gain(float weight)
    {
        // this.mass += weight;
        Rigidbody.mass += weight;
        UpdateMassText();
        this.transform.localScale *= 1.05f;

    }

    void Loss(float weight)
    {
        // this.mass -= weight;
        Rigidbody.mass -= weight;
        UpdateMassText();
        if (transform.localScale.x >= minScale.x)
        {
            this.transform.localScale /= 1.05f;
        }

    }

    public void SetBasementColor(Color color)
    {
        MeshRenderer.material.color = color;
    }

    public void UpdateMassText()
    {
        text.text = Rigidbody.mass.ToString("N2");
    }


    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Pickups"))
        {
            // Debug.Log($"{collision.transform.name}");
            var pickup = collision.gameObject.GetComponent<Pickups>();
            if (pickup.teamId == this.TeamId)
            {
                var drainMass = pickup.Mass;
                Destroy(pickup.gameObject);
                Gain(drainMass);
            }
            else
            {
                var velocity = collision.rigidbody.velocity;
                Debug.Log($"{velocity},{velocity.magnitude}");
                var drainMass = pickup.Mass;
                if (velocity.magnitude > 10)
                {
                    //70%
                    drainMass = pickup.Mass * .7f;
                }
                else if (velocity.magnitude > 6)
                {
                    //40%
                    drainMass = pickup.Mass * .4f;
                    
                }
                else if (velocity.magnitude > 3)
                {
                    //20%
                    drainMass = pickup.Mass * .2f;
                    
                }
                else
                {
                    drainMass = 0f;
                }

                if (drainMass <= 0)
                {
                    return;
                }
                Loss(drainMass);
                pickup.Loss(drainMass);
                

            }
        }

    }
}
