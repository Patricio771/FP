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

	cout << "tiempo: " << time << "S   " << "Posicion(X, Y) : (" << *posX << ", " << *posY << ") " << endl << flush;
	if (*posY < 0.001)
	{
		cout << "El balon ha tocado el suelo. Fin de tiro" << endl;
		return; // Terminar la recursividad cuando el balón toque el suelo.
	}

	TrajectoryCalculation(posX, posY, time + 0.1, power, angle, gravity);
}


int main()
{
	double power, angle;
	cout << "Dame la potencia de tiro: ";
	cin >> power;

	if (power >= 0 && power <= 100)
	{
		cout << "Potencia de tiro valida" << endl;
	}

	else
	{
		cout << "Potencia de tiro invalida" << endl;
		return 1; //Salir del programa si la potencia de tiro es invalida
	}

	cout << "Dame el angulo de tiro: " << endl;
	cin >> angle;

	if (angle >= 0 && angle <= 90)
	{
		cout << "El angulo es válido" << endl;
	}

	else
	{
		cout << "El angulo es invalido" << endl;
		return 1; //Salir del programa si el angulo es invalido
	}

	double posX = 0, posY = 0, time = 0;
	double gravity = 9.81; //Valor de gravedad puede ser ajustado segun sea necesario.


	TrajectoryCalculation(&posX, &posY, time, power, angle, gravity);
	
}
