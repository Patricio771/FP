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

    vector <int> vnum
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


   // 8. Realice el programa en C++ que encuentre los tres mayores elementos de un
  // arreglo de 1000 elementos generados de forma aleatoria de tipo entero.Utilice el arreglo
  // preconstruido.

   int numeros1000[1000], primero, segundo, tercero, temp = 0;;

   srand(time(NULL));

   for (int i = 0; i < 1000; i++)
   {
       numeros1000[i] = rand()/99;
   }

   for (int i = 0; i < 1000; i++)
   {
       cout << numeros1000[i] << ", ";
   }

   cout << endl;

   primero = numeros1000[0];
   segundo = numeros1000[1];
   tercero = numeros1000[2];

   if (primero < segundo)
   {
       temp = primero;
       primero = segundo;
       segundo = temp;
   }

   if (primero < tercero)
   {
       temp = primero;
       primero = tercero;
       tercero = temp;
   }

   if (segundo < tercero)
   {
       temp = segundo;
       segundo = tercero;
       tercero = temp;
   }


   for (int i = 3; i < 1000; i++)
   {
       if (numeros1000[i] >= primero)
       {
           tercero = segundo;
           segundo = primero;
           primero = numeros1000[i];
       }

       else if
           (numeros1000[i] >= segundo)
       {
           tercero = segundo;
           segundo = numeros1000[i];
       }

       if (numeros1000[i] >= tercero)
       {
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
       if (numeros1000_2[i] >= primero2)
       {
           segundo2 = primero2;
           primero2 = numeros1000_2[i];
       }
   }

   cout << "El segundo es: " << segundo2 << endl;


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
