using UnityEngine;
using System.Collections;

public class MoveSpace : MonoBehaviour {

    public GameObject gameObject;

	float playerSpeed = 1; 

    int moveDirection = 0; 
    // Use this for initialization
    void Start () 
    {
        
    }
    
    // Update is called once per frame
    void Update () 
    {
        SetTransformX(transform.position.x + playerSpeed*moveDirection);
		VerificarLimite ();
        return;

        if (Input.GetKey("a"))
        {
            moveSpaceShip (Vector3.left.x,Vector3.left.y,Vector3.left.z);
            //SetTransformX((transform.position.x) - playerSpeed);
        }

        if (Input.GetKey("d"))
        {
            moveSpaceShip (Vector3.right.x,Vector3.right.y,Vector3.right.z);
            //SetTransformX((transform.position.x) + playerSpeed);
        }

        if (Input.GetKey("w"))
        {
            moveSpaceShip (Vector3.up.x,Vector3.up.y,Vector3.up.z);
            //SetTransformX((transform.position.x) + playerSpeed);
        }

        if (Input.GetKey("s"))
        {
            moveSpaceShip (Vector3.down.x,Vector3.down.y,Vector3.down.z);
            //SetTransformX((transform.position.x) + playerSpeed);
        }

    }

    void SetTransformX(float n)
    { 
        //Debug.Log ("x: "+n);
        gameObject.transform.position = new Vector3(n, transform.position.y, transform.position.z);
    }

    void SetTransformY(float n)
    {
        //Debug.Log ("z: "+n);
        gameObject.transform.position = new Vector3(transform.position.x, n, transform.position.z);
    }


    void SetTransformZ(float n)
    {
        //Debug.Log ("z: "+n);
        gameObject.transform.position = new Vector3(transform.position.x, transform.position.y, n);
    }



    public void moveSpaceShip (float x,float y, float z )
    {
        Debug.Log (x + " " + y + " " + z);
        //if (x < 0) {
        //  x = -1;
        //} 
        //else if (x > 0) {
        //  x = 1;
        //}

        SetTransformX(transform.position.x + playerSpeed*x);

        if (z < 0) {
            z = -1;
        } 
        else if (z > 0) {
            z = 1;
        }

        SetTransformZ(transform.position.z + playerSpeed*z);

        if (y < 0) {
            y = -1;
        } 
        else if (y > 0) {
            y = 1;
        }

        SetTransformY(transform.position.y + playerSpeed*y);

        //gameObject.transform.position = new Vector3(x, y, z);
    }

    public void moveSpaceDirection (string sMove )
    {
        moveDirection = int.Parse(sMove);
    }

	public void VerificarLimite()
	{

		if (gameObject.transform.position.x <= 37.9) {
			SetTransformX (37.9f);
		} else {
			if (gameObject.transform.position.x >= 75.9) {
				SetTransformX (75.9f);
			}
		}
	}
		

}
