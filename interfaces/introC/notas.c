#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

static const int vector = 50;

int notas[vector];

float calculaMedia(int notasPasadas[vector]) {

	int guardarmedia = 0;

	for (int i=0; i<10; i++) {
	
		guardarmedia += notasPasadas[i];
	
	}

	float resultado = (float)guardarmedia/10;

	return resultado;

}

bool numRepetidos (int numeros[vector]) {

	bool repetidos = false;
	
	for (int i=0; i<vector; i++) {
	
		if (notas[i]==notas[i-1])
			repetidos = true;
		
	}
	
	return repetidos;

}

int main(int argc, char *argv[]) {

	int nrandom;

	for (int i=0; i<vector; i++) 	
		notas[i] = random()%11;
	
	for (int i=0; i<vector; i++) 
		cout << notas[i] << " ";
		
	cout << endl;
	
	float media = calculaMedia(notas); 
	cout << "La media es " << media << endl;	
	
	bool hayRepetido = numRepetidos(notas);
	cout << "Hay algún número repetido? " << hayRepetido << endl;
	

}
