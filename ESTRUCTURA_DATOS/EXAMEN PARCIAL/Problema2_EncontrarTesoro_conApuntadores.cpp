#include <iostream>
#include <string>
using namespace std;

struct Tesoro
{
	string tipoTesoro;
	int cantidadMonedas, poderObjeto;
};

//Declaracion de la función encontrar tesoro
void encontrarTesoro(string tipoTesoro, int* cantidadMonedas, int poderObjeto)
{
	*cantidadMonedas += 50;  //incrementa las monedas de oro como ejemplo
	cout << "Tipo de tesoro: " << tipoTesoro << endl;
	cout << "Poder del objeto: " << poderObjeto << endl;
	cout << "Cantidad de monedas de oro: " << *cantidadMonedas << endl;
}

int main()
{
	// Variables necesarias
	string tipoTesoro = "Espada legendaria";
	int cantidadMonedas = 100; // Inicialmente hay 100 monedas de oro
	int poderObjeto = 75;

	// Llama a la función pasando un puntero a la cantidad de monedas
	encontrarTesoro(tipoTesoro, &cantidadMonedas, poderObjeto);
}
