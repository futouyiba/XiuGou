using System.Collections;
using System.Collections.Generic;
using System.Linq;
using ColorGame;
using TMPro;
using UnityEngine;

public class ScorePanel : MonoBehaviour
{
    [SerializeField] private GameObject scoreItemPrefab;
    [SerializeField] private RectTransform scorePanelTransform;


    private Dictionary<int, GameObject> scoreItemDict;
    // Start is called before the first frame update
    void Start()
    {
        scoreItemDict = new Dictionary<int, GameObject>();
        ScoreMgr.Instance.AddTickDlg(()=>UpdateUI(ScoreMgr.Instance.ScoreList()));
        ScoreMgr.Instance.AddClearDlg(ClearPanel);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void UpdateUI(IEnumerable<KeyValuePair<int, float>> info)
    {
        var keyValuePairs = info as KeyValuePair<int, float>[] ?? info.ToArray();
        for (int i = 0; i < keyValuePairs.Count(); i++)
        {
            if (!scoreItemDict.ContainsKey(keyValuePairs.ElementAt(i).Key))
            {
                CreateScoreItem(keyValuePairs.ElementAt(i).Key);
                UpdateScoreItem(keyValuePairs.ElementAt(i).Key, keyValuePairs.ElementAt(i).Value, i);
                continue;
            }

            UpdateScoreItem(keyValuePairs.ElementAt(i).Key, keyValuePairs.ElementAt(i).Value, i);
        }
    }
 

    void CreateScoreItem(int teamId)
    {
        var itemCreated = Instantiate(scoreItemPrefab, scorePanelTransform);
        scoreItemDict.Add(teamId, itemCreated);
    }

    void UpdateScoreItem(int teamId, float score, int siblingId)
    {
        var res = scoreItemDict.TryGetValue(teamId, out GameObject item);
        if (!res)
        {
            Debug.LogError($"{teamId} item does not exist");
            return;
        }
        var tmp = item.GetComponent<TextMeshProUGUI>();
        var text = $"Team{teamId}: {score}";
        tmp.SetText(text);
        tmp.transform.SetSiblingIndex(siblingId);
    }

    void ClearPanel()
    {
        foreach (Transform child in transform)
        {
            Destroy(child.gameObject);
        }
        scoreItemDict.Clear();
    }
    
}
