#include <iostream>
using namespace std;
//Clase, se declaran fuera de cualquier función.
class Enemigo
{
public:
    string tipo;
    int vida;
    int potencia;
    //constructor enemigo.
    Enemigo(string tipo1, int vida1, int potencia1)
    {
        this->tipo = tipo1;
        this->vida = vida1;
        this->potencia = potencia1;
    }

    string getTipo() const
    {
        return tipo;
    }

    int getVida() const
    {
        return vida;
    }

    int getPotencia() const
    {
        return potencia;
    }

    void setTipo(string tipo1)
    {
        this->tipo = tipo1;
    }

    void setVida(int vida1)
    {
        this->vida = vida1;
    }

    void setPotencia(int potencia1)
    {
        this->potencia = potencia1;
    }
};
class Jugador
{
public:
    string id; //Nombre que identifica al jugador.
    int vida;
    int potencia;

    //Un constructor genera un objeto o una instancia de la clase (función).

    //Un constructor tiene el nombre de la clase.
    Jugador(string id1, int vida1, int potencia1)
    {
        this->id = id1;
        this->vida = vida1;
        this->potencia = potencia1;
    }
    string getId() const
    {
        return id;
    }

    int getVida() const //const se refiere a que no se puede modificar.
    {
        return vida;
    }

    int getPotencia() const
    {
        return potencia;
    }

    //Setters
    void setId(string id1)
    {
        this->id = id1;
    }

    void setVida(int vida1)
    {
        this->vida = vida1;
    }

    void setPotencia(int potencia1)
    {
        this->potencia = potencia1;
    }
    //función prototipo, define la primer linea de la función terminando con ;
    void ataque(Enemigo & enemigo);
}; 
//llave con ; cierra una clase.

//subclase
class Orco :public Enemigo  //los dos puntos indican que es una subclase de la clase enemigo.
{
public:
    Orco(int vida1, int potencia1):
        Enemigo("Orco", vida1, potencia1)
    {}
};

class Dragon :public Enemigo  
{
public:
    Dragon(int vida1, int potencia1) :
        Enemigo("Dragon", vida1, potencia1)
    {}
};

class Goblin :public Enemigo  
{
public:
    Goblin(int vida1, int potencia1) :
        Enemigo("Goblin", vida1, potencia1)
    {}
};
int main()
{
    Jugador link("link", 100, 20);
    cout << "Nombre: " << link.getId() << endl;
    cout << "Vida: " << link.getVida() << endl;
    cout << "Potencia: " << link.getPotencia() << endl;
    cout << endl;
    Orco orco(80, 10);
    Dragon dragon(300, 80);
    Goblin goblin(60, 8);
    cout << "Vida orco: " << orco.getVida();
}

//una class es privada y esta compuesta por atributos y funciones
//un struct es publico
//class: atributos privados solo se accesan dentro de la clase

// FUNCIONES (setter y getter):
//setter: establece/actualiza la información
//getter: obtener la información
