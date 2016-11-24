using UnityEngine;
using System.Collections;

public class MoveCursorUI : MonoBehaviour {
  float playerSpeed = 3f; 

	// Use this for initialization
	void Start () {
	
	}

	void Update () {

		if (Input.GetKey("left") )
		{

			SetTransformX((GetComponent<RectTransform>().localPosition.x) - playerSpeed);
		}

		if (Input.GetKey("right"))
		{
			SetTransformX ((GetComponent<RectTransform>().localPosition.x) + playerSpeed);
		}

		if(Input.GetKey("down"))
		{
			SetTransformY((GetComponent<RectTransform>().localPosition.y) - playerSpeed);
		}

		if (Input.GetKey("up"))
		{
			SetTransformY((GetComponent<RectTransform>().localPosition.y) + playerSpeed);
		}


	//	Debug.Log("X-->"+GetComponent<RectTransform>().localPosition.x);
	//	Debug.Log("Y-->"+GetComponent<RectTransform>().localPosition.y);

	}

	void SetTransformX(float n)
	{
		gameObject.GetComponent<RectTransform>().localPosition = new Vector3(n, GetComponent<RectTransform>().localPosition.y, 0);
	}

	void SetTransformY(float n)
	{
		gameObject.GetComponent<RectTransform>().localPosition = new Vector3(GetComponent<RectTransform>().localPosition.x, n, 0);
	}


	public void moveCursorUI(string coordenadas)
	{

		char delimiter = ' ';
		string[] numeros = coordenadas.Split(delimiter);

		float x = float.Parse(numeros [0]);
		float y = float.Parse(numeros [1]);

		gameObject.GetComponent<RectTransform>().localPosition  = new Vector3(GetComponent<RectTransform>().localPosition.x + x, GetComponent<RectTransform>().localPosition.y +y, 0);

	}

}
