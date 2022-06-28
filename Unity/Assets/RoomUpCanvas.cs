using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
    public class RoomUpCanvas : MonoBehaviour
    {
        public GameObject Shuoming;
        public GameObject CurrentLevel;
        public GameObject CurrentPopulation;
        public GameObject GoingOn;

        private Animator _shuoMingAnimator;
        private Animator _currentLevelAnimator;
        private Animator _currentPopulationAnimator;
        private Animator _goingOnAnimator;

        private Text populationText;
        private Text levelText;
        // private Text initFloorText;

        // [SerializeField] private RoomUpgradeMgr _roomUpgradeMgr;

        private const string need = "要进化舞池您还需要:{0}人";
        
        // Start is called before the first frame update
        void Start()
        {
            _shuoMingAnimator = Shuoming.GetComponent<Animator>();
            _currentLevelAnimator = CurrentLevel.GetComponent<Animator>();
            _currentPopulationAnimator = CurrentPopulation.GetComponent<Animator>();
            _goingOnAnimator = GoingOn.GetComponent<Animator>();

            populationText = CurrentPopulation.transform.GetChild(1).GetComponent<Text>();
            levelText = CurrentLevel.transform.GetChild(1).GetComponent<Text>();
            // initFloorText = Shuoming.transform.GetChild(1).GetComponent<Text>();
            
            CharMgr.instance.AddCharAmountUpdateDlg(UpdateCharAmount);

            // _roomUpgradeMgr.levelUp += i =>
            // {
            //     _currentLevelAnimator.SetTrigger("go");
            //     levelText.text = i.ToString();
            //     _goingOnAnimator.SetTrigger("go");
            // };
            
            
        }

        public void Add1Guy()
        {
            CharMgr.instance.CreateTestGuysByNum(1);
        }

        protected void UpdateCharAmount(int amount)
        {
            populationText.text = amount.ToString();
            UpdateTillNextAmount(amount);
        }

        protected void UpdateTillNextAmount(int currentAmount)
        {
            levelText.text = RoomUpgradeMgr.instance.AmountTillNextLv().ToString();
        }
    }
}
