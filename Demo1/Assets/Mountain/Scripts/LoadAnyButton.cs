using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class LoadAnyButton : MonoBehaviour {

	public Sprite loadImage;

	Image[] images;
	Button[] buttons; 

	void Update() 
	{
		if (Input.GetKeyDown("space")) 
		{
			images = gameObject.GetComponentsInChildren<Image> ();

			foreach (Image image in images) 
			{
				if(image.tag == "background" )
				image.sprite = loadImage;
			}	
				
			SceneManager.LoadScene("Menu");
		}	
	
	}
		
	void StartMenu(string algo)
	{
			images = gameObject.GetComponentsInChildren<Image> ();



			foreach (Image image in images) 
			{
				if(image.tag == "background" )
				image.sprite = loadImage;
			}	
			SceneManager.LoadScene("Menu");
	}
}
