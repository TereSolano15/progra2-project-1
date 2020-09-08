//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MonederoElectronico.h"
MonederoElectronico::MonederoElectronico() {}

MonederoElectronico::MonederoElectronico(int dinero) : dinero(dinero) {}

MonederoElectronico::~MonederoElectronico() {

}

int MonederoElectronico::getDinero() const {
    return dinero;
}

void MonederoElectronico::setDinero(int dinero) {
    MonederoElectronico::dinero = dinero;
}

string MonederoElectronico::desgloceVuelto(int monto) {
    stringstream s;
    int monedas[] = {100,500,1000,2000};
    int veces[4];
    int cantidad = 4;
    for(int i=0; i<cantidad ; i++){
        veces[i] = monto/monedas[i];
        monto = monto%monedas[i];
    }
    for(int i=0; i<cantidad; i++) {
        s<<"Monedas "<<monedas[i]<<" cantidad "<<veces[i]<<endl;
    }
    return s.str();
}