using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class StartGameOver : MonoBehaviour {

	public Sprite loadImage;
    public  Text txtVida;

	public int vida; 
	Image[] images;
	Image[] barraVida;
	public GameObject canvasGameOver;
	public GameObject canvasBarraVida;
	// Use this for initialization

	void Start () 
	{
		txtVida.text = "Vida:"; 
		barraVida = canvasBarraVida.GetComponentsInChildren<Image> ();
	}
	
	// Update is called once per frame
	void Update ()
	{		
	}

	void OnTriggerEnter(Collider other) { 

		if((vida-1)>=0)
		barraVida[vida-1].enabled = false;
		vida--;

		if (vida == 0)
		{
			canvasGameOver.SetActive (true);
			images = canvasGameOver.GetComponentsInChildren<Image> ();

			foreach (Image image in images)
			{
				image.sprite = loadImage;
			}	
			SceneManager.LoadScene ("GameOver");
		}
		txtVida.text = "Vida:" + vida;
	}
}
