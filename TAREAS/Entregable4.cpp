
    // PRACTICA D 
    //1.  Diseñar un programa que lea tres números A, B, C y visualice en pantalla el valor del
    //más grande.

    int A, B, C;
A = 20;
B = 70;
C = 40;

if (B >= A and B >= C)
{
    cout << "B es mas grande " << B << endl;
}

if (C >= A and C >= B)
{
    cout << "C es mas grande " << C << endl;
}

if (A >= B and A >= C)
{
    cout << "A es mas grande " << A << endl;
}


    //2. Crear un programa que lea tres números diferentes, A, B, C, e imprime los valores
    //máximo y mínimo.El procedimiento consistirá en comparaciones sucesivas de parejas de
    // números.Cree el algoritmo, diagrama de flujo y código en C#

    A, B, C;


if (A <= B and A <= C)
{
    cout << "A es mas chico " << A << endl;
}

if (B <= A and B <= C)
{
    cout << "B es mas chico " << B << endl;
}

if (C <= A and C <= B)
{
    cout << "C es mas chico " << C << endl;
}
       

    // 3. Crear un programa al que le solicitemos la hora HH, MM, SS y nos calcule la hora
    //dentro de un segundo más tarde.Leeremos las horas minutos y segundos como números
    // enteros.

    int horas, minutos, segundos;
    cout << "Introduce hora, minutos y segundos: " << endl;
    cin >> horas >> minutos >> segundos;

    segundos = segundos + 1;

    if (segundos == 60)
    {
        segundos = 0;
        minutos = minutos + 1;
    }

    if (minutos == 60)
    {
        minutos = 0;
        horas = horas + 1;
    }

    if (horas == 24) {
        horas = 0;
    }

    cout << "Hora: " << horas << " " << minutos << " " << segundos << endl;

    //4. Determinar el precio del boleto de ida y vuelta en avión, conociendo la distancia a
    //recorrer y sabiendo que si el número de días de estancia es superior a 7 y la distancia
    //superior a 800 km el billete tiene una reducción del 30 % .El precio por km es de 2.5
    //dólares.
    
    double boleto;
    double distancia; 
    int dias;

    cout << "Cuantos dias vas a estar: ";
    cin >> dias;
    cout << endl;

    cout << "Distancia en km: ";
    cin >> distancia;

    if (dias > 7 and distancia > 800)
    {
        boleto = (distancia * 2.5) * 0.30;
        cout << "El boleto cuesta: " << boleto << endl;
    }

    else
    { 
        boleto = distancia * 2.5;
        cout << "El boleto cuesta: " << boleto << endl;
    }

    //5. Escribir las instrucciones apropiadas para cada una de las siguientes condiciones:
    //a) Si un ángulo es igual a 90 grados, imprimir el mensaje "El ángulo es un ángulo
    //recto" sino imprimir el mensaje "El ángulo no es un ángulo recto".
    // b) Si la temperatura es superior a 100 grados, visualizar el mensaje “por encima
    // del punto de ebullición del agua” sino visualizar el mensaje “por debajo del
    // punto de ebullición del agua”.
    // c) Recibir un número, Si este número es positivo, sumar el número a total de
    // positivos usando una variable que acumule los números negativos, sino sumar al
    // total de negativos usando una variable que acumule los números negativos.
    // d) Si “x” es mayor que “y”, y “z” es menor que “y”, imprimir “x”.
    // e) Si la distancia es mayor que 20 y menos que 35, crear y leer un valor para luna
    // variable de tipo entero llamada “tiempo”.

    int angulo;
    int temperatura;
    int numero;
    int x, y, z;
    int distancia2;

    // A)
    cout << "Ingrese un angulo: " << angulo << endl;
    cin >> angulo;

    if (angulo == 90)
    {
        cout << "El angulo es recto";
    }
    else
    {
        cout << " El angulo no es recto";
    }

    // B)
    cout << "Dame la temperatura: ";
    cin >> temperatura;

    if (temperatura > 100)
    {
        cout << "Por encima del punto ebullición del agua" << endl;
    }
    else
    {
        cout << "Por debajo del punto de ebullicion del agua" << endl;
    }

    // C) 
int sumaPositivos = 0;
int sumaNegativos = 0;
cout << "dame un numero: ";
cin >> numero;

if (numero != 0)
{

	if (numero > 0)
	{
		sumaPositivos += numero;
		cout << "El numero es positivo: " << sumaPositivos << endl;
		cout << "Hay: " << sumaPositivos << endl;
	}

	else if (numero < 0)
	{
		sumaNegativos += numero;
		cout << "El numero es negativo: " << sumaNegativos << endl;
		cout << "Hay: " << sumaNegativos << endl;
	}
}
 
 // D) 
 cout << "Dame un valor para x:";
 cin >> x;


 cout << "Dame un valor para y: ";
 cin >> y;


 cout << "Dame un valor para z:";
 cin >> z;

 if (x > y and z < y)
 {
     cout << x;
 }
  
 else
 {
     cout << "No se cumple lo anterior";
 }

	 // E)
cout << "Ingresa un valor para la distancia: ";
cin >> distancia2;
cout << endl;

if (distancia2 > 20 and distancia2 < 35)
{
    int tiempo;
    cout << "Ingrese el valor de tiempo: ";
    cin >> tiempo;
    cout << "El valor del tiempo es: " << tiempo << endl;
}
else
{
    cout << "El valor para distancia no esta en el rango. ";
}
