// Ficha 6
/* el programa pregunta dos números que operación quieres hacer y muestra el
resultado */
#include <iostream.h>
double Suma (double x, double y); //declaración función Suma
double Producto (double x, double y); //declaración función Producto
int main (void) //programa principal
{
double a, b;
int c;
cout << "escribe un numero"<< endl; cin>>a;
cout << "escribe otro número"<<endl; cin>>b;
cout <<"Que operación deseas hacer, 1(suma), 2(producto)"<<endl;
cin>>c;
if (c==1)
cout <<"el resultado de la suma es:"<<Suma(a,b)<<endl;
else
cout<<"el resultado del producto es:"<<Producto(a,b)<<endl;
return 0;
}
double Suma (double x, double y) //definición función Suma
{
double z;
z=x+y;
return z;
}
double Producto (double x, double y) //definición función Producto
{
return (x*y);
}