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
    int precio;
    int cantidad;
public:
    Producto();

    Producto(const string &nombre, int precio, int cantidad);

    virtual ~Producto();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    int getPrecio() const;

    void setPrecio(int precio);

    int getCantidad() const;

    void setCantidad(int cantidad);

    string toString();
};


#endif //MY_PROJECT_NAME_PRODUCTO_H
