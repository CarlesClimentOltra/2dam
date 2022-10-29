#include <iostream>

using namespace std;


void decrementar(int &numero) {

	numero = numero-1;

}

int main(int argc, char *argv[]) {
	
	int original = 9;
	
	int &ref = original;
	ref++;
	original++;
	
	cout << "original vale " << original << endl;
	
	int j=7;
	
	decrementar(j);
	
	cout << "j vale " << j << endl;

}	
