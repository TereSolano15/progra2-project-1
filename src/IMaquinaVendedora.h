//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_IMAQUINAVENDEDORA_H
#define MY_PROJECT_NAME_IMAQUINAVENDEDORA_H
#include <iostream>
using namespace std;

class IMaquinaVendedora {
public:
    virtual string getNombre() = 0;
    virtual string realizarCompra(string id, int cantidad, int montoPagar) = 0;
    virtual string toString() = 0;
};


#endif //MY_PROJECT_NAME_IMAQUINAVENDEDORA_H
