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
}
