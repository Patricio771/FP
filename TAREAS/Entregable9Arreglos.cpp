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
    
    int numeros2[100];
    int mayor = 0;

    for (i = 0; i < 100; i++)
    {
        numeros2[i] = i + 1;
    }

    for (i = 0; i < 100; i++)
    {
        if (mayor < numeros2[i])
        {
            mayor = numeros2[i];
        }
    }

    cout << "Mayor: " << mayor;

    // 3. Realice el programa en C++ que encuentre el mayor elemento de un arreglo de
   // tipo entero.Utilice el arreglo preconstruido

    int menor = 100;

    for (i = 1; i < 100; i++)
    {
        if (menor < numeros2[i])
        {
            menor = numeros2[i];
        }
        
    }

    cout << "Menor: " << mayor;
}
