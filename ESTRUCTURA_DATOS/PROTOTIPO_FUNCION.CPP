
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


// Prototipo de función (mult)
void pedirDatos();
void mult(float x, float y);

float n1, n2;

int main()
{
	pedirDatos();
	mult(n1, n2);

	return 0;
}

void pedirDatos()
{
	cout << "Digite 2 números: ";
	cin >> n1 >> n2;
}

void mult(float x, float y)
{
	float multiplicación = n1 * n2;

	cout << "La multiplicación es: " << multiplicación << endl;
}

