vector<int>numeros;
int num;
num = -1;
while (num != 0)
{
    cout << "Dame el num";
    cout << endl;
    cin >> num;
    if (num == 0)
    {
        break;
    }

    numeros.push_back(num);

    for (int elemento : numeros)
    {
        cout << elemento << endl;
    }

//mayor y menor elemento, (para sacar menor se cambia a "<" en el for
int numeros[10]
{34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };

vector <int> vnum
{ 34, 23, 94, 56, 16, 27, 5, 25, 42, 82 };

int mayor = -1;
for (int i = 0; i <= 9; i++)
{
    if (numeros[i] < mayor)
    {
        mayor = numeros[i];
    }
}

cout << "el mayor es: " << mayor << endl;


// Ejercicio 8.

int numeros[10]
{34, 23, 94, 53, 16, 27, 5, 25, 42, 82 };

int numero, primero, segundo, tercero, temp = 0;

primero = numeros[0];
segundo = numeros[1];
tercero = numeros[2];

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


   

for (int i = 3; i < 9; i++)
{
    if (numeros[i] > primero)
    {
        tercero = segundo;
        segundo = primero;
        primero = numeros[i];
    }

    else if
        (numeros[i] > segundo)
    {
        tercero = segundo;
        segundo = numeros[i];
    }

    if (numeros[i] > tercero)
    {
        tercero = numeros[i];
    }
}

cout << primero << endl;
cout << segundo << endl;
cout << tercero << endl;
