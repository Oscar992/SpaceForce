using UnityEngine;
using System.Collections;

public class Salir : MonoBehaviour {

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
	}

	public void onClick()
	{
		Application.Quit();
	}

	public void salirEvent(string algo)
	{
		Application.Quit();
	}
}
