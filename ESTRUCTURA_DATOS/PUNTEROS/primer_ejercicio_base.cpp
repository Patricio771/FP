int main()
{
    int numero = 5; //Creamos una variable
    //Creamos un puntero que apunta a numero
    int* puntero_a_numero = &numero;

    cout << "El valor de numero es: " << numero << endl;
    cout << "La direccion de memoria de numero es: " << &numero << endl;

    cout << "El valor al que apunta el puntero es: " << *puntero_a_numero << endl;


    return 0;
}
