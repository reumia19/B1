using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Title : MonoBehaviour
{
    public GameObject GO;
    private bool flag;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
     void Update()
    {
        if (!flag && Input.GetKey(KeyCode.Z)|| Input.GetKey(KeyCode.DownArrow) ||
            Input.GetKey(KeyCode.LeftArrow)|| Input.GetKey(KeyCode.RightArrow) ||
            Input.GetKey(KeyCode.UpArrow) )
        {
            GO.SetActive(true);
        }
    }
}
