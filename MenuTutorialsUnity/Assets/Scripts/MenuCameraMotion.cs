using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuCameraMotion : MonoBehaviour
{

    public GameObject mainMenuPoint;
    public GameObject characterSelectionPoint;

    private List<GameObject> positions = new List<GameObject>();

    private void Awake()
    {
        positions.Add(mainMenuPoint);
    }

    // Update is called once per frame
    void Update()
    {
        moveToPosition();
    }

    // Moves to the first position in the list.
    void moveToPosition()
    {
        if(positions.Count > 0)
        {
            transform.position = Vector3.Lerp(transform.position, positions[0].transform.position, 1f * Time.deltaTime);
            transform.rotation = Quaternion.Lerp(transform.rotation, positions[0].transform.rotation, 1f * Time.deltaTime);
        }
    }

    // Changes the order of list positions.
    public void switchPosition(int index)
    {
        positions.RemoveAt(0);
        if (index == 0)
        {
            positions.Add(mainMenuPoint);
        }
        else
        {
            positions.Add(characterSelectionPoint);
        }
    }
}
