using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ShotBehavior : MonoBehaviour {


	//public Text txtScore;
//	double  numberScore;
	// Use this for initialization
	void Start () {
	//	numberScore = 0;
	//	txtScore.text = "Score:" + numberScore;
	}
	
	// Update is called once per frame
	void Update () {
		transform.position += transform.forward * Time.deltaTime * 1000f;

		//txtScore.text = "Score:" + numberScore;
	}


	void OnTriggerEnter(Collider other) 
	{ 
	
		if (other.tag == "Target") 
		{

		
			Score.numberScore += 1000;
			//Debug.Log ("entro target " + numberScore); 
		}
			
		if (other.tag == "Target2")
		{

			Score.numberScore += 2000;
			//Debug.Log ("entro target2  " + numberScore); 
		}

		if (other.tag == "Target3")
		{
			Score.numberScore += 3000;
			//Debug.Log ("entro target3 " + numberScore); 
		}


	//	txtScore.text = "Score:" + numberScore;

			GameObject Enemigo = other.gameObject;
			EnemyScript ScriptEnemigo = Enemigo.GetComponent ("EnemyScript") as EnemyScript;
			ScriptEnemigo.Destruir ();
			Destroy (gameObject);	
		
	}

}
