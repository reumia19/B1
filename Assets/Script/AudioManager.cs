﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class Sound
{
    public string name;

    public AudioClip clip;
    private AudioSource source;

    public float Volume;
    public bool loop;

    public void SetSource(AudioSource _source)
    {
        source = _source;
        source.clip = clip;
        source.loop = loop;
    }

    public void Play()
    {
        source.Play();
    }

    public void Stop()
    {
        source.Stop();
    }
    public void SetLoop()
    {
        source.loop= true;
    }
    public void SetLoopCancel()
    {
        source.loop = false;
    }
}
public class AudioManager : MonoBehaviour
{
    static public AudioManager instance;

    [SerializeField]
    public Sound[] sounds;

    

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
        for(int i =0; i < sounds.Length; i ++)
        {
            GameObject soundObject = new GameObject("사운드 파일 이름 : "+i+"=" +sounds[i].name);
            sounds[i].SetSource(soundObject.AddComponent<AudioSource>());
            soundObject.transform.SetParent(this.transform);
        }
    }

    public void Play(string _name)
    {
        for(int i = 0; i < sounds.Length; i++)
        {
            if(sounds[i].name == _name)
            {
                sounds[i].Play();
            }
        }
    }
    public void Stop(string _name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == _name)
            {
                sounds[i].Stop();
            }
        }
    }

    public void SetLoop(string _name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == _name)
            {
                sounds[i].SetLoop();
            }
        }
    }
    public void SetLoopCancel(string _name)
    {
        for (int i = 0; i < sounds.Length; i++)
        {
            if (sounds[i].name == _name)
            {
                sounds[i].SetLoopCancel();
            }
        }
    }
    // Update is called once per frame
    void Update()
    {
       
    }
}
