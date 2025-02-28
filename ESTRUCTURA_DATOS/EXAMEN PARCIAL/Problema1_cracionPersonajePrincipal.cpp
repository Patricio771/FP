#include <iostream>
#include <string>
using namespace std;

struct Personaje
{
    string nombre;
    int nivel, puntosVida, puntosAtaque;
    
};

//funcion para crear un objeto de tipo personaje
Personaje crearPersonaje(string nombre, int nivel, int puntosVida, int puntosAtaque)
{
    Personaje p;
    p.nombre = nombre;
    p.nivel = nivel;
    p.puntosVida = puntosVida;
    p.puntosAtaque = puntosAtaque;
    return p;
}

int main()
{
    //crear un personaje con los valores proporcionados
    Personaje miPersonaje = crearPersonaje("Guerrero", 5, 100, 30);
    cout << "Nombre: " << miPersonaje.nombre << endl;
    cout << "Nivel: " << miPersonaje.nivel << endl;
    cout << "Puntos de vida: " << miPersonaje.puntosVida << endl;
    cout << "Puntos de ataque: " << miPersonaje.puntosAtaque << endl;
}
