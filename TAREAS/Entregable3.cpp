// Ejercicio 1 Escriba el código que pregunte al usuario por un número y escribir el resultado del
// cuadrado.De la siguiente manera: Ingrese un número: 5, El cuadrado de 5 es 25
int numero;
cout << "Ingrese un numero ";
cin >> numero;

int potencia = numero * numero;
cout << "El cuadrado de " << numero << " es " << potencia << endl;


// Ejercicio 2 Escriba un código que solicite un número entero e imprima los resultados de x, 2x, 3x,
// 4x y 5x.Donde x es el número ingresado por el usuario, y los subsecuentes implican
// multiplicar por 2, multiplicar por 3, multiplicar por 4 y multiplicar por 5, y escribir el
// resultado en el siguiente formato :
// Ingrese un número : 7
// 7 -- 14 -- 21 -- 28 -- 35
int x;
cout << "Ingrese un numero ";
cin >> x;
cout << x * 2 << " - " << x * 3 << " - " << x * 4 << " - " << x * 5 << endl;


// Ejercicio 3 Escriba un programa que pregunte al usuario por su peso y en kilogramos y lo
// convierta en libras, el factor de conversión es 2.2 libras por un kilo.
int peso;
cout << "Ingrese su peso en kilogramos: ";
cin >> peso;

cout << "Su peso en libras es: " << peso * 2.2 << endl;


// Ejercicio 4 Escriba el código de un programa que pregunte por 3 números (use 3 instrucciones de
// entrada).Cree las tres variables de entrada, adicionalmente cree una variable que se
// llame Total y Promedio, donde Total contendrá la suma de las tres variables y Promedio
// que será el cálculo del promedio de los 3 números.
int numero1;
int numero2;
int numero3;
int promedio, total;

cout << "Ingresa 3 valores: ";
cin >> numero1;
cin >> numero2;
cin >> numero3;

total = numero1 + numero2 + numero3;
promedio = total / 3;

cout << "El total es: " << total << " Y tu promedio es: " << promedio << endl;


// Ejercicio 5  Escriba un cálculo que calcule la propina de un Total, donde le pregunte al usuario por
// el total de la cuenta, y el porcentaje de propina a aplicar y guardarlo en una variable que
// se llame Porcentaje y como resultado imprima la cantidad a dar de propina.
double total2;
double porcentaje;
double propina;

cout << "Ingresa el total de la cuenta: ";
cin >> total2;
cout << endl;

cout << "Que porcentaje de propina desea dar? ";
cin >> porcentaje;
cout << endl;

propina = total2 * (porcentaje / 100);
cout << "La propina es: " << propina << endl;


// Ejercicio 6 Escriba el código que solicite un número al usuario y si este número es mayor a 100,
// que imprima “El número es mayor a 100”, de lo contrario que imprima “El número es
// menor o igual que 100”
int numero4;
cout << "Ingresa un numero: ";
cin >> numero4;

if (numero4 > 100)
{
    cout << "El numero " << numero4 << "es mayor a 100 " << endl;
}
else
{
    cout << "El numero: " << numero4 << " es menor o igual a 100" << endl;
}


// Ejercicio 7  Escriba el código que solicite un número al usuario si este número es menor a cero
// entonces imprima que “el número es negativo”, de lo contrario imprimir el “número es
// positivo”
int numero5;
cout << "Ingrese un numero: ";
cin >> numero5;
if (numero5 < 0)
{
    cout << "El numero es negativo" << endl;
}
else
{
    cout << "El numero es positivo" << endl;
}

// Ejercicio 8 Escriba un programa que pregunte por el mail del usuario y guardarlo en una variable
// llamada “Miemail”, y luego que pregunte por un password y se guarde en una variable
//llamada “Password_Ingresado”, validar si el password es igual a “12345” entonces
//imprimir “Felicidades password correcto” de otra manera imprimir “Su password es
//incorrecto”
string miemail;
int pasword;

cout << "Escribe tu correo: ";
cin >> miemail;

cout << "Escribe tu contrasena: ";
cin >> pasword;
if (pasword == 12345)
{
    cout << "Felicidades password correcto" << endl;
}
else
{
    cout << "Su password es incorrecto" << endl;
}

// Ejercicio 9 Crear un código que convierta de grados farenheit a grados centígrados, usando una
// variable llamada Farenheith; basado en la siguiente formula :
// (Farenheit − 32) ∗ (5 / 9)
int farenheit;
int centigrados;
cout << "Escribe grados en farenheit: ";
cin >> farenheit;

cout << "a centigrados es: " << (farenheit - 32) * (5 / 9) << endl;


// Ejercicio 10
double pesoCorporal, estatura;
double mc;

cout << "Ingresa tu peso corporal: ";                          
cin >> pesoCorporal;
cout << endl;

cout << "Ingresa tu estatura: ";
cin >> estatura;
cout << endl;

mc = pesoCorporal / (estatura * estatura);
cout << "Mc es: " << mc << endl;

if (mc < 18.5)
{
    cout << "Tu peso es bajo" << endl;
}
if (mc >= 18.5 and mc < 25)
{
    cout << "Tu peso es normal" << endl;
}
if (mc >= 25 and mc < 30)
{
    cout << "Tienes sobrepeso" << endl;
}
if (mc >= 30 and mc < 35)
{
    cout << "Tienes obesidad clase 1" << endl;
}
if (mc >= 35 and mc < 40)
{
    cout << "Tienes obesidad clase 2" << endl;
}
if (mc >= 40)
{
    cout << "Tienes obesidad clase 3" << endl;

    // cout << fixed;  funcion que permite mas precision para imprimir el numero
    // cout << setprecision(2); funcion para lo mismo 
}

