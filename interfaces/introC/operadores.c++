#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

class Complejo {
public:
    float real;
    float imaginaria;
    
    Complejo () {}
    
    Complejo (float r, float i) {
    
    		real = r;
    		imaginaria = i;
    	
    }
    
    Complejo operator+ (Complejo dP) {

		return Complejo(real + dP.real, imaginaria + dP.imaginaria);

	}
	
	Complejo operator+ (float f1) {
	
		return Complejo(real + f1, imaginaria);
	
	}
	
	bool operator> (Complejo dP) {

		if (modulo() > dP.modulo())
			return true;
	
		return false;
	
	}
	
	bool operator< (Complejo dP) {

		if (modulo() < dP.modulo())
			return true;
	
		return false;
	
	}
	
	float modulo() {
	
		return sqrtf(powf(imaginaria, 2) + powf(real, 2));
	
	}
	
};

Complejo sumar (Complejo cP, Complejo dP) {

	return Complejo(cP.real + dP.real, cP.imaginaria + dP.imaginaria);

}

void mostrar(Complejo cP){
    cout << "( " << cP.real << " + " << cP.imaginaria << "i )" ;
}

/*Complejo operator+ (Complejo cP, Complejo dP) {

	return Complejo(cP.real + dP.real, cP.imaginaria + dP.imaginaria);

}*/

/*Complejo operator+ (Complejo cP,  float f1) {

	return Complejo(f1 + cP.real, cP.imaginaria);

}*/

Complejo operator+ (float f1, Complejo cP) {

	return Complejo(f1 + cP.real, cP.imaginaria);

}

/*bool operator> (Complejo cP, Complejo dP) {

	if (cP.modulo() > dP.modulo())
		return true;
	
	return false;
	
}

bool operator< (Complejo cP, Complejo dP) {

	if (cP.modulo() < dP.modulo())
		return true;
		
	return false;
	
}*/


int main (int argc, char *argv[] ) {
    Complejo c;
    c.real = 9;
    c.imaginaria = 2;

    mostrar(c);
    cout << endl;
    
    Complejo d(8, -6);
    mostrar(d);
    cout << endl;
    
    Complejo suma;
    
    suma = sumar(c, d);
    
    suma = c+d;
    //suma = 2+c;
    //suma = c+2;
    
    mostrar(suma);
  
    cout << endl;
    
    cout << "c es " << c.modulo() << " de gordo" << endl;
    cout << "d es " << d.modulo() << " de gordo" << endl;    
    cout << "suma es " << suma.modulo() << " de gordo" << endl;    
    
    if (c > d) cout << "c es mayor que d" << endl;
    
    if (c < d) cout << "c es menor que d" << endl;
     
    
}

