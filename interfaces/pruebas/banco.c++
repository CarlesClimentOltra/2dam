#include <stdlib.h>
#include <iostream>
using namespace std;

#define TAMVECTOR 3

float saldos[TAMVECTOR] = {300, 4000, 600};
string numCuentas[TAMVECTOR] = {"3534534", "4545472", "5363451"};
string titulars[TAMVECTOR] = {"paco", "jose", "manolo"};

class Cuenta {

	public:
	
	float saldo;
	string numCuenta;
	string titular;
	
	Cuenta() {
	
	
	
	}
	
	Cuenta(float saldo, string numCuenta, string titular) {
	
	
	
	}
	
};

void ingresar(Cuenta cP) {
	
	int cantidad;
		
	cout << "Introduce la cantidad a ingresar en la cuenta: ";
	cin >> cantidad;
	cout << endl;
		
	cP.saldo += cantidad;
	
}

void mostrarCuentas (Cuenta *cuentasP[TAMVECTOR]) {

	for (int i=0; i<TAMVECTOR; i++) {
	
		if (cuentasP[i]!=NULL) {
		
			cout << "El titular de la cuenta es: " << cuentasP[i]->titular << " la cuenta es: " << cuentasP[i]->numCuenta << " y tiene un saldo de: " << cuentasP[i]->saldo << endl;
		
		}
	
	}

}

void inicializarCuentas (Cuenta *cuentasP[TAMVECTOR]) {

	for (int i=0; i<TAMVECTOR; i++) {
	
		Cuenta *c;
		c = new Cuenta();
		cuentasP[i] = c;
	
		cuentasP[i]->saldo = saldos[i];
		cuentasP[i]->numCuenta= numCuentas[i];
		cuentasP[i]->titular = titulars[i];
		
	} 

}


Cuenta *cuentas[TAMVECTOR];

int main(int argc, char *argv[]) {
	
	inicializarCuentas(cuentas);
	mostrarCuentas(cuentas);
	
}
