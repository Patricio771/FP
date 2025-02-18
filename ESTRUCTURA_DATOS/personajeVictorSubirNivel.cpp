#include <iostream>
#include <string>
using namespace std;

struct Personaje
{
    string nombre;
    int nivel;
    int experiencia;
    int ataque;
    float salud;
};

void subirNivel(Personaje* ptrpersonaje)
//Función para subir nivel
{
    ptrpersonaje->nivel++;
    ptrpersonaje->experiencia = 0;
    ptrpersonaje->salud *= 11;
    ptrpersonaje->ataque += 5;
}
int main()
{
    Personaje mipersonaje;
    mipersonaje.nombre = "Victor";
    mipersonaje.nivel = 50;
    mipersonaje.experiencia = 100;
    mipersonaje.salud = 80.5;
    mipersonaje.ataque = 20;

    cout << "Detalles:" << endl;
    cout << "Nombre:" << mipersonaje.nombre << endl;
    cout << "Nivel:" << mipersonaje.nivel << endl;
    cout << "Experiencia:" << mipersonaje.experiencia << endl;
    cout << "Salud:" << mipersonaje.salud << endl;
    cout << "Ataque:" << mipersonaje.ataque << endl;

    subirNivel(&mipersonaje);
    cout << "Subir nivel" << endl;
    cout << "Nombre:" << mipersonaje.nombre << endl;
    cout << "Nivel:" << mipersonaje.nivel << endl;
    cout << "Experiencia:" << mipersonaje.experiencia << endl;
    cout << "Salud:" << mipersonaje.salud << endl;
    cout << "Ataque:" << mipersonaje.ataque << endl;

}

