using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class cannon : MonoBehaviour {


	public Transform m_cannonRot;
	public Transform m_muzzle;
	public GameObject m_shotPrefab;
	public	Camera camera;
	public GameObject cursor;
	public AudioSource laser;
	void Start () 
	{


	}

	// Update is called once per frame
	void Update () 
	{
//		if (Input.GetKey(KeyCode.LeftArrow))
//		{
//			m_cannonRot.transform.Rotate(Vector3.up, -Time.deltaTime * 100f);
//		}
//		if (Input.GetKey(KeyCode.RightArrow))
//		{
//			m_cannonRot.transform.Rotate(Vector3.up, Time.deltaTime * 100f);
//		}
		//		if (Input.GetKeyDown(KeyCode.Space))
		//		{
		//			GameObject go = GameObject.Instantiate(m_shotPrefab, m_muzzle.position, m_muzzle.rotation) as GameObject;
		//			GameObject.Destroy(go, 3f);
		//				laser.Play();
		//		}

		if (Input.GetKeyDown(KeyCode.Space) )
		{ 
			float distance = 90f;
			laser.Play();

			Vector3 position = new Vector3(cursor.transform.position.x, cursor.transform.position.y, cursor.transform.position.z);
			//Vector3 position = new Vector3(cursor.transform.position.x+700f, cursor.transform.position.y+300f , distance);
			//Vector3 position = new Vector3(cursor.transform.position.x, cursor.transform.position.y, cursor.transform.position.z);
			//Debug.Log("X: "+(cursor.transform.position.x+700f)+"--Y: "+(cursor.transform.position.y+300f));
			///position = camera.ScreenToWorldPoint(position);
			GameObject go = Instantiate(m_shotPrefab, transform.position, Quaternion.identity) as GameObject;
			go.transform.LookAt(position);    
			go.GetComponent<Rigidbody>().AddForce(go.transform.forward * 1000);
	
		}
	}
		

	public void shootWithButton( string cualquiercosa)
	{
		laser.Play();

		Vector3 position = new Vector3(cursor.transform.position.x, cursor.transform.position.y, cursor.transform.position.z);
		//Vector3 position = new Vector3(cursor.transform.position.x+700f, cursor.transform.position.y+300f , distance);
		//Vector3 position = new Vector3(cursor.transform.position.x, cursor.transform.position.y, cursor.transform.position.z);
		//Debug.Log("X: "+(cursor.transform.position.x+700f)+"--Y: "+(cursor.transform.position.y+300f));
		///position = camera.ScreenToWorldPoint(position);
		GameObject go = Instantiate(m_shotPrefab, transform.position, Quaternion.identity) as GameObject;
		go.transform.LookAt(position);    
		go.GetComponent<Rigidbody>().AddForce(go.transform.forward * 1000);
	}
		
}
