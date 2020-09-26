//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MONEDEROELECTRONICO_H
#define MY_PROJECT_NAME_MONEDEROELECTRONICO_H
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iostream>
using namespace std;

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
    int dinero{};

};


#endif //MY_PROJECT_NAME_MONEDEROELECTRONICO_H
