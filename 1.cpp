#include <iostream.h>
#include <fstream.h>
#define MAX_SIZE 25
int main (void)
{
 int size;
 ofstream MyReport("resultado.txt");
 cout << “Introduzca la dimensión del vector"<<endl;
 cin >> size;
 if (size > MAX_SIZE)
{
 cerr << "Error, tamaño demasiado grande" << endl;
 MyReport << " ************* inicio" << endl;
 MyReport << " ERROR: dimension del vector debe ser menor de "
 << MAX_SIZE << endl;
 MyReport << " ************** fin" << endl;
 MyReport.close();
 return 1;
}
 cout << "Vamos a trabajar con un vector de " << size
 << " componentes" <<endl;
 MyReport << " ************* inicio" << endl;
 MyReport << " Vector de " << size << " componentes" << endl;
 MyReport << " ************** fin" << endl;
 MyReport.close();
 return 0;
}