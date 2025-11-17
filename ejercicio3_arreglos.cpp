#include <iostream>
using namespace std;
int suma_numeros(int lista[]);
void eliminar(int lista[]);


int main(){
	int numeros[5];
	
	for(int i = 0; i < 5; i++)
	{
		cout << "Ingrese un numero: ";
		cin >> numeros[i];
	}
	int suma = suma_numeros(numeros);
	cout <<"La suma es: " << suma<< endl;
	
	eliminar(numeros);
	
	for(int i = 0; i < 5; i++)
	{
		cout << numeros[i] << endl;
	}
	
	return 0;
}
int suma_numeros(int lista[]){
	int suma = 0;
	for(int i = 0; i < 5; i++)
	{
		suma += lista[i];
	}
	
	return suma;
}

void eliminar(int lista[]){
    int posicion;
    cout << "Ingrese la posicion a eliminar (0 a 5)";
    cin >> posicion;

    for(int i = posicion; i < 5; i++){
        lista[i] = lista[i+1];
    }
}
