#include <iostream>
using namespace std;


void recargar(double &saldo, double monto);
bool pagar(double &saldo, double tarifa);
void mostrarEstado(double saldo, int pasadas);

int main() {

    double saldo = 0;
    int pasadas = 0;
    double monto;
    double tarifa = 0.45;

    cout << "===== TARJETA METRO/BUS QUITO =====" << endl;
    cout << "Saldo actual: $" << saldo << endl;

    cout << "Ingrese monto a recargar: ";
    cin >> monto;

    recargar(saldo, monto);
    cout << "Recarga exitosa. Saldo actual: $" << saldo << endl;


    cout << "Pagando pasaje de $0.45 ..." << endl;
    if(pagar(saldo, tarifa)){
        pasadas++;
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
    } else {
        cout << "Saldo insuficiente." << endl;
    }

    cout << "Pagando pasaje de $0.45 ..." << endl;
    if(pagar(saldo, tarifa)){
        pasadas++;
        cout << "Pago exitoso. Saldo actual: $" << saldo << endl;
    } else {
        cout << "Saldo insuficiente." << endl;
    }


    mostrarEstado(saldo, pasadas);

    cout << "===================================" << endl;

    return 0;
}


void recargar(double &saldo, double monto){
    saldo = saldo + monto;
}

bool pagar(double &saldo, double tarifa){
    if(saldo >= tarifa){
        saldo = saldo - tarifa;
        return true;
    } else {
        return false;
    }
}

void mostrarEstado(double saldo, int pasadas){
    cout << "Pasadas realizadas: " << pasadas << endl;
    cout << "Saldo final: $" << saldo << endl;
}

