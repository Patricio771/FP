#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
    // EJERCICIO 4
    //Introducir una linea completa de texto (string)
    //cin.ignore(); // Ignora la instrucción cin
    string nombreCompleto;
    cout << "introduce tu nombre completo: ";
    getline(cin, nombreCompleto); // Obtiene una linea completa de texto
    cout << "Tu nombre completo: " << nombreCompleto << endl;

    // De que tamaño es un string
    cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

    // Como acceder un caracter especifico de un texto (strin)
    cout << "El primer caracter de nombre es: " << nombreCompleto[0] << endl;

    // Ejercicio 5
    // De que tamaño es un string
    cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

    // EJERCICIO 6
    // Como acceder un caracter especifico de un texto (string)
    // [] = Operador indice
    cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

    //EJERCICIO 7
    // Cambiar un caracter especifico en un texto (string)
    string cambio = "Hola";
    cambio[0] = 'h';
    cout << cambio << endl;

    // EJERCICIO 8
    // Convertir un string a MAYUSCULAS
    string textoMinusculas = "texto a convertir";
    transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), toupper);

    //EJERCICIO 9
    // Convertir un string a minusculas
    string textoMayusculas = "TEXTO A CONVERTIR";
    transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), toupper);

    //EJERCICIO 10
    // Insertar un texto dentro de otro texto
    string textoPrincipal = "Jose, ";
    textoPrincipal.insert(6, "Luis");
    cout << textoPrincipal << endl;

    // EJERCICIO 11
    // REVERTIR UN TEXTO
    string textoRevertir = " hola, mundo!";
    reverse(textoRevertir.begin(), textoRevertir.end());
    cout << textoRevertir << endl;

    // EJERCICIO 12
    // Convertir un numero a un string
    int n1 = 123;
    string numeroAtexto = to_string(n1);
    cout << "Número como string: " << numeroAtexto << endl;
    
    //EJERCICIO 13
    // CONVERTIR UN STRIN A NUMERO
    string textoAnumero = "123";
    int n2 = stoi(textoAnumero);
    cout << "String como numero: " << n2 << endl;

}
