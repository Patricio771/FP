
#include <iostream>
using namespace std;

// Prototipo de función
int MaxBetweenTwoNumbers(int n1, int n2);

int main()
{
    int n1, n2;
    cout << "Digite primer número: ";
    cin >> n1;

    cout << "Digite segundo número: ";
    cin >> n2;

    cout << "El mayor es: " << MaxBetweenTwoNumbers(n1, n2) << endl;
}
    int MaxBetweenTwoNumbers(int n1, int n2)
    {
        int max = 0;
        if (n1 > n2)
        {
            max = n1;
        }
        else
        {
            max = n2;
        }

        return max;
    }
