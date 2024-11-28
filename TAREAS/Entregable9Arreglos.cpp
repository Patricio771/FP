#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // 1: Realice el programa en C++ que solicite un número e imprima el numero
   // multiplicado por 10 y esto lo seguirá haciendo hasta que el usuario ingrese un cero.Utilice
   // el arreglo preconstruido.

        const int VALOR_MAX = 100;
        int numeros[VALOR_MAX];
        int num;
        int i = 0;

        cout << "Ingrese un numero, el 0 sera para finalizar";
        cout << endl;
        cin >> num;

        while (num != 0 and i < VALOR_MAX)
        {
            numeros[i] = num * 10;
            cout << "El numero multiplicado por 10 es: " << numeros[i] << endl;
            i++;
            cout << "Ingrese otro numero, 0 para finalizar" << endl;
            cin >> num;
        }

        cout << "Programa terminado, se ingreso un 0" << endl;

        // 2. Realice el programa en C++ que encuentre el mayor elemento de un arreglo de
        // tipo entero.Utilice el arreglo preconstruido

        int numeros2[10]
        { 34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };

        int mayor = -1;
        for (int i = 0; i <= 9; i++)
        {
            if (numeros2[i] > mayor)
            {
                mayor = numeros2[i];
            }
        }
        cout << "el mayor es: " << mayor << endl;


        // 3. Realice el programa en C++ que encuentre el menor elemento de un arreglo de
       // tipo entero.Utilice el arreglo preconstruido

        int numeros3[10] = { 34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };

        int menor = numeros3[0];
        for (int i = 0; i < 9; i++)
        {
            if (numeros3[i] < menor)
            {
                menor = numeros3[i];
            }
        }

        cout << "El menor es: " << menor << endl;

        // 4. Realice el programa en C++ calcule el promedio de los elementos de un arreglo
        // de tipo entero.Utilice el arreglo preconstruido.

        int numeros4[10] = { 34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };

        double promedio = 0;
        int divisor = 0;

        for (int i = 0; i < 10; i++)
        {
            promedio = promedio + numeros4[i];
            divisor = divisor++;
        }

        promedio = promedio / divisor;

        cout << "El promedio es: " << promedio << endl;

        // 5. Realice el programa en C++ que encuentre el segundo mayor elemento de un
        // arreglo.Utilice arreglo preconstruido

        int numeros5[10] = { 34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };

        int primero1 = INT_MIN, segundo1 = INT_MIN;
        for (int i = 0; i < 10; i++)
        {
            if (numeros5[i] > primero1)
            {
                segundo1 = primero1;
                primero1 = numeros5[i];
            }
            else if (numeros5[i] > segundo1 and numeros5[i] != primero1)
            {
                segundo1 = numeros5[i];
            }
        }

        if (segundo1 == INT_MIN)
        {
            cout << "No hay segundo mayor elmento del arreglo " << endl;
        }
        else
        {
            cout << "El segundo mayor elemento es: " << segundo1 << endl;
        }

        // 6.  Realice el programa en C++ que cuente el número de elementos pares e
        // impares de un arreglo preconstruido

        int numeros6[10] = { 34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };
        int pares = 0;
        int impares = 0;

        for (int i = 0; i < 10; i++)
        {
            if (numeros6[i] % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }
        }

        cout << "Numero de pares: " << pares << endl;
        cout << "Numero de impares: " << impares << endl;

        // 7. Realice el programa en C++ que imprima las tablas de multiplicar del numero
        // solicitado hasta 10 veces

        int numero9;
        cout << "Dame un numero: ";
        cin >> numero9;

        int tabla[10];
        for (int i = 0; i < 10; i++)
        {
            tabla[i] = numero9 * (i + 1);
        }

        cout << "Tabla de multiplicar del " << numero9 << ": " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << numero9 << " x " << (i + 1) << " = " << tabla[i] << endl;
        }

        // 8. Realice el programa en C++ que encuentre los tres mayores elementos de un
       // arreglo de 1000 elementos generados de forma aleatoria de tipo entero.Utilice el arreglo
       // preconstruido.


            int numeros1000[1000], primero, segundo, tercero, temp = 0;

            srand(time(NULL));

            for (int i = 0; i < 1000; i++) {
                numeros1000[i] = rand() / 99;
            }

            for (int i = 0; i < 1000; i++) {
                cout << numeros1000[i] << ", ";
            }
            cout << endl;

            if (numeros1000[0] > numeros1000[1] && numeros1000[0] > numeros1000[2]) {
                primero = numeros1000[0];
                if (numeros1000[1] > numeros1000[2]) {
                    segundo = numeros1000[1];
                    tercero = numeros1000[2];
                }
                else {
                    segundo = numeros1000[2];
                    tercero = numeros1000[1];
                }
            }
            else if (numeros1000[1] > numeros1000[0] && numeros1000[1] > numeros1000[2]) {
                primero = numeros1000[1];
                if (numeros1000[0] > numeros1000[2]) {
                    segundo = numeros1000[0];
                    tercero = numeros1000[2];
                }
                else {
                    segundo = numeros1000[2];
                    tercero = numeros1000[0];
                }
            }
            else {
                primero = numeros1000[2];
                if (numeros1000[0] > numeros1000[1]) {
                    segundo = numeros1000[0];
                    tercero = numeros1000[1];
                }
                else {
                    segundo = numeros1000[1];
                    tercero = numeros1000[0];
                }
            }

            for (int i = 3; i < 1000; i++) {
                if (numeros1000[i] > primero) {
                    tercero = segundo;
                    segundo = primero;
                    primero = numeros1000[i];
                }
                else if (numeros1000[i] > segundo) {
                    tercero = segundo;
                    segundo = numeros1000[i];
                }
                else if (numeros1000[i] > tercero) {
                    tercero = numeros1000[i];
                }
            }

            cout << "El primero es: " << primero << endl;
            cout << "El segundo es: " << segundo << endl;
            cout << "El tercero es: " << tercero << endl;

           


        // 9. Realice el programa en C++ que encuentre el segundo menor elemento de un
        // arreglo de 1000 elementos de tipo double de forma aleatoria.Utilice el arreglo
        // preconstruido

        int numeros1000_2[1000], primero2, segundo2, temp2 = 0;

        srand(time(NULL));

        for (int i = 0; i < 1000; i++)
        {
            numeros1000_2[i] = rand() / 99;
        }

        for (int i = 0; i < 1000; i++)
        {
            cout << numeros1000_2[i] << ", ";
        }

        cout << endl;

        primero2 = numeros1000_2[0];
        segundo2 = numeros1000_2[1];

        if (primero2 < segundo2)
        {
            temp2 = primero2;
            primero2 = segundo2;
            segundo2 = temp2;
        }


        for (int i = 2; i < 1000; i++)
        {
            if (numeros1000_2[i] < primero2)
            {
                segundo2 = primero2;
                primero2 = numeros1000_2[i];
            }
            else if (numeros1000_2[i] < segundo2)
            {
                segundo2 = numeros1000_2[i];
            }
        }

        cout << "El segundo menor es: " << segundo2 << endl;


        // 10. Realice el programa en C++ que invierta los valores de un arreglo de 10
        // elementos de tipo entero de forma aleatoria.Utilice el arreglo preconstruido.

        int numeros5000[10]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int n = 10;

        for (int i = 0; i < n / 2; ++i)
        {
            int temp = numeros5000[i];
            numeros5000[i] = numeros5000[n - i - 1];
            numeros5000[n - i - 1] = temp;
        }

        for (int i = 0; i < 10; i++)
        {
            cout << numeros5000[i] << ", ";
        }
        cout << endl;



}
