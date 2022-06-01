using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Pickups : MonoBehaviour
{
    [SerializeField] public int teamId;
    [SerializeField] protected Color color;
    
    [SerializeField] protected Text text;
    
    private Rigidbody Rigidbody => this.GetComponent<Rigidbody>();
    private Renderer MeshRenderer => this.GetComponent<MeshRenderer>();

    public float Mass => Rigidbody.mass;

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
        
    }

    public void Init(int teamId, Color color, float mass)
    {
        this.teamId = teamId;
        this.color = color;
        this.Rigidbody.mass = mass;
        SetBasementColor(color);
        UpdateMassText();
    }
    
    public void Gain(float weight)
    {
        Rigidbody.mass += weight;
        UpdateMassText();
        this.transform.localScale *= 1.05f;

    }

    public void Loss(float weight)
    {
        if (weight >= Rigidbody.mass)
        {
            Rigidbody.mass = 0f;
            Destroy(this.gameObject);
            return; 
        }
        Rigidbody.mass -= weight;
        // if()
        UpdateMassText();
        this.transform.localScale /= 1.05f;
        
    }

    public void SetBasementColor(Color color)
    {
        MeshRenderer.material.color = color;
    }
    
    public void UpdateMassText()
    {
        text.text = Rigidbody.mass.ToString("N2");
    }


}
