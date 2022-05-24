using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using Unity.VisualScripting.FullSerializer;
using UnityEngine;

[RequireComponent(typeof(CharacterMain))]
public class BotPlayer : MonoBehaviour
{
    [SerializeField] private StateMachine fsm;

    public CharacterMain main;

    public int team
    {
        get => main.teamId;
        set => main.SetTeam(value);
    }
    
    private void Awake()
    {
        main = this.GetComponent<CharacterMain>();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TriggerEv(string evId)
    {
        fsm.TriggerUnityEvent(evId);
    }

    public void Wander()
    {
        var randomPos = DanceFloorHelper.GetRandomDanceFloorPos3();
        main.MoveStart(randomPos);
        
    }

}
