#include <iostream>
using namespace std;
int fibonacci(int n);

int main()
{
    int nElementos;
    //Pedimos un numero entero positivo
    do
    {
        cout << "Digite el numero de elementos: ";
        cin >> nElementos;
    }

    while (nElementos <= 0);
    //Mandamos llamar a la funcón pero de forma iterativa para imprimir todos los elementos

    cout << "Serie Finobacci: ";
    for (int i = 0; i < nElementos; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    return 0;
}

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

