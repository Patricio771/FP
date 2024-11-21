// 1. Generar el código necesario en C# para declarar un arreglo que contenga los nombres de
// los meses del año y asignar dichos valores a cada posición. Tip : Usar tipo de variable
// “string” y asina el nombre a cada posición relativa, es decir la posición cero corresponde
// a “enero”, la posición relativa uno corresponde a “febrero” etc.

string nomMeses[12]{ "enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre" };

for (int i = 0; i < 12; i++)
{
    cout << nomMeses[i] << ", ";
}
cout << endl;




// 2. Generar el código necesario en C# para declarar un arreglo que contenga los nombres de los
// planetas del sistema solar y asignar dichos valores a cada posición. Tip : Usar tipo de variable
// “string” y asina el nombre a cada posición relativa, es decir la posición cero corresponde a “mercurio”,
// la posición relativa uno corresponde a “venus” etc.

string nomPlanetas[8]{ "mercurio", "venus", "tierra", "marte", "jupiter", "saturno", "urano", "neptuno" };

    for (string planeta : nomPlanetas)
    {
        cout << planeta << endl;
    }
