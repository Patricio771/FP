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
