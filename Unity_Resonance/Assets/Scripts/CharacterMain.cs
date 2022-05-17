using System;
using TMPro;
using UnityEngine;
using Unity.VisualScripting;

public class CharacterMain : MonoBehaviour
{
    // protected bool IsMoving;
    protected Vector3 moveTarget = Vector3.positiveInfinity;
        
    [SerializeField]
    protected TextMeshPro nameTmp;

    [SerializeField] protected float moveSpeed;
    // [SerializeField] private TextBubble bubble;
    [SerializeField] private StateMachine fsm;
    // Start is called before the first frame update

    public bool isMe = false;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    public void SetName(string Name)
    {
        nameTmp.SetText(Name);
    }

    public void SetNameColor(Color color)
    {
        nameTmp.color = color;
    }

    public void CharLeave()
    {
        GameObject.Destroy(this.gameObject);
    }
    
           
    [SerializeField] protected GameObject sprite;
    public void SetVisible(bool isVisable)
    {
        this.sprite.SetActive(isVisable);
    }
        
    public bool IsVisible
    {
        get
        {
            return sprite.activeSelf;
        }
    }

    public void Speak(string text)
    {
        throw new Exception("not implemented");
    }
}
