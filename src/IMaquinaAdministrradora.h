//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_IMAQUINAADMINISTRRADORA_H
#define MY_PROJECT_NAME_IMAQUINAADMINISTRRADORA_H

#include <sstream>
#include <iostream>
#include "Producto.h"

using namespace std;

class IMaquinaAdministradora {

public:

    virtual int getIdentificador() = 0;
    virtual string getNombre() = 0;
    virtual void setNombre(string nombre) = 0;
    virtual string toString() = 0;
    virtual string insert(Producto* producto) = 0;
    virtual void addProvisions(string idProducto, int cantidad) = 0;
    virtual void decreaseProvisions(string idProducto, int cantidad) = 0;
    virtual void eliminar(string id) = 0;
    virtual Producto* consultar(string id) = 0;
    virtual void addMoney(int) = 0;
    virtual void drawOutMoney(int) = 0;


};



#endif //MY_PROJECT_NAME_IMAQUINAADMINISTRRADORA_H
