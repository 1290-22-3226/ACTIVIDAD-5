#include <iostream>
using namespace std;

main() {
	 int tam=0, suma=0, promedio=0;
	 int notas[tam]; 
	 char res; 
	 do{
	 	tam++;
	 	cout<<"Ingres Nota "<<tam<<": "; 
	 	cin>>notas[tam-1]; 
	 	cout<<"Desea Ingresar Otra Nota(s/n): "; 
	 	cin>>res;
	 }while(res=='s'|| res=='S'); 
	  
	for(int i=0; i<tam;i++){
		suma+=notas[i];
	}
	promedio = suma /tam; 
	cout<<"El Promedio es: "<<promedio<<endl;

	
	
	system("pause");
}
