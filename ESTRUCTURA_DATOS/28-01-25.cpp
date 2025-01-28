#include <iostream>
using namespace std;
int main()
{

    // EJERCICIO 1
    //Deberás de realizar lo siguiente: Calcular la velocidad de un móvil, a partir de la formula ya conocida v = d/t; 
    //indicando la distancia recorrida y el tiempo utilizado. Podemos ver que para cumplir dicho objetivo la función main invoca a diferentes funciones con una tarea específica. pedirDistancia.
    //Solicitar al usuario que ingrese la distancia recorrida por el móvil en metros y retorna el valor.pedirTiempo.
    //    Solicitar al usuario que ingrese los segundos que tardo el móvil en recorrer la distancia y retorna el valor.CalcularVelocidad.
    //    Ejecutar la fórmula y retornar el valor obtenido.MostrarVel. - Desplegar en pantalla el valor de la velocidad.

    double velocidad, distancia, tiempo;
    cout << "EJERCICIO 1" << endl;
    cout << endl;
    cout << "Dame la distancia que recorrio el automovil: " << endl;
    cin >> distancia;
    cout << "La distancia es: " << distancia << " metros" << endl;

    cout << "Dame el tiempo: " << endl;
    cin >> tiempo;
    cout << "El tiempo fue: " << tiempo << " segundos" << endl;

    velocidad = distancia / tiempo;
    cout << "La velocidad es: " << velocidad << " m/s" << endl;
    cout << endl;
    cout << endl;

    // usando float
    float velocidad1, distancia1, tiempo1;
    cout << "EJERCICIO 1 (usando float)" << endl;
    cout << endl;
    cout << "Dame la distancia que recorrio el automovil: " << endl;
    cin >> distancia1;
    cout << "La distancia es: " << distancia1 << " metros" << endl;

    cout << "Dame el tiempo: " << endl;
    cin >> tiempo1;
    cout << "El tiempo fue: " << tiempo1 << " segundos" << endl;

    velocidad1 = distancia1 / tiempo1;
    cout << "La velocidad es: " << velocidad1 << " m/s" << endl;
    cout << endl;
    cout << endl;

    //EJERCICIO2
    //La fórmula para calcular el área de un polígono regular es: a = (P x a) / 2; donde a= área; P = perímetro; a = apotema;
    //Realizar un programa que a través del llamado de diferentes funcione, permita seleccionar 4 polígonos regulares(pentágono,
    //hexágono, heptágono y octágono), para posteriormente calcular su área.


    double area, perimetro, apotema;
        string a = "a", b = "b", c = "c", d = "d";
        string respuesta;

        cout << "EJERCICIO 2" << endl;
        cout << endl;
        cout << "De que poligono deseas calcular el area?" << endl;
        cout << "a) pentagono, b) hexagono, c) heptagono, d) octagono" << endl;
        cin >> respuesta;
        

        if (respuesta == "a")
        {
            cout << "Dame el perimetro" << endl;
            cin >> perimetro;
            cout << "Dame la apotema" << endl;
            cin >> apotema;
            area = (perimetro * apotema) / 2;
            cout << "El area del pentagono es: " << area << endl;     
        }
      
        if (respuesta == "b")
        {
            cout << "Dame el perimetro" << endl;
            cin >> perimetro;
            cout << "Dame la apotema" << endl;
            cin >> apotema;
            area = (perimetro * apotema) / 2;
            cout << "El area del hexagono es: " << area << endl;
        }
      
        if (respuesta == "c")
        {
            cout << "Dame el perimetro" << endl;
            cin >> perimetro;
            cout << "Dame la apotema" << endl;
            cin >> apotema;
            area = (perimetro * apotema) / 2;
            cout << "El area del heptagono es: " << area << endl;
        }

        if (respuesta == "d")
        {
            cout << "Dame el perimetro" << endl;
            cin >> perimetro;
            cout << "Dame la apotema" << endl;
            cin >> apotema;
            area = (perimetro * apotema) / 2;
            cout << "El area del octagono es: " << area << endl;
        }
        cout << endl;
        cout << endl;

        cout << "CONCLUSIÓN" << endl;
        cout << endl;
        cout << "En el ejercicio 1, se utilizan diferentes tipos de funciones, donde las void ejecutan instrucciones sin devolver un valor, mientras que otras sí lo hacen para realizar cálculos. Es posible solicitar varios datos en una misma función, aunque es más recomendable separarlas para mejorar la claridad y reutilización del código. En el ejercicio 2, estructurar mejor el programa con funciones específicas permitiría optimizar el proceso y evitar redundancias." <<endl;
}
