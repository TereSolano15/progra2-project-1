//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "Producto.h"

Producto::Producto() {}

Producto::Producto(const string &nombre, int precio, int cantidad) : nombre(nombre), precio(precio),
                                                                       cantidad(cantidad) {}

Producto::~Producto() {

}

const string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;
}

int Producto::getPrecio() const {
    return precio;
}

void Producto::setPrecio(int precio) {
    Producto::precio = precio;
}

int Producto::getCantidad() const {
    return cantidad;
}

void Producto::setCantidad(int cantidad) {
    Producto::cantidad = cantidad;
}


string Producto::toString() {
    stringstream s;
    s << "El nombre del producto es: " << getNombre()<< endl;
    s << "El precio de " << getNombre() << " es: " << getPrecio()<< endl;
    s << "La cantidad de " << getNombre() << " que hay es: " << getCantidad() << endl;
    return s.str();
}



