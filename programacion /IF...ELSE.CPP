using namespace std;

int main()
{
    //Ejercicios de pratica If - Else

    int num = 0;
    cout << "Dame un valor ";
    cin >> num;
    cout << endl;
    if (num % 2 == 0) //no debe llevar ;
    {
        cout << "par " << endl;
    }
    else            // el else nunca lleva condicion 
    {
        cout << "impar " << endl;
    }
}
