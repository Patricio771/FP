Encontrar el mayor de dos números, solicita los dos números de tipo int.
int n1, n2;
cout << "n1 : ";
cin >> n1;
cout << endl;
cout << "n2 : ";
cin >> n2;
cout << endl;
if (n1 > n2) 
{
    cout << "n1 : " << 
        n1 << endl;
}
else 
{
    cout << "n2 : " <<
        n2 << endl;
}

Solicitar la edad de la persona y si esta es mayor de edad, escribir en pantalla “Mayor de edad” de lo contrario “Menor de edad”
int edad;
cout << "Dame tu edad : ";
cin >> edad;
cout << endl;
if (edad >= 18) 
{
    cout 
        << "mayor de edad " 
        << endl;
}
else 
{
    cout 
        << "menor de edad " << endl;
}


Solicitar la temperatura si esta es menor a 10 grados, escribir en pantalla “hace mucho frío”, si la temperatura es entre mayor a 10 grados y menor a 17 grados, escribir en pantalla “hace frío” y por último si es mayor a 17 grados, escribir en pantalla “el clima es templado”.
 int temp;
 cout << "temperatura : ";
 cin >> temp;
 cout << endl;
 if (temp < 10) 
 {
     cout 
         << "Hace mucho frio " 
         << endl;
 }
 if (temp >= 10 and
     temp <= 17) 
 {
     cout << "frio " << endl;
 }
 if (temp > 17) 
 {
     cout << "templado"
         << endl;
 }


Preguntar si al usuario si está a favor de la paz, guardar en una variable tipo char llamada voto, validar si el voto es ‘S’ o el voto es ‘N’ escribir en pantalla “voto valido” en caso de que sea cualquier otro carácter escribir, “voto invalido”
char voto = ' ';
cout << "A favor s/n : ";
cin >> voto;
cout << endl;
if (voto == 's'
    or voto == 'n' or
    voto == 'S' or 
    voto == 'N')
{
    cout << "Voto valido " 
        << endl;
}
else 
{
    cout << "Voto invalido "
        << endl;
}


Preguntar al usuario cuantas horas ha trabajado el empleado durante la semana, si, el empleado trabajo más de 40 horas, el excedente de horas se multiplicará por 75 pesos y publicar este cálculo en pantalla que será el bono del empleado.
int horasTrabajadas = 0;
cout << "Horas trabajadas : ";
cin >> horasTrabajadas;
cout << endl;
int horasBono = horasTrabajadas
    - 40;
if (horasBono > 0) 
{
    horasBono = horasBono * 75;
    cout << "Bono " << horasBono;
}


