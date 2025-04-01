using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D collision)
    {
        // Se obtiene el componente Bird1 del objeto que colisionó
        BIRD bird = collision.gameObject.GetComponent<BIRD>();

        //Si el bjeto tiene el componente Bird1, se destruye el Monster
        if (bird != null)
        {
            Destroy(gameObject);
        }

        //Se define el umbral de aplastamiento
        float crushThereshold = -0.5f;
        //Se verifica si la colisión fue con suficiente fuerza (ángulo) para considerar el eplastamiento
        bool isCrushed = collision.contacts[0].normal.y < crushThereshold;

        if (isCrushed)
        {
            Destroy(gameObject);
        }
    }
}
