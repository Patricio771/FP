#include <iostream>
#include <string>
using namespace std;

struct Jugador
{
    string nombre;
    int monedas;

    // Constructor para inicializar el jugador
    Jugador(string n, int m) : nombre(n), monedas(m) {}
};

// Método para aumentar las monedas del jugador
void AumentarMonedas(Jugador* jugador, int n)
{
    jugador->monedas += n;  // Aumentamos las monedas del jugador
    cout << "Monedas aumentadas: " << n << endl;
}

// Función que muestra los datos del jugador
void MostrarJugador(Jugador* jugador) {
    cout << "Jugador: " << jugador->nombre << endl;
    cout << "Monedas: " << jugador->monedas << endl;
}

int main()
{
    // Crear un jugador con valores iniciales
    Jugador jugador1("Carlos", 100);

    // Mostrar el estado inicial del jugador
    cout << "Estado inicial del jugador:" << endl;
    MostrarJugador(&jugador1);

    // Mostrar monedas antes de aumentar
    cout << "\nMonedas antes de AumentarMonedas: " << jugador1.monedas << endl;

    // Llamar a AumentarMonedas usando un puntero al jugador y pasando el valor 50 para incrementar las monedas
    AumentarMonedas(&jugador1, 50);  // Aumentamos 50 monedas

    // Mostrar monedas después de aumentar
    cout << "\nMonedas después de AumentarMonedas: " << jugador1.monedas << endl;

    // Mostrar el estado final del jugador
    cout << "\nEstado final del jugador:" << endl;
    MostrarJugador(&jugador1);

}
