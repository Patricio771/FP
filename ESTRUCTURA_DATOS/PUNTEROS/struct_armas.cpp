using namespace std;

struct Arma
{
    string nombre;
    int precio;
    int danio;
};

int main()
{
    int opcion, armas;
    Arma armas[3] = { {"espada oxidada", 25, 13},{"escudo mágico, 20, 15"},{"arco élfico", 50, 15} };
    int* armasEnVenta = &armas;


    int cantidadArmas = sizeof(armas) / sizeof(Arma);
    int orojugador = 32;
    int* oroActual = &orojugador;




}
