using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
// using Bolt;
using Unity.VisualScripting;
using DG.Tweening;
using ET.Utility;
using TMPro;
using Unity.Mathematics;
using UnityEngine;
using Random = UnityEngine.Random;
using Sequence = DG.Tweening.Sequence;

namespace ET
{
    
    public class CharMain : MonoBehaviour
    {
        // protected bool IsMoving;
        protected Vector3 moveTarget = Vector3.positiveInfinity;
        
        [SerializeField]
        protected TextMeshPro nameTmp;

        [SerializeField] protected float moveSpeed;
        [SerializeField] private TextBubble bubble;
        [SerializeField] private StateMachine fsm;
        public int userId;

        [SerializeField]
        public float bubbleTime;

        [SerializeField] private float debugForce;
        
        public bool isMe = false;
        public bool isMoving = false;
        public bool isTalking = false;
        public float talkTime = 0f;
        public float mvIdleTime = 0f;

        public float mvStayTime = 0f;

        protected float direction = 1;
        // private float oriScaleX;
        // Start is called before the first frame update
        void Start()
        {
            // oriScaleX = transform.GetChild(0).localScale.x;
            initSprScale = sprite.transform.localScale;
            fsm.TriggerUnityEvent("DanceStart");
            // Move(DanceFloorHelper.GetRandomDanceFloorPos());
        }

        // Update is called once per frame
        void Update()
        {
            // if (!this.IsMoving)
            // {
            //     Move(DanceFloorHelper.GetRandomDanceFloorPos());
            // }
            // if (Input.GetKeyDown(KeyCode.Keypad1))
            // {
            //     fsm.TriggerUnityEvent("DanceStart");
            //
            // }
            //
            if (Input.GetKeyDown(KeyCode.Keypad5))
            {
                // Debug.LogWarning($"knocking me {userId}");
                var randomX=Random.Range(-1f, 1f);
                var randomZ=Random.Range(-1f, 1f);
                var randomVec = new Vector3(randomX, 1f, randomZ).normalized;
                
                AddForce(randomVec*debugForce);
            }
        }

        private Sequence cur_seq;
        /// <summary>
        /// 
        /// </summary>
        /// <param name="target">归一化的位置</param>
        public void Move(Vector2 target)
        {
            // var vars = Variables.Object(this.gameObject);
            // var isMoving=vars.Get("IsMoving");
            // if ((bool)isMoving)
            // {
            //     //kill dotween and send event
            //     DOTween.KillAll(this.gameObject);
            //     fsm.TriggerUnityEvent("MoveInterrupt");
            //     // Debug.LogError("char moving, will not exec");
            //     // return;
            // }
            
            //20200513:不管在哪个状态都触发StartMove，在不同地方进行不同响应
            fsm.TriggerUnityEvent("StartMove");
            var scenePos = DanceFloorHelper.PosUnified2Scene(target);
            var targetPos = new Vector3(scenePos.x, transform.position.y, scenePos.y);
            // this.IsMoving = true;

            // CameraBolt.TriggerEvent("FollowRand");
            this.moveTarget = targetPos;
            var distance = Vector3.Distance(this.transform.position, this.moveTarget);
            var duration = distance / moveSpeed;
            //转身
            var spriteChild = this.transform.GetChild(0);
            if (scenePos.x>= this.transform.position.x)
            {
                if (direction<0)
                {
                    direction = 1f;
                    spriteChild.DOScaleX(direction * initSprScale.x, 0.3f);
                }
            }
            else
            {
                if (direction > 0)
                {
                    direction = -1f;
                    spriteChild.DOScaleX(direction * initSprScale.x, 0.3f);
                }
            }

            cur_seq = DOTween.Sequence();
            cur_seq.Append(this.transform.DOMove(targetPos, duration).OnComplete(MoveEnd));
            cur_seq.Play();
            // Debug.Log($"going to {target}");
            if(isMe) NativeProxy.SendMeMove(target);
        }

        public void MoveEnd()
        {
            fsm.TriggerUnityEvent("MoveEnded");
            if(isMe) CameraBolt.TriggerEvent("Follow2Idle");
            // this.IsMoving = false;
            this.moveTarget = Vector3.positiveInfinity;
            cur_seq = null;
            //
            // var task = Task.Run(()=>Wait(Random.Range(3, 8)));
            // yield return new WaitUntil(()=>task.IsCompleted);
            // StartCoroutine(Wait(Random.Range(3, 8)));
            // Move(DanceFloorHelper.GetRandomDanceFloorPos());

        }

        public void KillCurSeq()
        {
            if (cur_seq==null)
            {
                Debug.LogError("current seq does not exist!");
                return;
            }
            cur_seq.Kill();
            cur_seq = null;
        }

        public void MoveRandom()
        {
            Move(DanceFloorHelper.GetRandomDanceFloorPos());
        }

        protected static IEnumerator Wait(int time)
        {
            Debug.Log($"{Time.time} starting wait for {time} secs");
            yield return new WaitForSeconds(time);
            Debug.Log($"{Time.time} ended wait for {time} secs");
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

        /// <summary>
        /// 
        /// </summary>
        /// <param name="content"></param>
        public void Speak(string content)
        {
            bubble.Speak(content);
            fsm.TriggerUnityEvent("StartTalking");
        }

        public void SpeakEnd()
        {
            bubble.HideBubble();
            fsm.TriggerUnityEvent("FinishedTalking");
        }

        public void FollowMe()
        {
            if(!isMe) return;
            var cameraBolt = Camera.main.GetComponent<CameraBolt>();
            CameraBolt.TriggerEvent("Idle2Follow");
        }

        public bool TalkTimeCheck()
        {
            talkTime += Time.deltaTime;
            return talkTime >= this.bubbleTime;
        }

        public bool MoveIdleTimeCheck()
        {
            mvIdleTime += Time.deltaTime;
            return mvIdleTime >= this.mvStayTime;
        }
        
        public int BoltUnityEvAfterTime(int afterTime, string evStr)
        {
            return TimeMgr.instance.AddTimer(afterTime, () => fsm.TriggerUnityEvent(evStr));
        }
        
        public void BoltCancelTimer(int timerId)
        {
            TimeMgr.instance.RemoveTimer(timerId);
        }

        public void Teleport(Vector2 position)
        {
            this.transform.position = DanceFloorHelper.PosUnified2Scene(position);
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

        // move to charMgr since char must be added after removing.
        // public void ChangeAppearance(int appearanceId)
        // {
        //     var userId = this.userId;
        //     var pos = this.transform.position;
        //     var name = this.name;
        //     var isMe = this.isMe;
        //     CharMgr.instance.CreateCharView(userId, pos, name, appearanceId, Color.white);
        //     if (isMe)
        //     {
        //         CharMgr.instance.RegisterMe(userId);
        //     }
        //     CharMgr.instance.RemoveCharView(userId);

        // }

        #region DanceControl

         public void DanceStart()
        {
            fsm.TriggerUnityEvent("DanceStart");
        }

        public void DanceStop()
        {
            fsm.TriggerUnityEvent("DanceStop");
        }
        
        
        public void ftDanceStart()
        {
            if (_curBreathSeq is {active: true}) _curBreathSeq.Kill();
            var animator = sprite.GetComponent<Animator>();
            animator.enabled = true;
        }

        public void ftDanceStop()
        {
            
            var animator = sprite.GetComponent<Animator>();
            animator.StopPlayback();
            animator.enabled = false;
            _curBreathSeq = DOTween.Sequence();
            sprBreath();

        }

        protected bool isBreathWidth;
        private Vector3 initSprScale;
        private Sequence _curBreathSeq;
        [SerializeField] private float breathScale = 1.1f;
        [SerializeField] private float breathInterval = .5f;
        protected void sprBreath()
        {
            if (!_curBreathSeq.active || _curBreathSeq.IsPlaying())
            {
                _curBreathSeq.Kill();
                _curBreathSeq = DOTween.Sequence();
            }
            if (isBreathWidth)
            {
                _curBreathSeq.Append(sprite.transform.DOScale(
                    new Vector3(initSprScale.x * breathScale, initSprScale.y / breathScale, initSprScale.z),
                    breathInterval/2f).OnComplete(()=>
                    sprite.transform.DOScale(initSprScale, breathInterval / 2).OnComplete(sprBreath)));
                _curBreathSeq.Play();
            }
            else
            {
                _curBreathSeq.Append(sprite.transform.DOScale(
                    new Vector3(initSprScale.x / breathScale, initSprScale.y * breathScale, initSprScale.z),
                    breathInterval/2f).OnComplete(()=>
                    sprite.transform.DOScale(initSprScale, breathInterval / 2).OnComplete(sprBreath)));
                _curBreathSeq.Play();
            }

            isBreathWidth = !isBreathWidth;

        }

        #endregion


        #region physics

        private void OnCollisionEnter(Collision collision)
        {
            Debug.LogWarning($"me {userId} collided with {collision.gameObject.name}");
        }

        public void AddForce(Vector3 force)
        {
            var rb = this.GetComponent<Rigidbody>();
            rb.AddForce(force);
        }

        #endregion
        
        
    }
}
