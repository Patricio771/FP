#include <iostream>
using namespace std;

//Declaración de funciones
//Función para verificar si un número es par
bool Par(int num);
//Función para verificar si un numero es impar
bool Impar(int num);

int main()
{
    int numero = 5;
    if (Impar(numero))
    {
        cout << numero << " es impar." << endl;
    }
    else
    {
        cout << numero << " es par." << endl;
    }

    return 0;
}
    //Función paara verificar si es par
    bool Par(int num)
    {
        if (num == 0)
        {
            return true;
        }
        else
        {
            return Impar(num - 1);
        }
    }

    //Función para verificar si es impar
    bool Impar(int num)
    {
        if (num == 0)
        {
            return false;
        }
        else
        {
            return Par(num - 1);
        }
    }
