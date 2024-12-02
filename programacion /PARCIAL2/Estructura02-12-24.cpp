#include <iostream>
#include <vector>
using namespace std;
struct Alumno
{
	//Atributos o propiedades.
public:
	string nombre;
	int cuenta;
	//Funciones de la estructura
public:
	static void altaAlumno(vector<Alumno>& v1)
	{
		Alumno alumno;
		cout << "Dame tu nombre: ";
		cin >> alumno.nombre;
		cout << "Dame tu cuenta: ";
		cin >> alumno.cuenta;
		v1.push_back(alumno);
	}

	static void imprimeDatos(vector<Alumno> v1)
	{
		cout << "Tamano del vector: " << v1.size() << endl;
		cout << endl;
		for (int i = 0; i < v1.size(); i++)
		{
			cout << "nombre: " << v1[i].nombre << endl;
			cout << "cuenta: " << v1[i].cuenta << endl;
		}
	}
};


int main()
{
	vector<Alumno> v;
	int numAlumnos;
	cout << "Numero de alumnos a dar de alta";
	cin >> numAlumnos;
	for (int i = 0; i < numAlumnos; i++)
	{
		Alumno::altaAlumno(v);
	}
	Alumno::imprimeDatos(v);
}
