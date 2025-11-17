#include <iostream>
using namespace std;
void numeros(int lista[]);


int main (){
	int lista[5];
	
	for (int i = 0; i < 5; i++){
		cout <<"Ingrese un numero: " <<endl;
		cin >> lista[i];
	}
	numeros(lista);
	return 0;
}

void numeros(int lista[])
{
	for (int j = 0; j < 5; j++){
		cout << j+1 <<": " << lista[j] <<endl;
	} 
}
