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
using UnityEditor;
using UnityEngine;
using Random = UnityEngine.Random;
using Sequence = DG.Tweening.Sequence;

namespace ET
{
    
    public class CharMain : MonoBehaviour
    {
        // protected bool IsMoving;
        protected Vector3 moveTarget = Vector3.negativeInfinity;
        
        [SerializeField]
        protected TextMeshPro nameTmp;

        [SerializeField] public float moveSpeed;
        [SerializeField] private TextBubble bubble;
        [SerializeField] private StateMachine fsm;
        public int userId;

        [SerializeField]
        public float bubbleTime;

        [SerializeField] private float debugForce;

        [SerializeField] private float moveTargetTolerance;

        [SerializeField] private ParticleSystem levelupParticle;
        // [SerializeField] private Animator animator;
        public bool isMe = false;
        public bool isMoving = false;
        public bool isTalking = false;
        public float talkTime = 0f;
        public float mvIdleTime = 0f;

        public float mvStayTime = 0f;

        protected float direction = 1;

        private Quaternion initRot;
        // private float oriScaleX;
        
        public float AnimSpeed
        {
            get => sprite.GetComponent<Animator>().speed;
            set => sprite.GetComponent<Animator>().speed = value;
        }
        
        // Start is called before the first frame update
        void Start()
        {
            // oriScaleX = transform.GetChild(0).localScale.x;
            initSprScale = sprite.transform.localScale;
            initRot = transform.rotation;
            // SetPivotOffset();
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

        // [SerializeField] private Vector3 debugMovingDir;
        private void FixedUpdate()
        {
            if (isMoving)
            {
                if (Vector3.Distance(moveTarget, transform.position) <= moveTargetTolerance)
                {
                    // fsm.TriggerUnityEvent("MoveEnded");
                    // moveTarget = Vector3.negativeInfinity;
                    MoveEnd();
                    return;
                }

                if (moveTarget.x < -1000f)
                {
                    Debug.LogError($"moving but target is not valid");
                    return;
                }
                var rb = this.GetComponent<Rigidbody>();
                var moveDir = (moveTarget - this.transform.position).normalized;
                // debugMovingDir = moveDir;
                rb.velocity = moveDir * moveSpeed;
            }
        }

        private Sequence cur_move_seq;
        // private Vector2 move_target;
        /// <summary>
        /// 
        /// </summary>
        /// <param name="target">归一化的位置</param>
        public void MoveStart(Vector2 target)
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
            
            var scenePos = DanceFloorHelper.PosUnifiedPolar2Scene(target);
            // var targetPos = DanceFloorHelper.BuildWorldPosition(scenePos);
            // if (targetPos.x < -1000f) return;
            moveTarget = scenePos;
            fsm.TriggerUnityEvent("StartMove");
            // Debug.LogWarning($"my pos is {transform.position}, target is {moveTarget}");
            
        }

        public void ftMove()
        {
            // var target = moveTarget;
            //
            // var distance = Vector3.Distance(this.transform.position, this.moveTarget);
            // var duration = distance / moveSpeed;
            // //转身
            // var spriteChild = this.transform.GetChild(0);
            // if (target.x>= this.transform.position.x)
            // {
            //     if (direction<0)
            //     {
            //         direction = 1f;
            //         spriteChild.DOScaleX(direction * initSprScale.x, 0.3f);
            //     }
            // }
            // else
            // {
            //     if (direction > 0)
            //     {
            //         direction = -1f;
            //         spriteChild.DOScaleX(direction * initSprScale.x, 0.3f);
            //     }
            // }
            //
            // cur_move_seq = DOTween.Sequence();
            // cur_move_seq.Append(this.transform.DOMove(target, duration).OnComplete(MoveEnd));
            // cur_move_seq.Play();
            // // Debug.Log($"going to {target}");
            // if(isMe) NativeProxy.SendMeMove(target);
        }

        public void MoveEnd()
        {
            fsm.TriggerUnityEvent("MoveEnded");
            if(isMe) CameraBolt.TriggerEvent("Follow2Idle");
            // this.IsMoving = false;
            this.moveTarget = Vector3.negativeInfinity;
            cur_move_seq = null;
            //
            // var task = Task.Run(()=>Wait(Random.Range(3, 8)));
            // yield return new WaitUntil(()=>task.IsCompleted);
            // StartCoroutine(Wait(Random.Range(3, 8)));
            // Move(DanceFloorHelper.GetRandomDanceFloorPos());

        }

        public void KillCurSeq()
        {
            if (cur_move_seq==null)
            {
                Debug.LogError("current seq does not exist!");
                return;
            }
            cur_move_seq.Kill();
            cur_move_seq = null;
        }

        public void MoveRandom()
        {
            MoveStart(DanceFloorHelper.GetRandomDanceFloorPos());
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
            // Debug.LogWarning($"me {userId} collided with {collision.gameObject.name}");
            if (collision.gameObject.CompareTag("Impacter"))
            {
                var impacter = collision.transform.parent.parent.GetComponent<Iimpacter>();
                impacter.Impact(gameObject);
            }
            
        }

        public void AddForce(Vector3 force)
        {
            var rb = this.GetComponent<Rigidbody>();
            rb.AddForce(force);
        }

        private void OnTriggerEnter(Collider other)
        {
            if (other.gameObject.CompareTag("Ground"))
            {
                fsm.TriggerUnityEvent("Fell");        
            }
        }

        /// <summary>
        /// 从跌倒状态爬起来,由fsm触发
        /// </summary>
        public void ftGetUp()
        {
            void GetUpTween()
            {
                var rigidbody = this.GetComponent<Rigidbody>();
                //disable rigidbody
                rigidbody.isKinematic = true;
                // rigidbody.useGravity = false;
                // rigidbody.detectCollisions = false;
                void Oncomplete()
                {
                    // rigidbody.detectCollisions = true;
                    // rigidbody.useGravity = true;
                    rigidbody.isKinematic = false;
                    fsm.TriggerUnityEvent("Getup");
                }
                //getup tween
                cur_move_seq = DOTween.Sequence();
                var targetPos = transform.position;
                targetPos = DanceFloorHelper.BuildWorldPosition(new Vector2(targetPos.x, targetPos.z));
                // targetPos.y = DanceFloorHelper.GetPivotY();
                cur_move_seq.Append(transform.DOJump(targetPos, 2f, 1, 0.8f).OnComplete(Oncomplete));
                cur_move_seq.Join(transform.DORotateQuaternion(initRot, .5f));
                cur_move_seq.Play();
            }

            TimeMgr.instance.AddTimer(1000, GetUpTween);

        }

        public void MoveLock()
        {
            fsm.TriggerUnityEvent("MoveLock");
        }

        public void MoveUnlock()
        {
            fsm.TriggerUnityEvent("MoveUnlock");
        }
        
        public void ftMoveLock()
        {
            var rb = this.GetComponent<Rigidbody>();
            rb.isKinematic = true;
        }

        public void ftMoveUnlock()
        {
            var rb = this.GetComponent<Rigidbody>();
            rb.isKinematic = false;
        }

        public void SetPivotOffset()
        {
            RectTransform spriteTransform= sprite.transform as RectTransform;
            var offsetY = spriteTransform.rect.height / 2;
            foreach (Transform child in transform)
            {
                child.localPosition += new Vector3(0, offsetY, 0);
            }
            //move colliders
            var colliders = GetComponents<BoxCollider>();
            foreach (var collider in colliders)
            {
                var originCenter = collider.center;
                originCenter.y += offsetY;
                collider.center = originCenter;
            }

        }

        #endregion
        
        
        public void PlayLvUpParticle()
        {
            levelupParticle.Play();
        }

        public void StopParticle()
        {
            if(levelupParticle.isPlaying) levelupParticle.Stop();
        }
        

    }
}
