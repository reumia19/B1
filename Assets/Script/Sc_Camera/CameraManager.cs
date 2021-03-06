﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    static public CameraManager instance;
	public GameObject target; // 카메라가 따라갈 대상
	public float moveSpeed;
	private Vector3 targetPosition; // 대상의 현재 위치값

    public BoxCollider2D bound;

    private Vector3 minBound;
    private Vector3 maxBound;

    private float halfWidth;
    private float halfHeight;
    //카메라의 반 너비, 반높이 값을 지님

    private Camera theCamera;
    //자신의 반높이를 알기위해

    // Start is called before the first frame update
    private void Awake()
    {
        if(instance !=null){
            Destroy(this.gameObject);
        }else
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
        }
    }

    void Start()
    {
        theCamera = GetComponent<Camera>();
        minBound = bound.bounds.min;
        maxBound = bound.bounds.max;
        halfHeight = theCamera.orthographicSize;
        halfWidth = halfHeight*Screen.width/Screen.height;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(target.gameObject !=null)
        {
        	targetPosition.Set(target.transform.position.x, target.transform.position.y, this.transform.position.z);

        	this.transform.position = Vector3.Lerp(this.transform.position, targetPosition, moveSpeed * Time.fixedDeltaTime); // 1초에 moveSpeed만큼 이동

            float clampedX = Mathf.Clamp(this.transform.position.x, minBound.x + halfWidth, maxBound.x-halfWidth);
            float clampedY = Mathf.Clamp(this.transform.position.y, minBound.y + halfHeight, maxBound.y-halfHeight);

            this.transform.position = new Vector3(clampedX, clampedY, this.transform.position.z);
        }
    }

    public void SetBound(BoxCollider2D newBound)
    {
        bound = newBound;
        minBound = bound.bounds.min;
        maxBound = bound.bounds.max;

    }
}

