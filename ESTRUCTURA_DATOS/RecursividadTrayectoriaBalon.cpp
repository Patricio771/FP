#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

//Recursividad
void TrajectoryCalculation(double* posX, double* posY, double time, int power, int angle, double gravity)  //función recursiva
{
	double velocityX = power * cos(angle * M_PI / 180);
	double velocityY = power * sin(angle * M_PI / 180);
	*posX = velocityX * time;
	*posY = velocityY * time - 0.5 * gravity * time * time;

	cout << "tiempo: " << time << "S   " << "Posicion(X, Y) : (" << posX << ", " << *posY << ") " << endl;
	if (*posY <= 0)
	{
		cout << "El balon ha tocado el suelo. Fin de tiro" << endl;
	}

	TrajectoryCalculation(posX, posY, time + 0.1, angle, gravity, power);
}
int main()
#include <math.h>
{
	double tiro, angulo;
	cout << "Dame la potencia de tiro: ";
	cin >> tiro;

	if (tiro >= 0 and tiro <= 100)
	{
		cout << "Potencia de tiro valida" << endl;
	}

	else
	{
		cout << "Potencia de tiro invalida" << endl;
	}

	cout << "Dame el angulo de tiro: " << endl;
	cin >> angulo;

	if (angulo >= 0 and angulo <= 90)
	{
		cout << "El angulo es válido" << endl;
	}

	else
	{
		cout << "El angulo es invalido" << endl;
	}

	TrajectoryCalculation (&posX, &posY, time + 0.1, angle, gravity, power)
}
