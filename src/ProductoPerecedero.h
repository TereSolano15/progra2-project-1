//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_PRODUCTOPERECEDERO_H
#define MY_PROJECT_NAME_PRODUCTOPERECEDERO_H
#include "Producto.h"

class ProductoPerecedero: public Producto{
private:
string fechaDeVencimiento;
public:
    ProductoPerecedero();

    ProductoPerecedero(float fechaDeVencimiento);

    ProductoPerecedero(const string &nombre, float precio, int cantidad, float fechaDeVencimiento);

};


#endif //MY_PROJECT_NAME_PRODUCTOPERECEDERO_H
