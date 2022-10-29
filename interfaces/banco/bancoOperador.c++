#include <stdlib.h>
#include <iostream>
using namespace std;

#define BORRARPANTALLA for (int i=0; i<10; i++) cout << endl;

#define TAMVECTOR 5

string nombres[TAMVECTOR]={"juan", "perico","andres","fulano","vengano"};
string numCuentas[TAMVECTOR]={"100","101","102","103","104"};

class Cuenta {

public:
     float saldo;
     string numCuenta;
     string titular;

    Cuenta(){};
    Cuenta(string tit, string numc) {
        numCuenta = numc;
        titular = tit;
        
        saldo = 0 ;
    }

    void ingresar(float cantidad){
        
        saldo += cantidad;
                 
    }
    
    float dameSaldo(){
        return saldo;
    }
    
    bool retirar(float cant) {
    
        if (cant <= saldo)
            saldo -=cant;
        else
            return false;
            
        return true;
    
    }
    
    void operator<< (Cuenta &pagadora) {
    
    	ingresar(pagadora.saldo);
    	pagadora.retirar(pagadora.saldo);
    
    }

};

bool retiroCuenta ( Cuenta *cR) {

	float cantidad;
	
	cout << "cantidad a retirar:";
	cin >> cantidad; 
	
	if (cR!=NULL) 
		if (cR->retirar(cantidad))
			return true;
			
	return false;
}

void ingresoCuenta( Cuenta *cI  ) {

    float cantidad;
    
    cout << "cantidad a ingresar:";
    cin >> cantidad;
    
//    (*cI).ingresar(cantidad);
    cI->ingresar(cantidad);
    
}

void mostrar(Cuenta c) {

    cout << "Titular: " << c.titular ;
    cout << " NumC: " << c.numCuenta ;
    cout << " saldo: " << c.dameSaldo() << endl;
    
}

Cuenta * cuentas[TAMVECTOR];

void mostrarTodasCuentas(Cuenta *cuentasP[5]) {
    
    for (int i=0; i < TAMVECTOR; i++)
    	if (cuentas[i]!=NULL)
        	cout << cuentasP[i]->numCuenta << "\t" ;
    cout << endl;
    
    for (int i=0; i < TAMVECTOR; i++)
    	if (cuentas[i]!=NULL)
        	cout << cuentasP[i]->titular << "\t" ;
    cout << endl;
    
    for (int i=0; i < TAMVECTOR; i++)
    	if (cuentas[i]!=NULL)
        	cout << cuentasP[i]->saldo << "\t" ;
    cout << endl;


}


void inicializar(Cuenta *cuentasP[5]) {

	

    for (int i= 0 ; i< 3 ; i++) {
        Cuenta * nueva ;
        nueva = new Cuenta();
        cuentas[i] = nueva;

        (*cuentasP[i]).saldo = 0;
        cuentasP[i]->titular = nombres[i];
        cuentasP[i]->numCuenta = numCuentas[i];
    }

}

Cuenta *seleccionar(Cuenta *cuentasP[TAMVECTOR]) {

	string guardarCuenta = "";

	cout << "Seleccione un numero de cuenta para acceder a la cuenta" << endl;
	cin >> guardarCuenta;
	
	for (int i=0; i<TAMVECTOR; i++) {
		cout << "Examinando elemento " << i << endl;
		if(cuentasP[i]!=NULL)
			if (guardarCuenta == cuentasP[i]->numCuenta) {
				cout << "encontrado!! " << guardarCuenta << " elemento " << i << endl;
				return cuentasP[i];		
			}
	}

	return NULL;

}

void menu(void) {

	BORRARPANTALLA
	cout << "        1 - Elegir Cuenta " << endl;
    cout << "        2 - Ingresar " << endl;
    cout << "        3 - Reintegrar " << endl;
    cout << "        4 - Ver saldo " << endl;
    cout << "        b - Borrar Cuenta " << endl;
    cout << "        g - Agregar Cuentas " << endl;
    cout << "        5 - Salir a MSDOS " << endl;
    BORRARPANTALLA


}

void borrar (Cuenta *cuentaS, Cuenta *cuentasP[TAMVECTOR]) {

	for (int i=0; i<TAMVECTOR; i++) {
		
		if (cuentasP[i]==cuentaS) 
		
				delete cuentaS;
				cuentasP[i] = NULL;
				return;
	}

}

int main(int argc, char *argv[]) {
	
	Cuenta c1, c2;
	
	c1.saldo = 100;
	c1.titular = "cobrador";
	c2.saldo = 100;
	c2.titular = "pagador";
	
	c1 << c2;
	
	mostrar(c2);
	mostrar(c1);
	
	return 0;
	
	char opcion = '0';
	
	for (int i=0; i<TAMVECTOR; i++)
		cuentas[i] = NULL;
		
	inicializar(cuentas);
	
	Cuenta * cuentaSeleccionada = NULL;
	
	while (opcion!='5') {
	
		menu();
		cin >> opcion;
		
		switch(opcion) {
		
			case '1': 
				cuentaSeleccionada = seleccionar(cuentas);
				break;
			
			case '2': 
				ingresoCuenta(cuentaSeleccionada);
				mostrarTodasCuentas(cuentas);
				break;
				
			case '3':
				retiroCuenta(cuentaSeleccionada);
				mostrarTodasCuentas(cuentas);
				break;
				
			case '4':
				mostrarTodasCuentas(cuentas);
				break;
				
			case 'b': 
				borrar(cuentaSeleccionada, cuentas);
				break;
				
			case '5': exit(0);	
				
			
		};
	
	}
	
	
}
