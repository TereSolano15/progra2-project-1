//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MONEDEROELECTRONICO_H
#define MY_PROJECT_NAME_MONEDEROELECTRONICO_H
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <iostream>

class MonederoElectronico {
public:
    MonederoElectronico(int dinero);

    MonederoElectronico();

    int getDinero() const;

    void setDinero(int dinero);

    virtual ~MonederoElectronico();

    virtual string toString();

    string desgloceVuelto(int);
private:
    int dinero;

};


#endif //MY_PROJECT_NAME_MONEDEROELECTRONICO_H
