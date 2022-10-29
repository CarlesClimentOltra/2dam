#include <iostream>

using namespace std;

void incrementar(int *numero) {

	*numero = *numero+1;
	
}

int *maximo(int *numero1, int *numero2) {

	if(*numero1>*numero2)
		return numero1;
	else
		return numero2;

}

int &minimo(int &numero1, int &numero2) {

	if(numero1<numero2)
		return numero1;
	else
		return numero2;

}

int main(int argc, char *argv[]) {

	int i = 9; //es un entero
	int j=10;

	//int *max;
	//max = maximo(&j, &i);
	//(*max)++;
	//(*maximo(&j, &i))++;
	
	//cout << "j es igual a " << j << " i es igual a " << i << endl;  
	
	minimo(i, j)--;
	
	cout << "j es igual a " << j << " i es igual a " << i << endl;
	  	

}
