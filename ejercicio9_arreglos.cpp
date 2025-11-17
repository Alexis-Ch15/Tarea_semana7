#include <iostream>
using namespace std;
void datos(string &nombre, double &precio,int &cantidad);
double calculo_subtotal(double precio, int cantidad);
void descuentos(double subtotal, int cantidad, double&total, double &descuento_aplicado);
void mostrarFactura(string nombre, double precio, int cantidad, double subtotal, double descuento_aplicado, double total);

int main(){
	string nombre;
	double precio;
	int cantidad;
	
	datos(nombre,precio,cantidad);
	
	double subtotal =  calculo_subtotal(precio,cantidad);
	
	double total = 0, descuento_aplicado = 0;
	
    descuentos(subtotal, cantidad, total, descuento_aplicado);
    mostrarFactura(nombre, precio, cantidad, subtotal, descuento_aplicado, total);


}

void datos(string &nombre, double &precio,int &cantidad){
	cout << "Ingrese el nombre del producto:";
	cin >>nombre; 
	cout << "Ingrese el precio del producto: ";
	cin >> precio;
	cout << "Ingrese las cantidades a llevar: ";
	cin >> cantidad;
}
double calculo_subtotal(double precio, int cantidad){
	return precio*cantidad;
}


void descuentos(double subtotal, int cantidad, double&total, double &descuento_aplicado){
	double descuento = 0;
	if (cantidad >= 3){
		descuento = subtotal*0.15;
	}else if(cantidad == 2){
		descuento = subtotal*0.10;
	}
		
	if (cantidad > 200){
		descuento = descuento+ subtotal*(0.05);
    }
    descuento_aplicado = descuento;
    total =subtotal - descuento;
}

void mostrarFactura(string nombre, double precio, int cantidad, double subtotal, double descuento_aplicado, double total){
	cout << "\n--- FACTURA ---\n";
    cout << "Producto: " << nombre << endl;
    cout << "Precio unitario: $" << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuentos aplicados: $" << descuento_aplicado << endl;
    cout << "Total a pagar: $" << total << endl;
}


