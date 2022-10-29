#include <iostream>

using namespace std;

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

int main(int argc, char *argv[]) {

	Cuenta c1, c2;
	
	c1.numCuenta = "0001";
	c2.numCuenta = "0002";
	c1.saldo = 10000;
	c2.saldo = 20000;
	c1.titular = "Barbie";
	c2.titular = "Ken";
	
	mostrarCuenta(c1);
	mostrarCuenta(c2);
	
	c1 = c2;
	
	mostrarCuenta(c1);
	mostrarCuenta(c2);
	
	ingresoCuenta(&c2);
	
	retiroCuenta(c2);
	
	mostrarCuenta(c1);
	mostrarCuenta(c2);
	
	
}
