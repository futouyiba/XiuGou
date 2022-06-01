using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BeatBlockMgr : MonoBehaviour
{
    [SerializeField] private Grid grid;

    [SerializeField] private GameObject blockPrefab;

    protected float[] spectrumData;
    protected Action dlg_channels;


    public static BeatBlockMgr instance;

    private void Awake()
    {
        if (instance != null)
        {
            Debug.LogError("beat block already exists");
            Destroy(this.gameObject);
            return;
        }

        instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        // CreateBeatBlocks();
        spectrumData = new float[1024];
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void FixedUpdate()
    {
        AudioListener.GetSpectrumData(spectrumData, 0, FFTWindow.BlackmanHarris);
        dlg_channels?.Invoke();
        
    }

    private void AddListener(Action dlg)
    {
        if (dlg == null)
        {
            Debug.LogError($"to add dlg is null");
            return;
        }
        dlg_channels += dlg;
    }

    public float GetChannel(int channel)
    {
        if(channel<0 || channel>= spectrumData.Length)
        {
            return 0;
        }
        return spectrumData[channel];
    }

    public void CreateBeatBlocks()
    {
        for (int i = -16; i < 16; i++)
        {
            for (int j = -16; j < 16; j++)
            {
                var cellPos = grid.CellToWorld(new Vector3Int(i, 0, j));
                var blockCreated = Instantiate(blockPrefab,this.transform);
                blockCreated.transform.position = cellPos;
                var block = blockCreated.GetComponent<BeatBlock>();
                block.Init((i + 16) * 32 + j + 16);
                AddListener(block.UpdateLength);

            }
        }
    }
}
