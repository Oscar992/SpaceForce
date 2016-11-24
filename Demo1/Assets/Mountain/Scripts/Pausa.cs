using UnityEngine;
using System.Collections;

public class Pausa : MonoBehaviour {

	public GameObject pantallaPausa;
	bool mostrar;
	// Use this for initialization
	void Start () {
		mostrar = false;
	}
	
	// Update is called once per frame
	void Update () {
	
		if (Input.GetKeyDown (KeyCode.P)) {
			Time.timeScale = 1.0f-Time.timeScale;
			Time.fixedDeltaTime = 0.02f * Time.timeScale;
			mostrar = !mostrar;
		}
			
		pantallaPausa.SetActive (mostrar);

	}

	void pausa (string algo)
	{
		Time.timeScale = 1.0f-Time.timeScale;
		Time.fixedDeltaTime = 0.02f * Time.timeScale;
		mostrar = !mostrar;

		pantallaPausa.SetActive (mostrar);

	}

}
