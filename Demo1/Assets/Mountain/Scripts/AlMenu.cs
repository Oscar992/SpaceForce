using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;
public class AlMenu : MonoBehaviour {

	public Sprite loadSprite;
	Image[] images;
	Button[] buttons;
	bool entro;
	// Use this for initialization
	void Start () {

		entro = false;
		images = gameObject.GetComponentsInChildren<Image> ();
		buttons = gameObject.GetComponentsInChildren<Button> ();
	}

	// Update is called once per frame
	void Update () {


		foreach (Button button in buttons) 
		{   

			if( (images[2].GetComponent<RectTransform>().localPosition.x  >= button.GetComponent<RectTransform>().localPosition.x-80) &&
				(images[2].GetComponent<RectTransform>().localPosition.x  <= (button.GetComponent<RectTransform>().localPosition.x+80)) &&
				(images[2].GetComponent<RectTransform>().localPosition.y  <= button.GetComponent<RectTransform>().localPosition.y+30) &&
				(images[2].GetComponent<RectTransform>().localPosition.y  >= (button.GetComponent<RectTransform>().localPosition.y-20))
			)
			{

				if (Input.GetKeyDown (KeyCode.A) && button == buttons[0] ) {
					menu("algo");
				}
			}	
		}	
	}


	public void menu(string algo)
	{
		Button button = buttons [0];
		if ((images [2].GetComponent<RectTransform> ().localPosition.x >= button.GetComponent<RectTransform> ().localPosition.x - 80) &&
		   (images [2].GetComponent<RectTransform> ().localPosition.x <= (button.GetComponent<RectTransform> ().localPosition.x + 80)) &&
		   (images [2].GetComponent<RectTransform> ().localPosition.y <= button.GetComponent<RectTransform> ().localPosition.y + 30) &&
		   (images [2].GetComponent<RectTransform> ().localPosition.y >= (button.GetComponent<RectTransform> ().localPosition.y - 20))) {
			foreach (Image image in images) 
			{
				image.sprite = loadSprite;
			}	
			SceneManager.LoadScene("Menu");
		}

	}
}
