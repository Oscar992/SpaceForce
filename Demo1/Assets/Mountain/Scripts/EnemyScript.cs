using UnityEngine;
using System.Collections;

public class EnemyScript : MonoBehaviour {

	int HP = 0;
	public AudioSource explosion;
	public int numberHits;

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
	}

	public void Destruir()
	{	
		HP++;
		if (HP == numberHits) 
		{
			var exp = GetComponent<ParticleSystem>();
			exp.Play();
			explosion.Play();	
			Destroy(gameObject,0.8f);
		}
	}
		
	void OnTriggerEnter(Collider other) { 

		var exp = GetComponent<ParticleSystem>();
		exp.Play();
		explosion.Play();	
		Destroy(gameObject,0.8f);

	}

}
