//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "ProductoNoPerecedero.h"

ProductoNoPerecedero::ProductoNoPerecedero() {}

ProductoNoPerecedero::ProductoNoPerecedero(float porcentajeDeDescuento) : porcentajeDeDescuento(
        porcentajeDeDescuento) {}

ProductoNoPerecedero::ProductoNoPerecedero(const string &nombre, float precio, int cantidad,
                                           float porcentajeDeDescuento) : Producto(nombre, precio, cantidad),
                                                                          porcentajeDeDescuento(
                                                                                  porcentajeDeDescuento) {}

ProductoNoPerecedero::~ProductoNoPerecedero() {

}

float ProductoNoPerecedero::getPorcentajeDeDescuento() const {
    return porcentajeDeDescuento;
}

void ProductoNoPerecedero::setPorcentajeDeDescuento(float porcentajeDeDescuento) {
    ProductoNoPerecedero::porcentajeDeDescuento = porcentajeDeDescuento;
}

float ProductoNoPerecedero::getPrecio() {
    return precio;
}