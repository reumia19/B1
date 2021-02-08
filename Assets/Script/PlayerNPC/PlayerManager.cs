using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MovingObject
{

    static public PlayerManager instance;
    public string currentMapName; // transferMap 스크립트의 transferMapName 값을 넣어줄 변수
    public string beforeMapName;

    public string walkSound_1;
 
    private AudioManager theAudio;

    public bool notMove = false;




    private bool canMove = true;


    // Start is called before the first frame update
    void Start()
    {
        queue = new Queue<string>();

        if(instance ==null)
        {
            DontDestroyOnLoad(this.gameObject);
            animator = GetComponent<Animator>();
            boxCollider = GetComponent<BoxCollider2D>();
            theAudio = FindObjectOfType<AudioManager>();
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }

    }

    IEnumerator MoveCoroutine()
    {

        while (Input.GetAxisRaw("Vertical") != 0 || Input.GetAxisRaw("Horizontal") != 0 && !notMove)
        {
            vector.Set(Input.GetAxisRaw("Horizontal"),Input.GetAxisRaw("Vertical"),transform.position.z);

            if(vector.x != 0){
                vector.y = 0;
            }

            animator.SetFloat("DirX", vector.x);
            animator.SetFloat("DirY",vector.y);

            //충돌하면 멈추게 하는 코드
        bool checkCollisionFlag = base.CheckCollision();
           if(checkCollisionFlag)
                break;

        animator.SetBool("Walking",true);

            // theAudio.Play(walkSound_1);

            while (currentWalkCount <walkCount){

            if(vector.x !=0){
                transform.Translate(vector.x *speed,0,0);
            }
            else if(vector.y !=0){
                transform.Translate(0, vector.y *speed,0,0);
            }
            currentWalkCount++;
            yield return new WaitForSeconds(0.1f);
                checkCollisionFlag = base.CheckCollision();
                if (checkCollisionFlag)
                    break;

            }

        currentWalkCount =0;
    }
    animator.SetBool("Walking",false);
    canMove = true;

}
    // Update is called once per frame
void Update()
{

    if(canMove && !notMove)
    {


        if(Input.GetAxisRaw("Horizontal")!=0 || Input.GetAxisRaw("Vertical")!=0)
        {
            canMove = false;
            StartCoroutine(MoveCoroutine());
        }
    }
}
}
