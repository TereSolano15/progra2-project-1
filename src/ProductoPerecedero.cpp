//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "ProductoPerecedero.h"


ProductoPerecedero::ProductoPerecedero() {}

ProductoPerecedero::ProductoPerecedero(float fechaDeVencimiento) : fechaDeVencimiento(fechaDeVencimiento) {}

ProductoPerecedero::ProductoPerecedero(const string &nombre, float precio, int cantidad, float fechaDeVencimiento)
        : Producto(nombre, precio, cantidad), fechaDeVencimiento(fechaDeVencimiento) {}
