#include <iostream.h>
#include <fstream.h>
#define MAX_SIZE 25
int main (void)
{
 int Matrix [MAX_SIZE];
 // esto es un vector, se ve con detalle en las fichas 12
// de momento lo tomamos como una definición para poder trabajar
// se está definiendo un vector Matrix[25] de 25 componentes
 int size;
 ofstream MyReport("resultado.txt");
 cout << “Introduzca la dimensión del vector"<<endl;
 cin >> size;
 if (size > MAX_SIZE)
{
 cerr << "Error, tamaño demasiado grande" << endl;
 MyReport << " ************* inicio"
 << endl;
 MyReport << " ERROR: dimension del vector debe ser menor de "
 << MAX_SIZE << endl;
 MyReport << " ************** fin"
 << endl;
 MyReport.close();
 return 1;
}
 for (int i=0; i<size; i++) Matrix[i]=0;
 // inicializando a cero cada componente
 cout << "Vamos a trabajar con un vector de " << size
 << " componentes" <<endl;
 MyReport << " ************* inicio" << endl;
 MyReport << " Vector de " << size << " componentes" << endl;
 i=0;
 do { MyReport << Matrix[i] << " "; } while (++i<size);
 // atencion a la precedencia de operadores
 // el resultado es distinto si while (i++<size)
 MyReport << endl;
 MyReport << " ************** fin" << endl;
 MyReport.close();
 return 0;
}