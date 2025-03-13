#include <iostream>
using namespace std;

// Función para calcular XP
int CalcularXP(int enemigos)
{
    return enemigos * 100;
}

// Función para verificar el nivel del jugador
void VerificarNivel(int nivelActual, int nivelObjetivo)
{
    if (nivelActual >= 2 * nivelObjetivo)
    {
        cout << "Acceso concedido a la nueva área!" << endl;
    }
    else
    {
        cout << "Acceso denegado, necesitas un nivel mayor." << endl;
    }
}

int main() 
{
    //calculo de xp
    int enemigos;
    cout << "Ingresa la cantidad de enemigos derrotados: ";
    cin >> enemigos;

    int xpGanada = CalcularXP(enemigos);
    cout << "¡Ganaste " << xpGanada << " puntos de experiencia!" << endl;

    //evaluacion de nivel actual y objetivo
    int nivelActual, nivelObjetivo;
    cout << "Ingresa tu nivel actual: ";
    cin >> nivelActual;
    cout << "Ingresa el nivel objetivo: ";
    cin >> nivelObjetivo;

    VerificarNivel(nivelActual, nivelObjetivo);
}
