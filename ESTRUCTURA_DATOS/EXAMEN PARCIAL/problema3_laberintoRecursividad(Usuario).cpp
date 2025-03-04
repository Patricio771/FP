#include <iostream>
using namespace std;

// Dimensiones del laberinto
const int FILAS = 5;
const int COLUMNAS = 5;

// Laberinto: 0 = camino libre, 1 = pared
int laberinto[FILAS][COLUMNAS] = 
{
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 1, 0, 1, 0},
    {0, 0, 0, 0, 0} // La salida está en (4, 4)
};

// Para marcar las posiciones visitadas
bool visitado[FILAS][COLUMNAS] = { false };

// Función recursiva para resolver el laberinto
bool resolverLaberintoInteractivo(int x, int y) 
{
    while (true)
    {
        cout << "Estás en (" << x << ", " << y << "). ¿A dónde quieres moverte? (arriba, abajo, izquierda, derecha): ";
        string direccion;
        cin >> direccion;

        int nuevoX = x, nuevoY = y;

        if (direccion == "arriba") 
        {
            nuevoX--;
        }
        else if (direccion == "abajo")
        {
            nuevoX++;
        }
        else if (direccion == "izquierda") 
        {
            nuevoY--;
        }
        else if (direccion == "derecha") 
        {
            nuevoY++;
        }
        else
        {
            cout << "Dirección no válida. Intenta nuevamente." << endl;
            continue;
        }

        // Verificar si el movimiento es válido
        if (nuevoX < 0 || nuevoX >= FILAS || nuevoY < 0 || nuevoY >= COLUMNAS || laberinto[nuevoX][nuevoY] == 1) 
        {
            cout << "No puedes moverte a esa posición. Hay una pared o estás fuera del laberinto." << endl;
            continue;
        }

        // Actualizar posición
        x = nuevoX;
        y = nuevoY;

        // Verificar si se alcanzó la salida
        if (x == FILAS - 1 && y == COLUMNAS - 1)
        {
            cout << "¡Has alcanzado la salida del laberinto!" << endl;
            return true;
        }
    }
    return false;
}


int main() 
{
    // Posición inicial del jugador
    int inicioX = 0, inicioY = 0;

    // Mensaje de bienvenida
    cout << "¡Bienvenido al laberinto!" << endl;
    cout << "Empiezas en la posición (0, 0)." << endl;
    cout << "Tu objetivo es llegar a la salida en (" << FILAS - 1 << ", " << COLUMNAS - 1 << ")." << endl;

    // Llamar a la función interactiva
    if (resolverLaberintoInteractivo(inicioX, inicioY))
    {
        cout << "¡Felicidades! Has encontrado la salida." << endl;
    }
    else
    {
        cout << "No has podido resolver el laberinto." << endl;
    }
}
