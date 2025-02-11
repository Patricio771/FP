#include <iostream>
using namespace std; 

//Declaración de la función recursiva para calcular el factorial
long long factorial(int n);

int main()
{
	int numero;
	cout << "Ingresa un número positivo: ";
	cin >> numero;

	if (numero < 0) {
		cout << "Error: El factorial de un número negativo no existe." << endl;
	}
	else {
		long long resultado = factorial(numero);
		cout << "El factorial de " << numero << " es: " << resultado << endl;
	}

	return 0;
}

long long factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	} 
	else {
		return 1;
	}
}
