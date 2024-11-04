 int i = 0, suma = 0;
 while (i <= 9)
 {
     cout << i << ", ";
     suma = suma + i;
     i++;
 }
 cout << endl;
 cout << "Total " << suma << endl;


 int opcion1 = 0;
 do
 {
     cout << "Menu opciones " << endl;
     cout << " 1.- Ejecuta opcion 1 " << endl;
     cout << " 2.- Ejecuta opcion 2 " << endl;
     cout << " 3.- Ejecuta opcion 3 " << endl;
     cout << " 4.- Ejecuta opcion 4 " << endl;
     cout << " 5.- Ejecuta la opcion 5 " << endl;
     cout << " 6.- Salir " << endl;

     cin >> opcion1;
 } while (opcion1 != 6);
