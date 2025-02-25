#include <iostream>
using namespace std;

struct Enemigo
{
	string nombre;
	int nivel;
	float salud;


// Método para atacar al enemigo
void Atacar(int dano)
{
    salud -= dano; // Restar el daño a la salud

    if (salud <= 0) 
    {
        salud = 0; // Asegurarse que la salud no sea negativa
        cout << "¡Has derrotado al " << nombre << "!" << endl;
    }
    else
    {
        cout << "La salud del " << nombre << " es ahora: " << salud << endl;
    }
}
};

int main()
{
	Enemigo jefeFinal = { "Dragon", 10, 200 };
	cout << "El enemigo " << jefeFinal.nombre << " tiene: " << jefeFinal.nivel << " puntos de nivel y " << jefeFinal.salud << " puntos de vida" << endl;

	jefeFinal.Atacar(50);
    cout << "La salud restante del " << jefeFinal.nombre << ": " << jefeFinal.salud << endl;

    if (jefeFinal.salud <= 0)
    {
        cout << "Victoria! Has derrotado al " << jefeFinal.nombre << ". " << endl;
    }

}
