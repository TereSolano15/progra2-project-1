//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_PRODUCTO_H
#define MY_PROJECT_NAME_PRODUCTO_H
#include <iostream>
#include <sstream>
using namespace std;

class Producto {
protected:
    string nombre;
    float precio;
    int cantidad;
public:
    Producto();

    Producto(const string &nombre, float precio, int cantidad);

    virtual ~Producto();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    float getPrecio() const;

    void setPrecio(float precio);

    int getCantidad() const;

    void setCantidad(int cantidad);

    string toString();
};


#endif //MY_PROJECT_NAME_PRODUCTO_H
