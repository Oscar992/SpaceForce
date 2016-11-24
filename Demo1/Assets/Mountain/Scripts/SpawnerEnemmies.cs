using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpawnerEnemmies : MonoBehaviour {

	GameObject gameObject;
	Vector3 spawn_position;
	float timer = 0.0f;

	public GameObject enemy1; 
	public GameObject enemy2; 
	public GameObject enemy3;

	GameObject[] enemies = new  GameObject[3];

	// Use this for initialization
	void Start () {	
		spawn_position = new Vector3 (transform.position.x,transform.position.y,0);
		enemies[0] = Instantiate (enemy1, spawn_position, Quaternion.identity) as GameObject;
		enemies[1] = Instantiate (enemy2, spawn_position, Quaternion.identity) as GameObject;
		enemies[2] = Instantiate (enemy3, spawn_position, Quaternion.identity) as GameObject;
	}
	
	//Update is called once per frame
	void Update () 
	{	
		timer += Time.deltaTime;
		if (timer > 6) 
		{
			PosicionateEnRango();
			spawn_object ();
			timer = 0.0f;
		}
	}

	void PosicionateEnRango(){
		float RanX = Random.Range (-30.4f,50.51f);
		float RanY = Random.Range (1f,65.69f);
		transform.localPosition  = new Vector3(RanX, RanY, transform.localPosition.z);
	}

	void spawn_object ()
	{
		spawn_position = new Vector3 (transform.position.x,transform.position.y,transform.position.z);

		int a = Random.Range (0,3);
	    //GameObject temp_spawn_object = Instantiate (gameObject, spawn_position, Quaternion.identity) as GameObject;
		if (enemies [a] != null) {
			enemies[a].transform.position = spawn_position;
		}
		//Destroy (temp_spawn_object, 10f);
	
	}

}
