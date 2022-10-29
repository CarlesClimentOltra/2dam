
#include <iostream>

using namespace std;

class Cuenta {

public:
     float saldo;
     string numCuenta;
     string titular;

    Cuenta();
    Cuenta(string tit, string numc);

    void ingresar(float cantidad);
    
    float dameSaldo();
    
    bool retirar(float cant);

};
