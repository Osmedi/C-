// Ficha 5a
/* Escribir la tabla de multiplicar de un cierto número*/
#include <iostream.h>
int main (void)
{
int n;
cout << “Introduzca el número cuya tabla de multiplicar desea:”; cin >> n;
if (n==0)
cout << “la tabla es nula” <<endl ;
else
{
cout << “la tabla de multiplicar del número”<<n<<“es:”<<endl;
for (int i=1; i<10;i++)
cout <<i<<“*”<<n<<“=“<<i*n<<endl;
}
return 0 ;
}
6.2