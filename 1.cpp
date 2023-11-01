 // Ficha 6
002 /* funciones */
003 #include <iostream.h>
004 int checking (int i, int j); //declaración función (prototipo)
005 int main (void) //programa principal
006 {
007 int i;
008 cout<< "escribe un numero"<<endl; cin>>i;
009 int j;
010 cout<<"escribe otro numero"<<endl;cin>>j;
011 if (!checking(i,j)) //llamada a la función 
//(si la función retorna 0)
012 cout<<i<<" es mayor que "<<j<<endl;
013 else //(si la función retorna 1)
014 cout<<i<<" es menor que "<<j<<endl;
015 return 0;
016 }
017 int checking (int i, int j) //definición de la función 
//(implementación)
018 {
019 if (i<j) return 1;
020 return 0;
021 }