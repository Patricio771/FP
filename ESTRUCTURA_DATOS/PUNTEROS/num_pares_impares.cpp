int main()
{
    int numero, * dir_numero;

    cout << "digite un numero: ";
    cin >> numero;

    dir_numero = &numero;

    if (*dir_numero % 2 == 0)
    {
        cout << "El numero: " << *dir_numero << " es par" << endl;
        cout << "Posicion: " << dir_numero << endl;
    }

    else
    {
        cout << "El número: " << *dir_numero << " es impar" << endl;
        cout << "Posicion: " << dir_numero << endl;
    }
    return 0;
}
