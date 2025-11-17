#include <iostream>
using namespace std;
void multiplicar(int valores[],int numero);

int main(){
	int numero;
	int valores[5] = {4,6,6,3,5};
	cout << "Ingrese un numero a multiplicar: ";
	cin >> numero;
	multiplicar(valores,numero);
	
	return 0;
	
}

void multiplicar(int valores[],int numero){
	cout << "La multiplicacion es" << endl;
	for (int i = 0; i < 5 ;i++){
		int multiplicacion = numero * valores[i];
		cout << numero << " * " << valores[i] << " = " << multiplicacion << endl; 
	}
	 
}
