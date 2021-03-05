using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MovingObject
{

    static public PlayerManager instance;

    public string currentMapName; // transferMap 스크립트의 transferMapName 값을 넣어줄 변수
    public string beforeMapName;
    public string walkSound_1;
    public NDialogueManager nDialogueManager;
    public SpriteRenderer render;
    private AudioManager theAudio;

    public bool notMove = false;

    private bool canMove = true;

    //플레이어가 바라보고 있는 방향 값 얻기
    float h;
    float v;
    Vector3 dirVec;
    Rigidbody2D rigid;
    GameObject scanObject;

    // Start is called before the first frame update
    void Start()
    {
        queue = new Queue<string>();

        if (instance == null)
        {
            DontDestroyOnLoad(this.gameObject);
            rigid = GetComponent<Rigidbody2D>();
            animator = GetComponent<Animator>();
            boxCollider = GetComponent<BoxCollider2D>();
            render = GetComponent<SpriteRenderer>();
            theAudio = FindObjectOfType<AudioManager>();
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
       // Debug.Log(this.gameObject.name);
    }

    IEnumerator MoveCoroutine()
    {

        while (Input.GetAxisRaw("Vertical") != 0 || Input.GetAxisRaw("Horizontal") != 0 && !notMove)
        {
            vector.Set(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical"), transform.position.z);

            if (vector.x != 0)
            {
                vector.y = 0;
            }

            animator.SetFloat("DirX", vector.x);
            animator.SetFloat("DirY", vector.y);

            //충돌하면 멈추게 하는 코드
            bool checkCollisionFlag = base.CheckCollision();
            if (checkCollisionFlag)
                break;
            if (nDialogueManager.isAction)
                break;

            animator.SetBool("Walking", true);

            // theAudio.Play(walkSound_1);

            while (currentWalkCount < walkCount)
            {

                if (vector.x != 0)
                {
                    transform.Translate(vector.x * speed, 0, 0);
                }
                else if (vector.y != 0)
                {
                    transform.Translate(0, vector.y * speed, 0, 0);
                }
                currentWalkCount++;
                yield return new WaitForSeconds(0.1f);
                checkCollisionFlag = base.CheckCollision();
                if (checkCollisionFlag)
                    break;

            }

            currentWalkCount = 0;
        }
        animator.SetBool("Walking", false);
        canMove = true;
    }
    // Update is called once per frame
    void Update()
    {
        RenderCheck();
        if (canMove && !notMove)
        {
            //Move Value
            h = nDialogueManager.isAction ? 0 : Input.GetAxisRaw("Horizontal");
            v = nDialogueManager.isAction ? 0 : Input.GetAxisRaw("Vertical");

            //Check Button Down&Up
            bool hDown = nDialogueManager.isAction ? false : Input.GetButtonDown("Horizontal");
            bool vDown = nDialogueManager.isAction ? false : Input.GetButtonDown("Vertical");
            bool hUp = nDialogueManager.isAction ? false : Input.GetButtonUp("Horizontal");
            bool vUp = nDialogueManager.isAction ? false : Input.GetButtonUp("Vertical");

            //Direction

            if (animator.GetFloat("DirY") == 1) // 버티컬 버튼이 눌렸고, 값이 양수이다.(UP)
            {
                dirVec = Vector3.up;
            }
            else if (animator.GetFloat("DirY") == -1)// 버티컬 버튼이 눌렸고, 값이 음수이다.(DOWN)
            {
                dirVec = Vector3.down;
            }
            else if (animator.GetFloat("DirX") == 1)// 호라이즌 버튼이 눌렸고, 값이 양수이다.(RIGHT)
            {
                dirVec = Vector3.right;
            }
            else if (animator.GetFloat("DirX") == -1)// 호라이즌 버튼이 눌렸고, 값이 음수이다.(LEFT)
            {
                dirVec = Vector3.left;
            }

            //Ray 방향과 앞의 사물을 인지하기 위해 사용한다. 
            Debug.DrawRay(rigid.position, dirVec * 0.7f, new Color(0, 1, 0));
            RaycastHit2D rayHit = Physics2D.Raycast(rigid.position, dirVec, 0.7f, LayerMask.GetMask("Object"));


            //콜라이드 값이 null 이 아니라면 실행한다. 
            if (rayHit.collider != null)
            {
                scanObject = rayHit.collider.gameObject;
            }
            else
                scanObject = null;

            //Scan Object
            if (Input.GetKeyDown(KeyCode.Z) && scanObject != null)
            {
                nDialogueManager.Action(scanObject);
            }

            //걷기 시작
            if (h != 0 || v != 0)
            {
                canMove = false;
                StartCoroutine(MoveCoroutine());
            }
        }

        //오브젝트 렌더 순서 변경하는 스크립트
        void RenderCheck()
        {
            Debug.DrawRay(rigid.position,Vector3.up, new Color(1, 0, 0)) ;
            RaycastHit2D findTopObj = Physics2D.Raycast(rigid.position, Vector3.up, 1, LayerMask.GetMask("Object"));

            if (findTopObj.collider != null)
            {
                render.sortingOrder = 7;
            }else
                render.sortingOrder = 5;

        }
    }
}