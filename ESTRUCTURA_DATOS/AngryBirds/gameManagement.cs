using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    // Metodo para cargar diferentes pantallas
    public void LoadScreen()
    {
        SceneManager.LoadScene("Pantalla 1");
    }

    public void LoadScreen2()
    {
        SceneManager.LoadScene("Pantalla 2");
    }

    public void LoadScreen3()
    {
        SceneManager.LoadScene("Pantalla 3");
    }

    public void LoadScreen4()
    {
        SceneManager.LoadScene("Pantalla 4");
    }

    public void LoadScreen5()
    {
        SceneManager.LoadScene("Pantalla 5");
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
