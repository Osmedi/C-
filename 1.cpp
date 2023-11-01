for (int i=0; i<size; i++) Matrix[i]=0;
 // inicializando a cero cada componente
 cout << "Vamos a trabajar con un vector de " << size
 << " componentes" <<endl;
 MyReport << " *********************************** inicio" << endl;
 MyReport << " Vector de " << size << " componentes" << endl;
 i=0;
 do { MyReport << Matrix[i] << " "; } while (++i<size);
 // atencion a la precedencia de operadores
 // el resultado es distinto si while (i++<size)
 MyReport << endl;
 MyReport << " ************************************** fin" << endl;
 MyReport.close();
 return 0;
}