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
    cout << "El numero " << numero << "es mayor a 100 " << endl;
}
else
{
    cout << "El numero: " << numero << " es menor o igual a 100" << endl;
}
