#include <iostream>

using namespace std;

string nombres[5] = {"carles", "jose", "pablo", "paco", "hugo"};
string numCuentas[5] = {"100", "101", "102", "103", "104"}; 
float saldos[5] = {6000, 4500, 15000, 100, 10000000};

class Cuenta {

public:
	float saldo;
	string numCuenta;
	string titular; 
	
	Cuenta() {
	
	}
	
	Cuenta(string tit, string numc) {
	
		numCuenta = numc;
		titular = tit;
		
	}
	
	void ingresar(float cantidad) {
		
		saldo += cantidad;	
	
	} 
	
	bool retirar(float cantidad) {
	
		if (cantidad>saldo)
			return false;
			
		else 
			saldo -= cantidad;
			return true;
	}
	
	float dameSaldo() {
	
		return saldo;
	
	}

};



void ingresoCuenta(Cuenta *cI) {

	float cantidad;

	//Leemos un número
	cout << "Por favor, introduce la cantidad a ingresar: ";
	cin >> cantidad;
	
	(*cI).ingresar(cantidad);
	//cI->ingresar(cantidad); La flecha indica que lo que hay antes es un puntero. Es otra forma.

}

void retiroCuenta(Cuenta &cI) {

	float cantidad;

	//Leemos un número
	cout << "Por favor, introduce la cantidad a retirar: ";
	cin >> cantidad;
	
	(cI).retirar(cantidad);


}

void mostrarCuenta(Cuenta c) {

	cout << "La cuenta tiene un numero de cuenta " << c.numCuenta << endl;
	cout << " Un saldo de " << c.saldo << endl;
	cout <<" Y su titular es " << c.titular << endl;
	cout << "" << endl;

}

Cuenta *cuentas[5];

void preInicializar(Cuenta *cuentas[5]) {

	for (int i=0; i<5; i++) {
	
		Cuenta * nueva;
		nueva = new Cuenta();
		cuentas[i] = NULL;
	
	}

}

void inicializar(Cuenta *cuentasP[5]) {

	for (int i=0; i<3; i++) {

		
		Cuenta * nueva;
		nueva = new Cuenta();
		cuentas[i] = nueva;
	
		(*cuentasP[i]).saldo = 0;
		cuentasP[i]->titular = nombres[i];
		cuentasP[i]->numCuenta = numCuentas[i];
	
	}

}

void mostrarTodasCuentas(Cuenta *cuentasP[5]) {

	for (int i=0; i<5; i++) {
	
		if (cuentasP[i]!=NULL) {
		
			//for (int i=0; i<5; i++) 	
				cout << cuentasP[i]->numCuenta << "\t";
			cout << endl;
	
			//for (int i=0; i<5; i++) 	
				cout << cuentasP[i]->titular << "\t";
			cout << endl;
	
			//for (int i=0; i<5; i++) 	
				cout << cuentasP[i]->saldo << "\t";
			cout << endl;
		
		}
	
	}
 
	

}

int main(int argc, char *argv[]) {

	/*for(int i=0; i<5; i++) {
	
		cuentas[i].titular = nombres[i];
		cuentas[i].numCuenta = numCuentas[i];
		cuentas[i].saldo = saldos[i];
	
	} 
	
	for(int i=0; i<5; i++) {
	
		mostrarCuenta(cuentas[i]);
	
	}*/
	
	for (int i=0; i<5; i++) 
		cuentas[i] = NULL;
		
	inicializar(cuentas);
	mostrarTodasCuentas(cuentas);
	
	
	
	
}
