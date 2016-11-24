using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameOver : MonoBehaviour {

	public Sprite loadSprite;
	Image[] images;
	Button[] buttons;
	bool cargando;
	// Use this for initialization
	void Start () {

		cargando = false;
		images = gameObject.GetComponentsInChildren<Image> ();
		buttons = gameObject.GetComponentsInChildren<Button> ();
	}

	// Update is called once per frame
	void Update () {


		foreach (Button button in buttons) 
		{   

			if( (images[3].GetComponent<RectTransform>().localPosition.x  >= button.GetComponent<RectTransform>().localPosition.x-80) &&
				(images[3].GetComponent<RectTransform>().localPosition.x  <= (button.GetComponent<RectTransform>().localPosition.x+80)) &&
				(images[3].GetComponent<RectTransform>().localPosition.y  <= button.GetComponent<RectTransform>().localPosition.y+30) &&
				(images[3].GetComponent<RectTransform>().localPosition.y  >= (button.GetComponent<RectTransform>().localPosition.y-20))
			)
			{

				if (Input.GetKeyDown (KeyCode.A) && button == buttons[1] ) {
					iniciarJuego ( "algo");
				}

				if (Input.GetKeyDown (KeyCode.A) && button == buttons[0] ) {
					menu("algo");
				}

			}

		}	
	}

	void OnGUI()
	{
		GUIStyle style = new GUIStyle ();
		style.font = (Font)Resources.Load ("Classic Robot Italic", typeof(Font));
		style.fontSize = 40;
		style.normal.textColor = Color.yellow;
		if (cargando)
			GUI.Label (new Rect (315, 500, 100, 20), "Cargando...", style);

	}


	public void iniciarJuego(string algo)
	{
		Button button = buttons [1];//iniciar Juego
		if ((images [3].GetComponent<RectTransform> ().localPosition.x >= button.GetComponent<RectTransform> ().localPosition.x - 80) &&
		    (images [3].GetComponent<RectTransform> ().localPosition.x <= (button.GetComponent<RectTransform> ().localPosition.x + 80)) &&
		    (images [3].GetComponent<RectTransform> ().localPosition.y <= button.GetComponent<RectTransform> ().localPosition.y + 30) &&
		    (images [3].GetComponent<RectTransform> ().localPosition.y >= (button.GetComponent<RectTransform> ().localPosition.y - 20))) {
			if (Time.timeScale < 1) {
				Time.timeScale = 1.0f-Time.timeScale;
				Time.fixedDeltaTime = 0.02f * Time.timeScale;
			}

			foreach (Image image in images) 
			{
				if (image.tag != "background" && image.tag != "logo")
					image.enabled = false;
			}	
			cargando = true;
			SceneManager.LoadScene("FreeMountain");
		}

	}

	public void menu(string algo)
	{
		Button button = buttons [0];//menu
		if ((images [3].GetComponent<RectTransform> ().localPosition.x >= button.GetComponent<RectTransform> ().localPosition.x - 80) &&
		    (images [3].GetComponent<RectTransform> ().localPosition.x <= (button.GetComponent<RectTransform> ().localPosition.x + 80)) &&
		    (images [3].GetComponent<RectTransform> ().localPosition.y <= button.GetComponent<RectTransform> ().localPosition.y + 30) &&
		    (images [3].GetComponent<RectTransform> ().localPosition.y >= (button.GetComponent<RectTransform> ().localPosition.y - 20))) {
			foreach (Image image in images) 
			{
				image.sprite = loadSprite;
			}	
			SceneManager.LoadScene("Menu");
		}
	}

}
