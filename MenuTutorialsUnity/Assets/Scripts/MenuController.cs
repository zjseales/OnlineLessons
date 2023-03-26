using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuController : MonoBehaviour
{
    public GameObject buttonPanel, characterSelectPanel;

    private MenuCameraMotion menuCameraMotion;

    private void Awake()
    {
        menuCameraMotion = Camera.main.GetComponent<MenuCameraMotion>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // move Camera and switch UI when Play Game button is pressed
    public void playGame()
    {
        menuCameraMotion.switchPosition(1);
        buttonPanel.SetActive(false);
        characterSelectPanel.SetActive(true);
    }

    // Move camera back to main menu and change ui when back to menu button is pressed.
    public void backButton()
    {
        menuCameraMotion.switchPosition(0);
        characterSelectPanel.SetActive(false);
        buttonPanel.SetActive(true);
    }

    public void setQuality()
    {
        changeQuality();
    }

    // changes video quality dependent on the quality button clicked
    void changeQuality()
    {
        //retrieve name of clicked item
        string level = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name;

        switch (level) 
        {
            case "Low":
                QualitySettings.SetQualityLevel(0);
                break;
            case "Normal":
                QualitySettings.SetQualityLevel(1);
                break;
            case "High":
                QualitySettings.SetQualityLevel(2);
                break;
            case "Epic":
                QualitySettings.SetQualityLevel(3);
                break;
            case "Shadows":
                if(QualitySettings.shadows == ShadowQuality.All)
                {
                    QualitySettings.shadows = ShadowQuality.Disable;
                }
                else
                {
                    QualitySettings.shadows = ShadowQuality.All;
                }
                break;
        }
    }
}
