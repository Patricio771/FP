#include <iostream>
using namespace std;

// Definición de la estructura Enemigo
struct Enemigo
{
    string nombre;
    int nivel, vida, ataque;
};

// Definición de la estructura Personaje
struct Personaje
{
    string nombre;
    int nivel, vida, ataque;

};
// Función para simular el encuentro entre el personaje y el enemigo
void encuentro(Enemigo enemigo, Personaje personaje)
{
    cout << "El combate comienza!" << endl;
    cout << personaje.nombre << " (Vida: " << personaje.vida << ", Ataque: " << personaje.ataque << ")"
        << " se enfrenta a " << enemigo.nombre << " (Vida: " << enemigo.vida << ", Ataque: " << enemigo.ataque << ")." << endl;

    // Bucle para simular turnos de combate
    while (personaje.vida > 0 && enemigo.vida > 0)
    {
        // Turno del personaje
        enemigo.vida -= personaje.ataque;
        cout << personaje.nombre << " ataca a " << enemigo.nombre
            << " causando " << personaje.ataque << " de daño. "
            << enemigo.nombre << " ahora tiene " << (enemigo.vida > 0 ? enemigo.vida : 0) << " de vida." << endl;

        if (enemigo.vida <= 0)
        {
            cout << enemigo.nombre << " ha sido derrotado. ¡" << personaje.nombre << " gana el combate!" << endl;
            return;
        }
        // Turno del enemigo
        personaje.vida -= enemigo.ataque;
        cout << enemigo.nombre << " ataca a " << personaje.nombre
            << " causando " << enemigo.ataque << " de daño. "
            << personaje.nombre << " ahora tiene " << (personaje.vida > 0 ? personaje.vida : 0) << " de vida." << endl;

        if (personaje.vida <= 0)
        {
            cout << personaje.nombre << " ha sido derrotado. ¡" << enemigo.nombre << " gana el combate!" << endl;
            return;
        }
    }
}


// Función principal
int main() 
{
    // Crear un personaje y un enemigo
    Personaje jugador = { "Héroe", 50, 10 }; // Nombre, vida, ataque
    Enemigo villano = { "Goblin", 30, 8 };   // Nombre, vida, ataque

    // Ejecutar el combate
    encuentro(villano, jugador);
}
