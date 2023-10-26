Una solución al ejercicio
//Ficha 4b
/* Calcular áreas de diferentes polígonos*/
#include <iostream.h>
int main (void)
{
double a, b, Area; int figura;
cout<<figura = rectángulo(1), triángulo(2)”<<endl;
cout<<“¿que área quieres calcular?”<<endl; cin>>figura;
switch (figura)
{
case 1:
cout <<“valor del lado menor =“; cin >>a;
cout <<“valor del lado mayor =“; cin >>b; Area=a*b;
break;
case 2:
cout <<“valor de la base =“; cin >>a;
cout <<“valor de la altura =“; cin >>b; Area=a*b/2.0;
break;
default:
cout <<“figura equivocada“<<endl; Area=0;
break;
}
if (Area) cout<<“El área de la figura es=“<<Area<<endl;
else cerr <<”error, la figura no tiene area”<<endl;
return 0 ;
}