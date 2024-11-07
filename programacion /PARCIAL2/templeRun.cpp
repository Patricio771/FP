srand(time(NULL));   //Generar semilla.
int castigo = 0, i = 0;
int vida = 12;
int premio = 0;
cout << "Vida inicial " << vida << endl;
while (vida > 0)
{
	// deducir uno vida
	vida--;      
	cout << "Costo de ciclo " << vida << endl;

	// castigo?
	castigo = rand() % 2;
	if (castigo == 1)
	{
		vida = vida - 3;
		cout << "Castigo " << vida << endl;
	}
	      
	premio = rand() % 2;
	if (premio == 1)
	{
		vida = vida + 3;
		cout << "Premio " << vida << endl;
	}
	cout << "Vida despues de ciclo " << vida << endl;



}
