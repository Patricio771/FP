#include <iostream>
using namespace std;

// Función recursiva para calcular la puntuación total
int CalcularPuntos(int nivel) 
{
    if (nivel == 0) return 0; //caso base para que la recursion se detenga
    return nivel + CalcularPuntos(nivel - 1);
}


// Función recursiva para imprimir niveles
void ImprimirNiveles(int nivelActual, int nivelObjetivo)
{
    if (nivelActual > nivelObjetivo) return;//caso base
    cout << "Nivel: " << nivelActual << endl;
    ImprimirNiveles(nivelActual + 1, nivelObjetivo);
}


int main() 
{
    //puntuacion total
    int nivel;
    cout << "Ingrese el nivel alcanzado: ";
    cin >> nivel;

    cout << "Puntos totales: " << CalcularPuntos(nivel) << endl;
    
    //imprimir niveles actual y objetivo
    int nivelActual, nivelObjetivo;
    cout << "Ingrese el nivel actual: ";
    cin >> nivelActual;
    cout << "Ingrese el nivel objetivo: ";
    cin >> nivelObjetivo;

    ImprimirNiveles(nivelActual, nivelObjetivo);
}
