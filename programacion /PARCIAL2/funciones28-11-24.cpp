
#include <iostream>
using namespace std;

//funciones
void hola()
{
    cout << "Hola mundo";
}

void suma()
{
    int n1, n2;
    cout << "No. 1: ";
    cin >> n1;
    cout << "No. 2: ";
    cin >> n2;
    cout << n1 + n2 << endl;
}

//No es posible definir una funcion dentro de otra
int main() //Punto de partida
{
    // hola(); Esto es invocar o llamar la funcion
    suma();
}





parte 2
//variables globales (fuera de la funcion main)
int n1, n2;
//funciones
void pedirNumeros()
{
    cout << "Dame el No. 1: ";
    cin >> n1;
    cout << "Dame el No. 2: ";
    cin >> n2;
}
void hola()
{
    cout << "Hola mundo";
}

void suma(int n1, int n2) //variable local, tambien son los parametros de recepcion (int n1, int n2)
{
    //Suma de parametros.
    cout << n1 + n2 << endl;
}


int main() 
{
    pedirNumeros();
    suma(n1, n2);  //Estos se llaman argumentos


}
