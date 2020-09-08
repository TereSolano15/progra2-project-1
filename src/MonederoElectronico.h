//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MONEDEROELECTRONICO_H
#define MY_PROJECT_NAME_MONEDEROELECTRONICO_H
using namespace std;
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

    string desgloceVuelto(string& );
private:
    int dinero;

};


#endif //MY_PROJECT_NAME_MONEDEROELECTRONICO_H
