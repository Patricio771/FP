	// Ejercicio 1: Realiza un código que ejecute las siguientes operaciones e imprima los resultados de ejecutar cada operación usando la instrucción cin
	double Resultado1 = 3 + 5 * 2 / 2 - 1;
	double Resultado2 = 3 + 10 / 2 - 1;
	double Resultado3 = 3 + 5 - 1;
	double Resultado4 = 8 - 1;
	double Resultado5 = 1 / 3 * 3;

	cout << "Resultado de 3 + 5 * 2 / 2 - 1: " << Resultado1 << endl;
	cout << "Resultado de 3 + 10 / 2 - 1: " << Resultado2 << endl;
	cout << "Resultado de 3 + 5 - 1: " << Resultado3 << endl;
	cout << "Resultado de 8 - 1: " << Resultado4 << endl;
	cout << "Resultado de 1/3 * 3: " << Resultado5 << endl;

	// Ejercicio 2: Escriba el código que pregunte al usuario por un número y escribir el resultado de la potencia del número.De la siguiente manera :
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;

	int potencia = numero * numero; // Calcula la potencia al cuadrado
	cout << "La potencia de " << numero << " es " << potencia << endl;


	// Ejercicio 3: Escriba un programa que pregunte al usuario por el número de yardas a convertir en metros.Recuerde que la unidad de conversión de
	// una yarda equivale a 0.9144 metros.
	double yardas;
	cout << "ingrese numero de yardas: ";
	cin >> yardas;
	double metros = yardas * 0.9144;
	cout << "Las yardas son: " << metros << " metros" << endl;

	// Ejercicio 4: Escriba el código de un programa que pregunte que calcule la depreciación de un auto con valor de 200, 000 pesos donde se depreciará
	// por cinco años, considerando que solo se puede depreciar el 80 % del valor original pagado por el vehículo.Imprima en consola el valor de deducción por cada año.
	    const double valorOriginal = 200000;
		const double porcentajeDepreciacion = 0.8; // 80% del valor original
		const int anos = 5;

		double valorDepreciado = valorOriginal * porcentajeDepreciacion;
		double deduccionAnual = valorDepreciado / anos;

		cout << "El valor del auto se deprecia: " << valorDepreciado << " en cinco anos" << endl;
		cout << "El valor del auto se deprecia: " << deduccionAnual << " por ano" << endl;

	// Ejercicio 5: Escriba un cálculo que calcule el porcentaje de deducción de impuestos del salario mensual de 25, 000 pesos, donde este se deducirá un impuesto fijo de
	// 900 pesos, más una parte porcentual de 1.5 % sobre el cálculo de sueldo mensual – 900, Imprima el valor total del impuesto a deducir, y el sueldo neto que recibirá 
	// el empleado.

		const double salarioMensual = 25000;
		const double impuesto = 900;
		const double partePorcentual = 375;  //el 1.5% de 25000

		double porcentajeSalarioreducido = salarioMensual - impuesto - partePorcentual;
		cout << "El salario neto es: " << porcentajeSalarioreducido << endl;

	// Ejercicio 6: Escriba el código de cada una de las siguientes operaciones en C++; por favor cree una
	//variable con el nombre de su elección e imprima el resultado con la instrucción cout: 1) 3*4 2) 12 / 3 3) 12 % 3

		int primerEjercicio = 3 * 4;
		int segundoEjercicio = 12 / 3;
		int tercerEjercicio = 12 * 0.03;
		int cuartoResultado = 12 * 0.07;
		double quintoResultado = 3 + 3.0;
		double sextoResultado = 10 / 100;
		double septimoResultado = pow(2, 3);

		cout << "El primer resultado es: " << primerEjercicio << endl;
		cout << "El segundo resultado es: " << segundoEjercicio << endl;
		cout << "El tercer resultado es: " << tercerEjercicio << endl;
		cout << "El cuarto resultado es: " << cuartoResultado << endl;
		cout << "El quinto resultado es: " << quintoResultado << endl;
		cout << "El sexto resultado es: " << sextoResultado << endl;
		cout << "El septimo resultado es: " << septimoResultado << endl;

		//Ejercicio 7: Comparaciones. Cuál será el resultado de cada comparación y escriba el código e imprima los
		// resultados usando la instrucción cout, NOTA: Las comparaciones encierrelasentre paréntesis.
		// Si a = 10 y b = 20

		int a = 10;
		int b = 20;
		cout << endl;

		if (a > b)
		{
			cout << "a es mas grande " << endl;
		}
		else
		{
			cout << "b es mas grande " << endl;
		}
		

		if (a < b)
		{
			cout << "a es mas chico " << endl;
		}
		else
		{
			cout << "b es mas chico " << endl;
		}
		
		
		if (a == b)
		{
			cout << "a es igual a b " << endl;
		}
		else
		{
			cout << "a no es igual a b " << endl;
		}


		if (a != b)
		{
			cout << "a es diferente a b " << endl;
		}
		else
		{
			cout << "a no es diferente de b " << endl;
		}


		if (a + b > 100)
		{
			cout << "a sumado a b es mayor que 100 " << endl;
		}
		else
		{
			cout << "a sumado a b no es mayor que 100 " << endl;
		}


		if (a - b == 0)
		{
			cout << "a menos b es igual a 0 " << endl;
		}
		else
		{
			cout << "a menos b no es igual a 0 " << endl;
		}


		if (a * b > 500)
		{
			cout << " a por b es mayor que 500 " << endl;
		}
		else
		{
			cout << "a por b no es mayor que 500 " << endl;
		}


		if (a * b < 100)
		{
			cout << "a por b es menor que 100 " << endl;
		}
		else
		{
			cout << "a por b es mayor que 100 " << endl;
		}


		if (a - b < 0)
		{
			cout << "a menos b es menor que 0 " << endl;
		}
		else
		{
			cout << "a menos b es mayor que 0 " << endl;
		}


		if (a < 20)
		{
			cout << "a es menor que 20 " << endl;
		}
		else
		{
			cout << "a es mayor que 20 " << endl;
		}

}

