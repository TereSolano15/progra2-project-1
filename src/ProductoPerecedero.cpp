//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "ProductoPerecedero.h"


ProductoPerecedero::ProductoPerecedero() {}

ProductoPerecedero::ProductoPerecedero(int dia, int mes, int anno) : dia(dia), mes(mes), anno(anno) {}

ProductoPerecedero::ProductoPerecedero(const string &nombre, int precio, int cantidad, int dia, int mes, int anno)
        : Producto(nombre, precio, cantidad), dia(dia), mes(mes), anno(anno) {}

int ProductoPerecedero::getDia() const {
    return dia;
}

void ProductoPerecedero::setDia(int dia) {
    ProductoPerecedero::dia = dia;
}

int ProductoPerecedero::getMes() const {
    return mes;
}

void ProductoPerecedero::setMes(int mes) {
    ProductoPerecedero::mes = mes;
}

int ProductoPerecedero::getAnno() const {
    return anno;
}

void ProductoPerecedero::setAnno(int anno) {
    ProductoPerecedero::anno = anno;
}

string ProductoPerecedero::fechaDeVencimiento() {
    stringstream output;
    output<<getDia()<<"/"<<getMes()<<"/"<<getAnno();
    return output.str();
}

string ProductoPerecedero::toString() {
    stringstream output;
    output << Producto::toString()<< endl;
    output << "la fecha de vencimiento es:" << fechaDeVencimiento() << endl;
    return output.str();
}
