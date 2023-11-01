#include <iostream.h>
#include <fstream.h>
#define MAX_SIZE 25
int main (void)
{
 int Matrix [MAX_SIZE];
 // esto es un vector, se ve con detalle en las fichas 12
// de momento lo tomamos como una definición para poder trabajar
 int size;
 ofstream MyReport("resultado.txt");
 cout << “Introduzca la dimensión del vector"<<endl;
 cin >> size;
 if (size > MAX_SIZE)
{
 cerr << "Error, tamaño demasiado grande" << endl;
 MyReport << " *********************************** inicio"
 << endl;
 MyReport << " ERROR: dimension del vector debe ser menor de "
 << MAX_SIZE << endl;
 MyReport << " ************************************** fin"
 << endl;
 MyReport.close();
 return 1;
}