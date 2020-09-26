using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMManager : MonoBehaviour
{
    static public BGMManager instance;

    public AudioClip[] clips;

    public AudioSource source;

    private WaitForSeconds waitTime = new WaitForSeconds(0.01f);
    #region Singleton

    private void Awake()
    {
        if (instance == null)
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
    #endregion Singleton
    void Start()
    {
        source = GetComponent<AudioSource>();   
    }

    // Update is called once per frame
    public void Play(int _playMusicTrack)
    {
        source.clip = clips[_playMusicTrack];
        source.Play();
    }

    public void Stop()
    {
        source.Stop();
    }

    public void FadeOutMusic()
    {
        StopAllCoroutines();
        StartCoroutine(FadeOutMusicCouroutine());
    }

    IEnumerator FadeOutMusicCouroutine()
    {
        for(float i = 1.0f; i>=0f; i -= 0.02f)
        {
            source.volume = i;
            yield return waitTime;
        }
    }
    public void FadeInMusic()
    {
        StopAllCoroutines();
        StartCoroutine(FadeInMusicCouroutine());
    }

    IEnumerator FadeInMusicCouroutine()
    {
        for (float i = 0f; i <= 1f; i += 0.02f)
        {
            source.volume = i;
            yield return waitTime;
        }
    }
}
