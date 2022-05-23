using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.ServiceModel.Security;
using UnityEngine;
using Random = UnityEngine.Random;


public class ColorMetaData : MonoBehaviour
{
    public class AudioData
    {
        public AudioClip clip;
        public float bpm;
        public float interval;

        public AudioData(AudioClip clip, float bpm)
        {
            this.clip = clip;
            this.bpm = bpm;
            this.interval = 60 / bpm;
        }
    }
    
    [SerializeField] private List<AudioClip> AudioClips;
    [SerializeField] private List<float> bpms;
    
    private bool _isAudioReady = false;

    private Dictionary<string, AudioData> _audioDict;

    private void Awake()
    {
        _audioDict = new Dictionary<string, AudioData>();
        CompileMeta();
    }

    // Start is called before the first frame update
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void CompileMeta()
    {
        
        if (AudioClips.Count != bpms.Count)
        {
            Debug.LogWarning($"counts mismatch {AudioClips.Count} and {bpms.Count}");
        }
        
        for (int i = 0; i < AudioClips.Count; i++)
        {
            if (bpms.Count <= i)
            {
                Debug.LogWarning($"{i} bpm missing ,skipping after musics");
                break;
            }
            var clip = AudioClips[i];
            var bpm = bpms[i];
            var data = new AudioData(clip, bpm);
            _audioDict.Add(clip.name, data);
        }
        _isAudioReady = true;
    }

    public AudioData GetAudio(string name)
    {
        if (!_audioDict.TryGetValue(name, out AudioData data))
        {
            Debug.LogError($"audio named {name} does not exist");
            return null;
        }
        return data;
    }

    public AudioData GetRandom()
    {
        var total = _audioDict.Count;
        var randomed = Random.Range(0, total);
        return _audioDict.ElementAt(randomed).Value;
    }
    
}
