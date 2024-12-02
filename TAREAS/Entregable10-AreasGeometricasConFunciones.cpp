#include <iostream>
#include <cmath>
using namespace std;

// Función para calcular el área de un cuadrado
double areaCuadrado(double lado) {
    return lado * lado;
}

// Función para calcular el área de un rectángulo
double areaRectangulo(double largo, double ancho) {
    return largo * ancho;
}

// Función para calcular el área de un círculo
double M_PI = 3.1416;
double areaCirculo(double radio) {
    return M_PI * radio * radio;
}

// Función para calcular el área de un triángulo
double areaTriangulo(double base, double altura) {
    return (base * altura) / 2.0;
}

// Función para calcular el área de un rombo
double areaRombo(double diagonalMayor, double diagonalMenor) {
    return (diagonalMayor * diagonalMenor) / 2.0;
}

int main() {
    double lado, largo, ancho, radio, base, altura, diagonalMayor, diagonalMenor;

    // Área del cuadrado
    cout << "Introduce el lado del cuadrado: ";
    cin >> lado;
    cout << "El area del cuadrado es: " << areaCuadrado(lado) << endl;

    // Área del rectángulo
    cout << "Introduce el largo y ancho del rectangulo: ";
    cin >> largo >> ancho;
    cout << "El area del rectangulo es: " << areaRectangulo(largo, ancho) << endl;

    // Área del círculo
    cout << "Introduce el radio del circulo: ";
    cin >> radio;
    cout << "El area del circulo es: " << areaCirculo(radio) << endl;

    // Área del triángulo
    cout << "Introduce la base y la altura del triangulo: ";
    cin >> base >> altura;
    cout << "El area del triangulo es: " << areaTriangulo(base, altura) << endl;

    // Área del rombo
    cout << "Introduce la diagonal mayor y la diagonal menor del rombo: ";
    cin >> diagonalMayor >> diagonalMenor;
    cout << "El area del rombo es: " << areaRombo(diagonalMayor, diagonalMenor) << endl;

    
}
