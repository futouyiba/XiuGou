using System;
using ColorGame;
using DG.Tweening;
using TMPro;
using UnityEngine;
using Unity.VisualScripting;
using Sequence = DG.Tweening.Sequence;

public class CharacterMain : MonoBehaviour
{
    // protected bool IsMoving;
    protected Vector3 moveTarget = Vector3.positiveInfinity;
    protected Sequence moveSeq;
        
    [SerializeField]
    protected TextMeshPro nameTmp;

    [SerializeField] protected float moveSpeed;
    // [SerializeField] private TextBubble bubble;
    [SerializeField] private StateMachine fsm;
    // Start is called before the first frame update
    [SerializeField] private MeshRenderer renderer;

    private int _id;
    public int Id => _id;
    

    public int teamId = -1;
    
    public bool isMe = false;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Init(int id, string name, Color name_color, Vector3 position)
    {
        this._id = id;
        SetName(name);
        SetNameColor(name_color);
        this.transform.position = position;
    }

    public void MoveStart(Vector3 target)
    {
        moveTarget = target;
        fsm.TriggerUnityEvent("MoveStart");
    }

    public void Move()
    {
        if (moveTarget == Vector3.negativeInfinity)
        {
            Debug.LogError($"moving without target vector!");
            return;
        }
        float dist = (this.transform.position - moveTarget).magnitude;
        moveSeq = DOTween.Sequence();
        moveSeq.Append(this.transform.DOMove(moveTarget, dist / moveSpeed).OnComplete(MoveEnd));
    }

    public void MoveEnd()
    {
        moveSeq = null;
        moveTarget=Vector3.negativeInfinity;
        fsm.TriggerUnityEvent("MoveEnd");
    }

    public void MoveCancel()
    {
        if (moveSeq == null)
        {
            Debug.LogError($"move sequence does not exist");
            return;
        }
        moveSeq.Kill();
        moveSeq = null;
        // moveTarget=Vector3.negativeInfinity;
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
    
    private void ChangeMaterial(Material material)
    {
        renderer.material = material;
    }

    public void SetTeam(int teamId)
    {
        this.teamId = teamId;
        ChangeMaterial(ColorGameMain.Instance.GetTeamMaterial(teamId));
            
    }
}
