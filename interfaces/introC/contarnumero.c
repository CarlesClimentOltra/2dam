#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	int contador = 0;
	int numero = 0;
	
	while (contador<10) {
	
		numero++;
		contador++;
	
		cout << "El número es " << numero << endl;
		
	}

	for (int i=0; i<10; i++) {
	
		if (numero%2==0) {
		
			cout << "El número es " << numero << endl;
		
		}
		
		numero--;
		
	}

}
