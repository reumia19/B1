using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovingTest : MonoBehaviour
{
    public float speed;
    private Vector3 vector;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetAxisRaw("Horizontal") != 0 || Input.GetAxisRaw("Vertical") != 0)
        {
            vector.Set(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"), transform.position.z);

            if(vector.x !=0)
            {
                transform.Translate(vector.x * speed, 0, 0);
                Debug.Log("좌우 :" + vector.x);

            }
            else if(vector.y !=0)
            {
                Debug.Log("상하 :" + vector.y);
                transform.Translate(0, vector.y * speed, 0);
            }
        }
    }
}
