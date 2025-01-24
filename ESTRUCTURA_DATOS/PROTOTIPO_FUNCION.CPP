
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



// Prototipo de función (menor)
int MinBetweenTwoNumbers(int n1, int n2);

int main()
{
    int n1, n2;
    cout << "Digite primer número: ";
    cin >> n1;

    cout << "Digite segundo número: ";
    cin >> n2;

    cout << "El menor es: " << MinBetweenTwoNumbers(n1, n2) << endl;
}
    int MinBetweenTwoNumbers(int n1, int n2)
    {
        int min = 0;
        if (n1 < n2)
        {
            min = n1;
        }
        else
        {
            min = n2;
        }

        return min;
    }
