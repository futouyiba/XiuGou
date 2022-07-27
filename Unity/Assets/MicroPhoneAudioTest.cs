using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;


namespace ET
{
    public class MicroPhoneAudioTest : MonoBehaviour
    {

        const int FREQUENCY = 44100;
        AudioClip mic;
        int lastPos, pos;
        private AudioSource audio;

        private float[] OutputData = new float[128];


        [SerializeField] protected CinemachineImpulseSource impulseSource;

        [SerializeField, Range(0.1f, 100f)] protected float strength = 50f;

        private float CheckMicroPhoneTimer = 0.2f;



        // Start is called before the first frame update
        void Start()
        {
            mic = Microphone.Start(null, true, 10, FREQUENCY);

            audio = GetComponents<AudioSource>()[1];
            audio.clip = AudioClip.Create("MicroPhoneAudio", 10 * FREQUENCY, mic.channels, FREQUENCY, false);
            audio.loop = false;


            impulseSource = GetComponents<CinemachineImpulseSource>()[1];//明天试试用同一个

        }

        // Update is called once per frame
        void FixedUpdate()
        {
            if ((pos = Microphone.GetPosition(null)) > 0)
            {
                if (lastPos > pos) lastPos = 0;

                if (pos - lastPos > 0)
                {
                    // Allocate the space for the sample.
                    float[] sample = new float[(pos - lastPos) * mic.channels];

                    // Get the data from microphone.
                    mic.GetData(sample, lastPos);

                    // Put the data in the audio source.
                    audio = GetComponents<AudioSource>()[1];
                    audio.clip.SetData(sample, lastPos);

                    if (!audio.isPlaying) audio.Play();

                    lastPos = pos;
                }
            }

        }

        void Update()
        {
            CheckMicroPhoneTimer -= Time.deltaTime;
            if (CheckMicroPhoneTimer <= 0)
            {
                GenerateImpulseBySpeakerVolume();
            }
        }

        private void GenerateImpulseBySpeakerVolume()
        {
            GetComponents<AudioSource>()[1].GetSpectrumData(OutputData, 0, FFTWindow.BlackmanHarris);
            float sum = 0f;
            foreach (var i in OutputData)
            {
                sum += i;
            }
            Debug.Log($"MicroPhoneAudioTest {sum}");

            if (sum > 0.002f)
            {
                impulseSource.GenerateImpulse(new Vector3(0, -sum * strength, 0));
            }
        }
    }
}
