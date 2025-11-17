#include <iostream>
using namespace std;

double calcularDescuento(double precio, double porcentaje);
double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente);

int main(){
	double precio, promocion, cliente, descuent_pro, descuent_cli, Precio_Final;
	cout <<"Ingres el precio dl producto: ";
	cin >> precio;
	cout << "Ingrese el pocentaje de descuento de promocion: ";
	cin >> promocion;
	cout << "Ingrese el porcentaje de decuento por cliente: ";
	cin >> cliente;
	
	descuent_pro = calcularDescuento(precio, promocion);
	descuent_cli = calcularDescuento(precio, cliente);
	Precio_Final = calcularPrecioFinal(precio, promocion, cliente);
	
	cout << "Decuento por promoción: " << descuent_pro << endl;
	cout << "Descuento por cliente: " << descuent_cli << endl;
	cout << "Su valor Final a pagar es de: " <<  Precio_Final << endl;
	return 0;	
}

double calcularDescuento(double precio, double porcentaje){
	double descuento = precio * (porcentaje/100);
	
	return descuento;	
}

double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente){
	double suma= 0;
	double descuento1 = calcularDescuento(precioBase, porcPromo);
	double descuento2 = calcularDescuento(precioBase, porcCliente);
	suma= descuento1 + descuento2;
	double Precio_Final = precioBase - suma;
	
	return Precio_Final;
	
}

