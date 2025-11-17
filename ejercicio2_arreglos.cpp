#include <iostream>
using namespace std;
void mostrar_notas(float lista[]);

int main(){
	float notas[4];
	
	for(int i = 0; i < 4; i++)
	{
		cout << "Ingrese una nota: ";
		cin >> notas[i];
	}
	mostrar_notas(notas);
	
	return 0;
}

void mostrar_notas(float lista[]){
	
	cout << "Sus notas son:"<< endl;
	for (int i = 0; i < 4; i++)
	{
		cout << lista[i] <<endl;
	}
}
