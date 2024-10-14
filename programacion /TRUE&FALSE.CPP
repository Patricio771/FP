using namespace std;

int main()
{

    cout << boolalpha; // convierte 0 y 1 en true y false
	bool bb = true;
	cout << bb << endl;


	char opcion1 = 'a';
	cout << opcion1 << endl;

	// Enteros 
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;

	// Operaciones con desigualdad, comparacion, magnitud
	
	// 1. Igualdad 
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;

	// 2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;

	//	3. Mayor qur
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;

	// 4. Menor	que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;

	// 5. Mayor o igual que
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;

	// 6. Menor igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;

	// 7. Comparaciones de tipo mixto
	cout << "(n1 > f2): " << (n1 > f2) << endl;
	cout << "(f1 < n2): " << (f1 < n2) << endl;

	// 8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 < -f2): " << (f1 < -f2) << endl;

	// 9. Combinacion de comparaciones
	// Puedes usar la palabra and en lugar de &&
	// Puedes usar la palabra or en lugar ||
	cout << "((n1 <n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

	// 10. comparaciones anidadas
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

	// 11. Comparacion con constante
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

	// 12. Comparacion con los resultados de las operaciones aritmeticas
	cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 - n2) >= (f1 / f2)) << endl;

	// 13. comparacion de resultados negativos y postivos
	cout << "((-n1) < n2): " << ((-n1) < n2 ) << endl;
	cout << "((-f1) > f2): " << ((-f1) < f2) << endl;

	// 14. Combinación de aritméticas y comparación
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;

	// 15. Comparaciones encadenadas
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

	// 16. Comparacion de modulos.
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;

	// Operadores lógicos
	bool p = true, q = false;

	// 17. Lógico AND
	cout << "(p and q): " << (p or q);

	// 18. OR Lógico
	cout << "(p or q): " << (p or q);

	// 19. Lógico not
	// Puedes usar la plabra not en lugar de !
	cout << "(!p): " << (not(p));

	// 20. Combinación de AND y NOT
	cout << "(p and not(q)): " << (p and not(q)) << endl;

	// 21. Doble NOT
	cout << "(not(not(q))): " << (not(not(q))) << endl;

	// 22. Operaciones mixtas
	cout << "(not(p and q) or (p or not(q))): " << (not(p and q) or (p or not(q))) << endl;

	// 23. Asignación de variables con operadores lógicos
	bool a = p and q;
	cout << "Valor asignado a variable 'a': " << a << endl;

	// 24. Operaciones lógicas con numeros enteros (distinto de 0 es verdadero, cero es falso)
	int x = 5, y = 0;
	cout << "(x and y): " << (x and y) << endl;

	// 25. Operaciones lógicas con tipos de datos mixtos
	float m = 3.5, n = 0.0;
	cout << "(m or n): " << (m or n) << endl;

	// 26. Expresiones complejas
	cout << "((P or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

	// 27. Expresiones anidadas 
	cout << "((x and not(y)) and (m or not(q)): " << ((x and not(y)) and (m or not(q))) << endl;

	// 28. Operaciones lógicas con números de punto flotante
	cout << "((m > n) and (m <= 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

	// 29. Uso de operadores lógicos con comparación de cadenas de texto (string)
	string str1 = "hola", str2 = "mundo";
	cout << "((str1 == str2) or (str1 != str2)): " << ((str1 == str2) or (str1 != str2)) << endl;


}

