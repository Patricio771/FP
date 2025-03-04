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
bool resolverLaberinto(int x, int y)
{
    // Verificar si la posición actual está fuera del laberinto o es una pared
    if (x < 0 || x >= FILAS || y < 0 || y >= COLUMNAS || laberinto[x][y] == 1 || visitado[x][y])
    {
        return false;
    }

    // Si el jugador alcanza la salida
    if (x == FILAS - 1 && y == COLUMNAS - 1)
    {
        return true; // Laberinto resuelto
    }

    // Marcar la posición como visitada
    visitado[x][y] = true;

    // Intentar moverse en las 4 direcciones (arriba, abajo, izquierda, derecha)
    if (resolverLaberinto(x - 1, y) ||  // Moverse arriba
        resolverLaberinto(x + 1, y) ||  // Moverse abajo
        resolverLaberinto(x, y - 1) ||  // Moverse a la izquierda
        resolverLaberinto(x, y + 1)) {  // Moverse a la derecha
        return true; // Si alguna dirección lleva a la salida
    }

    // Retroceder (desmarcar como visitado si no hay solución desde esta posición)
    visitado[x][y] = false;
    return false;
}

int main() {
    // Posición inicial del jugador
    int inicioX = 0, inicioY = 0;

    if (resolverLaberinto(inicioX, inicioY)) 
    {
        cout << "¡El jugador ha alcanzado la salida del laberinto!" << endl;
    }
    else
    {
        cout << "No hay camino para salir del laberinto." << endl;
    }
}
