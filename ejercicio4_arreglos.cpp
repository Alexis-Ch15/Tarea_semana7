#include <iostream>
using namespace std;
int valor (int lista[],int numero);

int main(){
	int numero;
	cout << "Escriba la cantidad de numeros a escribir: ";
	cin >> numero;
	int lista[numero];
	
	for (int i= 0; i < numero; i++){
		cout << "Ingrese un numero: "; 
		cin >> lista[i];
	}
	int mayor = valor(lista,numero);
	cout << "EL numero mayor es: " << mayor;
	return  0;
}

int valor (int lista[],int numero){
	int mayor = lista[0];
	for (int i = 1; i < numero; i++){
		if (lista[i] > mayor){
			
			mayor = lista[i];
		}
	}
	return mayor;
}
