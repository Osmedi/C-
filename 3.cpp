// Ficha 4b
/* el programa pregunta dos números, que operación deseas hacer
y muestra el resultado*/
#include <iostream.h>
int main (void)
{
double a, b; int c;
cout << “Introduzca el primer número” <<endl ; cin >> a;
cout << “Introduzca el segundo número” <<endl ; cin >> b;
cout << “Que operación deseas hacer, 1(suma), 2(producto)” <<endl ; cin >> c;
switch (c)
{
case 1:
cout <<“el resultado es:”<<a+b<<endl;
break;
default:
cout <<“el resultado es:”<<a*b<<endl;
break;
}
return 0 ;
}