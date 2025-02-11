#include <iostream>
using namespace std; 

struct personaje
{
	string nombre;
    int fuerza, inteligencia, destreza;
};

int main()
{
    //Definir armas disponibles
    personaje Personajes[3] = { {"guerrero", 8, 4, 7} , {"mago", 10, 8, 5} , {"arquero", 6, 9, 3} };
    int cantidadPersonajes = sizeof(Personajes) / sizeof(personaje);
    string nombre1;
    cout << "Ingresa el nombre de tu personaje: ";
    cin >> nombre1;

    cout << "Elige un personaje " << endl;

    cout << " \nOpciones: \n";
    cout << "1. guerrero\n";
    cout << "2. mago\n";
    cout << "3. arquero\n";
    cout << "4. Salir\n";

    cout << "Seleccione una opcion: ";

    int opcion;
    cin >> opcion;
    opcion;

    if (opcion == 1)
    {
        cout << "Tu personaje " << nombre1 << " es: guerrero" << endl;
    }

    if (opcion == 2)
    {
        cout << "Tu personaje " << nombre1 << " es: mago" << endl;
    }

    if (opcion == 3)
    {
        cout << "Tu personaje " << nombre1 << " es: arquero" << endl;
    }

   
    int puntosAtributo = 10;
    int puntosAtributo1;



    while (true)
    {
        cout << "Estos son tus puntos de atributo" << endl;
        cout << "tienes: " << puntosAtributo << " puntos de atributo" << endl;
        cout << "asigna tus puntos entre fuerza, inteligencia y destreza" << endl;

        cin >> puntosAtributo1;
        break;

    }

    if (puntosAtributo1 > 10)
    {
        cout << "Error, te excediste de puntos" << endl;
    }


}
