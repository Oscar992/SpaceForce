using UnityEngine;
using System.Collections;

public class onGUI : MonoBehaviour {

/*	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}*/
	void OnGUI(){

		GUIStyle style = new GUIStyle();
		style.font = (Font)Resources.Load ("Classic Robot Italic", typeof(Font));
		style.fontSize = 40;
		style.normal.textColor = Color.yellow;
		GUI.Label (new Rect (60	, 60, 100, 20), "Score: "+Score.numberScore, style);
	//	GUI.Label (new Rect (500, 60, 100, 20), "Vida: ", style);

	}


}
