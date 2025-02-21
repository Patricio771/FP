#include <iostream>
#include <string>
using namespace std;

typedef struct
{
        string nombre;
        string tipo;
        int valor;
        float peso;
        
} Objeto;


Objeto objetoMasValioso(Objeto obj1, Objeto obj2)
{
    return (obj1.valor > obj2.valor) ? obj1 : obj2;
}

//Definir algunos objetos
int main()
{
    Objeto espada = { "Espada", "Arma", 500, 3.5 };
    Objeto escudo = { "Escudo", "Defensa", 300, 5.0 };
    Objeto anillo = { "Anillo", "Accesorio", 700, 0.5 };
    Objeto pocion = { "Pocion", "Consumible", 100, 0.3 };


    //Comparaciones
    Objeto mejor1 = objetoMasValioso(espada, escudo);
    Objeto mejor2 = objetoMasValioso(pocion, anillo);
    Objeto mejor3 = objetoMasValioso(espada, anillo);

    // Mostrar los resultados
    cout << "El objeto más valioso entre la espada y el escudo es: " << mejor1.nombre << endl;
    cout << "El objeto mas valioso entre la pocion y el anillo es: " << mejor2.nombre << endl;
    cout << "El objeto mas valioso entre la espada y el anillo es: " << mejor3.nombre << endl;
}
