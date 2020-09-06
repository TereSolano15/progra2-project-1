//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_PRODUCTOPERECEDERO_H
#define MY_PROJECT_NAME_PRODUCTOPERECEDERO_H
#include "Producto.h"

class ProductoPerecedero: public Producto{
private:
    int dia;
    int mes;
    int anno;
public:
    ProductoPerecedero();

    ProductoPerecedero(int dia, int mes, int anno);

    ProductoPerecedero(const string &nombre, float precio, int cantidad, int dia, int mes, int anno);

    int getDia() const;

    void setDia(int dia);

    int getMes() const;

    void setMes(int mes);

    int getAnno() const;

    void setAnno(int anno);

    string fechaDeVencimiento();

    string toString();
};


#endif //MY_PROJECT_NAME_PRODUCTOPERECEDERO_H
