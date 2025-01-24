 using namespace std;
 int main()
 {
     //Deberás de realizar lo siguiente: Calcular la velocidad de un móvil, a partir de la formula ya conocida v = d/t; indicando la distancia recorrida y el tiempo utilizado. Podemos ver que para cumplir dicho objetivo la función main invoca a diferentes funciones con una tarea específica. pedirDistancia.
     //Solicitar al usuario que ingrese la distancia recorrida por el móvil en metros y retorna el valor.pedirTiempo.
     //    Solicitar al usuario que ingrese los segundos que tardo el móvil en recorrer la distancia y retorna el valor.CalcularVelocidad.
     //    Ejecutar la fórmula y retornar el valor obtenido.MostrarVel. - Desplegar en pantalla el valor de la velocidad.

     double velocidad, distancia, tiempo;

     cout << "Dame la distancia que recorrio el automovil: " << endl;
     cin >> distancia;
     cout << "La distancia es: " << distancia << " metros" << endl;

     cout << "Dame el tiempo: " << endl;
     cin >> tiempo;
     cout << "El tiempo fue: " << tiempo << " segundos" << endl;

     velocidad = distancia / tiempo;
     cout << "La velocidad es: " << velocidad << " m/s" << endl;

 }
