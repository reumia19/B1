using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DatabaseManager : MonoBehaviour
{
    static public DatabaseManager instance;
    public string[] var_name;
    public float[] var;

    public string[] switch_name;
    public bool[] switches;

    public bool state;
    private void Awake()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
        }
        else
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
        }
    }
    private void Start()
    {
    }
    public bool Find(string _name)
    {
        state = false;

        for (int i = 0; i < this.switch_name.Length; i++)
        {
            if (this.switch_name[i] == _name)
            {
                state = switches[i];
                print(_name + " : " + state);
            }
        }
        return state;
        // Update is called once per frame
    }

    public void Change(string _name)
    {
        for (int i = 0; i < this.switch_name.Length; i++)
        {
            if (this.switch_name[i] == _name)
            {
                switches[i] = true;
                print(_name + " = " + state +"changed");
            }
        }
    }
}
