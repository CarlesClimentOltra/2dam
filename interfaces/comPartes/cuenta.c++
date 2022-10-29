
#include <iostream>

#include "cuenta.h"

using namespace std;



    Cuenta::Cuenta(){
    
    }
    
    Cuenta::Cuenta(string tit, string numc) {
        numCuenta = numc;
        titular = tit;
        
        saldo = 0 ;
    }

    void Cuenta::ingresar(float cantidad){
        
        saldo += cantidad;
                 
    }
    
    float Cuenta::dameSaldo(){
        return saldo;
    }
    
    bool Cuenta::retirar(float cant) {
    
        if (cant <= saldo)
            saldo -=cant;
        else
            return false;
            
        return true;
    
    }

