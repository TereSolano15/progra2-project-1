//
// Created by Fabio Villalobos on 25/8/2020.
//
#include "MonederoElectronico.h"

MonederoElectronico::MonederoElectronico() = default;

MonederoElectronico::MonederoElectronico(int _dinero) : dinero(_dinero) {}

MonederoElectronico::~MonederoElectronico() = default;

int MonederoElectronico::getDinero() const {
    return dinero;
}

void MonederoElectronico::setDinero(int monto) {
    MonederoElectronico::dinero = monto;
}

string MonederoElectronico::desgloceVuelto(int monto) {
    stringstream output;
    int monedas[] = {100,500,1000,2000};
    int veces[4];
    int cantidad = 4;
    for(int i=0; i<cantidad ; i++){
        veces[i] = monto / monedas[i];
        monto = monto % monedas[i];
    }
    for(int i=0; i<cantidad; i++) {
        output<<"Monedas "<<monedas[i]<<" cantidad "<<veces[i]<<endl;
    }
    return output.str();
}
string MonederoElectronico::toString() {
    stringstream s;
    s<<"Cantidad de dinero: "<<getDinero()<<endl;
    return s.str();
}