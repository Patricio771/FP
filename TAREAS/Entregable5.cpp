// 1. Crear el código de un programa en C++ que pregunte si quiere salir del ciclo usando la
// instrucción “do … while”, y leer un “string” donde el usuario tiene solo dos opciones para
// contestar.Si el usuario contesta “SI” entonces salir del ciclo, su contesta “NO” entonces
//  volver a hacer la pregunta “Quieres salir del ciclo ? [SI / NO]”.Ojo la contestación deben ser
//  estrictamente mayúsculas.

string opcion1 = "SI";
do
{
    cout << "Desea salir del ciclo " << endl;
    cout << " SI/NO, conteste en mayusculas." << endl;
    

    cin >> opcion1;
} while (opcion1 == "NO");





// 2. Hacer un menú de opciones que ejecute las operaciones aritméticas básicas (+) suma,
// (-) resta, (*) multiplicación, (/ ) división y(%) residuo.que muestre un menú como el que
// se muestra en la figura de abajo.Deberá usar la instrucción “do … while”, y deberá leer un
// carácter y en base a la opción deberá ejecutar la operación, según la opción que elija.
// Los dos operandos deberán ser preguntados al usuario, convertirlos a “int” y guardados
// en dos variables con nombres “numero1” y “numero2”, el resultado debe ser guardado en
// una variable llamada “total”, el total debe ser impreso en la consola.
// Una vez que termine la operación, inicialice las variables “numero1”, “numero2” y “total”
// en cero y el usuario podrá hacer la siguiente operación, hasta que el usuario presione “s”
// de salir entonces terminará el programa.

int numero1, numero2;
int total;
string opcion;


    do
    {
        cout << "Menu de operaciones: " << endl;
        cout << "a) suma de dos operadores " << endl;
        cout << "b) resta de dos operadores " << endl;
        cout << "c) multiplicacion de dos operadores " << endl;
        cout << "d) division de dos operadores " << endl;
        cout << "e) residuo de dos operadores " << endl;
        cout << "s) Salir del Menu " << endl;

        cout << "Ingresa la opcion" << endl;
        cin >> opcion;

        if (opcion == "a") 
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 + numero2;

            cout << total;
        }

        if (opcion == "b")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 - numero2;

            cout << total << endl;
        }

        if (opcion == "c")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 * numero2;

            cout << total << endl;
        }

        if (opcion == "d")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 / numero2;

            cout << total << endl;
        }

        if (opcion == "e")
        {
            cout << "Dame un numero: ";
            cin >> numero1;

            cout << "Dame otro numero: ";
            cin >> numero2;

            total = numero1 % numero2;

            cout << total << endl;
        }
  
    } while (opcion != "s");




    // 3. Crear un programa en C++ que “simule” dos operaciones básicas de un cajero que es
    // retiro y consulta de saldo, el proceso debe considerar la lectura y validación de banda
    //  magnética o chip* .Si la tarjeta es invalida, terminar el proceso usando la instrucción
    //  “break “de lo contrario pedir un pin de 4 dígitos, validar que solo sean 4 dígitos, el digito a
    //  validar será “1234” de lo contrario será pin invalido.
    //  Las opciones que deberá mostrar el cajero si el chip y el pin son válidos será :

    string operador;
    int pin;
    double saldo = 3450.00;
    double retirar;

    cout << "Ingrese el pin: " << endl;
    cin >> pin;
    cout << endl;

    if (pin == 1234)
    {
        do
        {
            cout << "Menu de operaciones cajero UNITEC " << endl;

            cout << "a) Consulta de saldo " << endl;
            cout << "b) Retiro de dinero " << endl;
            cout << "c) Cancelar operacion " << endl;
            cin >> operador;

            if (operador == "a")
            {
                cout << "Tu saldo es: " << saldo << endl;
                break;
            }

            if (operador == "b")
            {
                cout << "Cantidad a retirar: " << endl;
                cin >> retirar;
                cout << endl;

                if (saldo < retirar)
                {
                    cout << "Saldo insuficiente" << endl;
                }
                else
                {
                    saldo = saldo - retirar;
                    cout << "Tu nuevo saldo es: " << saldo << endl;
                }
            }


        } while (operador != "c");
    }

    else
    {
        cout << "Pin incorrecto" << endl;
    }
