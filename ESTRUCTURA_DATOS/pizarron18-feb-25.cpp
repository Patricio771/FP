#include <iostream>
using namespace std;
int fibonacci(int n);

int main()
{
    int nElementos;

    do
    {
        cout << "Digite el numero de elementos: ";
        cin >> nElementos;
    }

    while (nElementos <= 0);

    cout << "Serie Finobacci: ";
    for (int i = 0; i < nElementos; i++)
    {
        cout << fibonacci(i) << ", ";
    }
    return 0;
}
else
{
    return fibonacci(n - 1) + fibonacci(n - 2);
}
