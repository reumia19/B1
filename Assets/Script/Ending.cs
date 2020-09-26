using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ending : MonoBehaviour
{
    public GameObject go;
    private FadeManager theFade;
    private AudioManager theAudio;
    private bool flag;
    private Ending instance;
    private DatabaseManager theDB;

    public string sound;
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

    private void Start()
    {
        theDB = FindObjectOfType<DatabaseManager>();
        theFade = FindObjectOfType<FadeManager>();
        theAudio = FindObjectOfType<AudioManager>();
    }


    private void Update()
    {
        if (!flag&& theDB.Find("End"))
        {
            flag = true;
            StartCoroutine(EndingCoroutine());

        }
    }
  



    IEnumerator EndingCoroutine()
    {

        theAudio.Play(sound);
        theFade.FadeOut(1f);
        yield return new WaitUntil(()=> theFade.isFade == true);
        go.SetActive(true);
    }

    public void SetNotActive()
    {
        go.SetActive(false);
        flag = false;
    }
}
