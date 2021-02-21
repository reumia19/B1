using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovingObject : MonoBehaviour {

    private bool notCoroutine =false;

    public Queue<string> queue;
    public string characterName;
    public float speed;
    public int walkCount;
    public float walkDistance; // 한번 키 입력이 들어왔을 때 움직이는 거리
    protected int currentWalkCount;

    protected Vector3 vector;

    public BoxCollider2D boxCollider;
    public LayerMask noPassingLayer; //통과 불가능한 레이어 설정

    public  Animator animator;
    public bool stop = true;

    public void Move(string _dir, int _frequency = 5)
    {
        queue.Enqueue(_dir);
        if(!notCoroutine){
            notCoroutine = true;
            StartCoroutine(MoveCoroutine(_dir,_frequency));
        }

    }
  
    IEnumerator MoveCoroutine(string _dir, int _frequency)
    {
        while(queue.Count !=0)
        {
            if (stop)
            {
                yield return new WaitUntil(()=> !stop);
            }
            string direction =queue.Dequeue();
            vector.Set(0,0,vector.z);

            switch(direction)
            {
                case "UP":
                vector.y = 1f;
                break;
                case "DOWN":
                vector.y = -1f;
                break;
                case "RIGHT":
                vector.x = 1f;
                break;
                case "LEFT":
                vector.x = -1f;
                break;

            }

            animator.SetFloat("DirX", vector.x);
            animator.SetFloat("DirY",vector.y);
            animator.SetBool("Walking",true);

            //유니티클리닉 받은 거 시작
            /*Vector3 startPos = transform.position;
            Vector3 endPos = transform.position + vector * walkDistance;
            float time = Vector3.Distance(startPos, endPos) / speed;
            float startTime = Time.time;
            float endTime = startTime + time;
            float curTime = Time.time;

            while (true)
            {
                transform.position = Vector3.Lerp(startPos, endPos, (curTime - startTime) / time);
                if (curTime >= endTime)
                {
                    break;
                }

                curTime = Time.time;
            }*/

            //유니티클리닉 끗
            // Time.time = 게임플레이 기준으로 시간 값을 받아올 때 사용
            // deltatime =  프레임 단위로 시간 받아?


            
            while(currentWalkCount < walkCount)
            {
                transform.Translate(vector.x *speed,vector.y * speed,0);
                currentWalkCount++;
                yield return new WaitForSeconds(0.05f);
            }//문제점 : 일정하게 움직이길 원한다면 timedeltatime을 활용
            

            currentWalkCount = 0;

            if(_frequency != 5 )
            {
                animator.SetBool("Walking",false);
            }
        }
        notCoroutine = false;
        animator.SetBool("Walking",false);
    }
    //충돌하면 멈추게 하는 함수
    protected bool CheckCollision()
    {
        
        Vector2 start = transform.position; //캐릭터 위치값
        Vector2 end = start + new Vector2(vector.x*speed, vector.y*speed);
        //boxCollider.enabled = false;   클리닉에서 없어도 되게 했음
        RaycastHit2D hitWall = Physics2D.Linecast(start,end,noPassingLayer);
        //boxCollider.enabled = true; 클리닉에서 없어도 되게 했음

        if (hitWall.transform != null)
        {
            return true;
        }
        return false;

    }
}
