#include <iostream>
using namespace std;
double promedio(int lista[],int cantidad);


int main(){
	int elementos[6]={8,5,7,3,6,5};
	for (int i = 0; i < 6; i++){
		cout << elementos[i] <<" , ";
	}
	cout << endl;
	double resultado = promedio(elementos,6);
	cout << " El promedio del arreglo es de: " << resultado;
	
	return 0;
}

double promedio(int lista[],int cantidad){
	double suma = 0;
	for (int i = 0;i < cantidad; i++){
		suma+=lista[i];
	}
	double resultado =suma / cantidad;
	return resultado;
	
}
