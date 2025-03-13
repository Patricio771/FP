#include <iostream>
using namespace std;

// Función que reduce la vida del jugador
void ActualizarVida(int* pVida) //declaracion de puntero
{
    cout << "Vida antes de la actualización: " << *pVida << endl;
    *pVida -= 10;
    cout << "Vida después de la actualización: " << *pVida << endl;
}

//int* pVida declaracion de puntero
//*pVida accede al valor de la variable vida

// Función que intercambia dos valores usando punteros
void IntercambiarPiezas(int* p1, int* p2)
{
    cout << "Valor antes del cambio de posición de la pieza 1: " << *p1 << endl;
    cout << "Valor antes del cambio de posición de la pieza 2: " << *p2 << endl;

    //intercambio de posiciones
    int temp = *p1; //temp variable temporal
    *p1 = *p2;
    *p2 = temp;

    cout << "Nueva posición de la pieza 1: " << *p1 << endl;
    cout << "Nueva posición de la pieza 2: " << *p2 << endl;
}

int main()
{
    //actualizar vida
    int vida = 100;
    ActualizarVida(&vida);
    

    //intercambio de valores pieza 1 y 2
    int pieza1 = 3, pieza2 = 7;
    IntercambiarPiezas(&pieza1, &pieza2);
}
