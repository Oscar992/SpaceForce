using UnityEngine;
using System.Collections;

public class MoveCursor : MonoBehaviour {
	float playerSpeed = 0.5f; 
	// Use this for initialization
	void Start () {
	
	}
	
	//Update is called once per frame
	void Update () {
		
		if (Input.GetKey("left") )
		{
			if(transform.position.x - playerSpeed >-40 && transform.position.x - playerSpeed<150)
			{
				SetTransformX((transform.position.x) - playerSpeed);
			}
		}

		if (Input.GetKey("right"))
		{
			if (transform.position.x + playerSpeed> -40 && transform.position.x+ playerSpeed < 150)
			{
				SetTransformX ((transform.position.x) + playerSpeed);
			}
		}
			
		if(Input.GetKey("down"))
		{
			if(transform.position.y- playerSpeed>20 && transform.position.y- playerSpeed<120)
			{
				SetTransformY((transform.position.y) - playerSpeed);
			}

		}

		if (Input.GetKey("up"))
		{
			if(transform.position.y+ playerSpeed>20 && transform.position.y+ playerSpeed<120)
			{
				SetTransformY((transform.position.y) + playerSpeed);
			}
		}

	}

	void SetTransformX(float n)
	{
		gameObject.transform.position = new Vector3(n, transform.position.y, transform.position.z);
	}

	void SetTransformY(float n)
	{
		gameObject.transform.position = new Vector3(transform.position.x, n, transform.position.z);
	}

	public void moveCursor(string coordenadas)
	{

		char delimiter = ' ';
		string[] numeros = coordenadas.Split(delimiter);
	
		float x = float.Parse(numeros [0]);
		float y = float.Parse(numeros [1]);

		gameObject.transform.position = new Vector3(transform.position.x + x, transform.position.y +y, transform.position.z);

	}


}
