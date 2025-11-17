#include <iostream>
using namespace std;
int pares(int lista[],int tamano);

int main(){
	int tamano;
	
	cout << "Ingrese el tamaño del arreglo de numeros enteros:";
	cin >> tamano;
	int lista[tamano];
	for(int i = 0; i < tamano; i++){
		lista[i]=i;
	}
	int suma_pares = pares(lista,tamano);
	cout << "La cantidad de pares en el programa es: " << suma_pares;
	
	return 0;
}

int pares(int lista[],int tamano){
	
	int suma = 0;
	for (int i = 0; i < tamano; i++){
		if(lista[i] % 2==0)
		{
			suma+=1;
		}
	}
	return suma;
}
