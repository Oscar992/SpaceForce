using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class Score : MonoBehaviour {



	public Text txtScore;

	public static double numberScore;
	// Use this for initialization
	void Start () {
		txtScore.text = "Score: " + 0;
	}
	
	// Update is called once per frame
	void Update () {
		txtScore.text = "Score: " + numberScore;
	}
	/*
	public void actualizarScore(string enemigo)
	{
		if (enemigo== "Target") 
		{

			numberScore += 1000;
		//	Debug.Log ("entro target " + numberScore); 
		}
			
		if (enemigo == "Target2")
		{
			numberScore += 2000;
			//Debug.Log ("entro target2  " + numberScore); 
		}

		if (enemigo == "Target3")
		{
			numberScore += 3000;
		//	Debug.Log ("entro target3 " + numberScore); 
		}

	

	}
*/

}
