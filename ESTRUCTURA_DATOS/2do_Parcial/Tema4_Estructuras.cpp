#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura Inventario
struct Inventario {
    int oro;
    int pocionesVida;
    int pocionesMana;
    string armas[3];
};

// Definición de la estructura Jugador
struct Jugador {
    string nombre;
    int hp;
    int mp;
    int xp;
    Inventario inventario;
};

int main()
{
    // Inicialización de la estructura Inventario
    Inventario inventarioJugador = { 100, 2, 2, {"Espada", "Arco", "Lanza"} };

    cout << "Tienes " << inventarioJugador.oro << " de oro, " << inventarioJugador.pocionesVida
        << " posiciones de salud, " << inventarioJugador.pocionesMana << " posiciones de mana" << endl;

    for (string arma : inventarioJugador.armas) 
    {
        cout << "En el inventario tienes " << arma << endl;
    }

    // Inicialización de ambas estructuras
    Jugador jugador = { "Rapache", 50, 80, 100, {100, 2, 2, {"Espada", "Arco", "Lanza"}} };

    cout << "Hola " << jugador.nombre << ", tienes " << jugador.hp << " de hp, "
        << jugador.mp << " de mp, " << jugador.xp << " de exp" << endl;
    cout << "Tienes " << jugador.inventario.oro << " de oro, " << jugador.inventario.pocionesVida
        << " posiciones de salud, " << jugador.inventario.pocionesMana << " posiciones de mana" << endl;

    for (string arma : jugador.inventario.armas) 
    {
        cout << "En el inventario tienes " << arma << endl;
    }

}
