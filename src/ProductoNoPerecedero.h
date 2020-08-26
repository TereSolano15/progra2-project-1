//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_PRODUCTONOPERECEDERO_H
#define MY_PROJECT_NAME_PRODUCTONOPERECEDERO_H
#include "Producto.h"

class ProductoNoPerecedero : public Producto {
private:
    float porcentajeDeDescuento;
public:
    ProductoNoPerecedero();

    ProductoNoPerecedero(float porcentajeDeDescuento);

    ProductoNoPerecedero(const string &nombre, float precio, int cantidad, float porcentajeDeDescuento);

    virtual ~ProductoNoPerecedero();

    float getPorcentajeDeDescuento() const;

    void setPorcentajeDeDescuento(float porcentajeDeDescuento);

    float getPrecio();
};


#endif //MY_PROJECT_NAME_PRODUCTONOPERECEDERO_H
