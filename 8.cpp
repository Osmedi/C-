//Ficha 5a
/* Listar los 20 primeros números pares/impares en orden decreciente*/
#include <iostream.h>
void main (void)
{
int n;
cout<<“Los 20 primero números pares en orden decreciente”<<endl;
for (int i=0; i<21; i+=2) { n=20; n-=i; cout <<“numero par:“<<n<<endl; }
cout<<”Los 20 primero números impares en orden decreciente”<<endl;
for (i=19; i>0; i-=2) cout <<“numero impar:“<<i<<endl;
}