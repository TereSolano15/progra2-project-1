//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "Maquina.h"

Maquina::Maquina(int identificador, const string &nombre, Producto *producto, const vector<Producto> &productoList,
                 MonederoElectronico *monederoElectronico) : identificador(identificador), nombre(nombre),
                                                             producto(producto), productoList(productoList),
                                                             monederoElectronico(monederoElectronico) {}

Maquina::~Maquina() {

}

int Maquina::getIdentificador() {



}

string Maquina::getNombre() {



}

void Maquina::setNombre() {



}

string Maquina::toString() {
    stringstream s;


    return s.str();
}

void Maquina::insert(Producto *producto) {



}

void Maquina::addProvisions(string idProducto, int cantidad) {


}

void Maquina::decreaseProvisions(string idProducto, int cantidad) {



}

void Maquina::eliminar(string id) {



}

Producto Maquina::consultar(string id) {



}

void Maquina::addMoney() {



}

void Maquina::drawOutMoney() {



}

string Maquina::realizarCompra(string id, int cantidad, int montoPagar) {



}

Maquina::Maquina() {}
