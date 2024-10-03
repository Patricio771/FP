int main()
{           // Manejo de punto decimal y separador de miles
	locale loc("");
	cout.imbue(loc);
	cout << fixed; // punto fijo
	cout << setprecision(2);

	// Declarar e imprimir string
	string texto0 = "hola mundo";
	cout << texto0 << endl;

	// Unir dos textos en uno
	string primerTexto = "hola";
	string segundoTexto = "Mundo!";
	string textoUnido = primerTexto + segundoTexto;
	cout << textoUnido << endl;

	// Introducir un valor en una variable de texto (string) usando teclado 
	string nombre;
	cout << "Introduce tu nombre: ";
	cin >> nombre;
	cout << "Hola " << nombre << "!" << endl;


}
