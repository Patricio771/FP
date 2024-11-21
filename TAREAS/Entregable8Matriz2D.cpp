//Generar el código necesario en C++ para declarar un arreglo bidimensional que contenga los valores y las dimensiones de matriz mostrada abajo,
//para aquellas casillas en blanco, asignar el valor de cero “0”.Tip.Esta es una matriz de 9x9 con 81 casillas,
//al inicializar el valor recuerda esto.Recuerda separar por llaves, ejemplo el primer renglón y segundo renglón
//serían : { {0, 3, 0, 0, 0, 0, 0, 0, 0}, { 0, 2, 0, 9, 0, 6, 3, 0, 0 }, …. }


int matriz[9][9] = { 
    {0, 3, 0, 0, 0, 0, 0, 0, 0},
    {0, 2, 0, 9, 0, 6, 3, 0, 0},
    {0, 6, 0, 4, 0, 2, 0, 9, 0},
    {1, 0, 0, 0, 9, 0, 4, 0, 0},
    {0, 0, 8, 1, 0, 3, 5, 0, 0,},
    {0, 0, 5, 0, 7, 0, 0, 0, 3},
    {0, 5, 0, 3, 0, 1, 0, 6, 0},
    {0, 0, 4, 6, 0, 7, 0, 3, 0},
    {0, 0, 0, 0, 0, 0, 0, 8, 0}
};
for (int i = 0; i <= 8; i++)
{
    for (int j = 0; j <= 8; j++)
    {
        cout << matriz[i][j] << " " << endl;
    }
}
