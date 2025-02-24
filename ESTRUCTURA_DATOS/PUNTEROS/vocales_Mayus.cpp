#include <iostream>
#include<string.h>
using namespace std;

void pedirDatos();
void contarVocales(char*);
char palabraUsuario[30];

int main()
{
	pedirDatos();
	contarVocales(palabraUsuario);
}

void pedirDatos()
{
	cout << "Digita una palabra: ";
	cin.getline(palabraUsuario, 30, '\n');
}
void contarVocales(char* palabra)
{
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;
	while (*palabra)
	{
		switch (*palabra)
		{
			// tambien se pueden minusculas, solo en el char del case.
		case 'A': contA++; break;
		case 'E': contE++; break;
		case 'I': contI++; break;
		case 'O': contO++; break;
		case 'U': contU++; break;
		}
		palabra++;
	}
	cout << "\nNumero de vocales A: " << contA << endl;
	cout << "Numero de vocales E: " << contE << endl;
	cout << "Numero de vocales I: " << contI << endl;
	cout << "Numero de vocales O: " << contO << endl;
	cout << "Numero de vocales U: " << contU << endl;
}
