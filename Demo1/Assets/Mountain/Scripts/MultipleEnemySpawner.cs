using UnityEngine;
using System.Collections;

public class MultipleEnemySpawner : MonoBehaviour {

	float timer;
	public int timerSpawner;
	public int increaseEnemies;

	// Use this for initialization
	void Start () {
	
		timer = 0.0f;
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if (timer > timerSpawner) 
		{
			IncrementarSpawners();
			timer = 0.0f;
		}
	}

	void IncrementarSpawners(){
		GameObject Nuevo = transform.GetChild(0).gameObject;
		GameObject Instanciado = Instantiate (Nuevo, Nuevo.transform.position, Quaternion.identity) as GameObject;
		Instanciado.transform.SetParent (this.transform);
	}
}
