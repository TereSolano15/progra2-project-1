//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "Maquina.h"


Maquina::~Maquina() {

    delete producto;
    delete monederoElectronico;

}

int Maquina::getIdentificador() {

    return this->identificador;

}

string Maquina::getNombre() {

return this->nombre;

}

void Maquina::setNombre(string nombre) {

this->nombre = nombre;

}

string Maquina::toString() {
    stringstream s;

    for(int i = 0; i < productoList.size(); i++){

        s<< this->productoList[i]->toString()<<endl;

    }

    return s.str();
}

void Maquina::insert(Producto* producto) {

productoList.push_back(producto);

}

void Maquina::addProvisions(string idProducto, int cantidad) {

    Producto* p1;

    for(int i=0; i < productoList.size(); i++){

        if(productoList[i]->getNombre() == idProducto){

            if(producto->getCantidad() < cantidad){

                throw invalid_argument("la cantidad ingresada es mayor a la que esta en el inventario");

            }else{

                p1->setCantidad(cantidad);
                p1->setNombre(idProducto);
                insert(p1);

            }

        }

    }



}

void Maquina::decreaseProvisions(string idProducto, int cantidad) {

    for(int i=0; i< productoList.size(); i++){

        if(productoList[i]->getNombre() == idProducto){

           productoList[i]->setCantidad(producto->getCantidad() - cantidad);

        }

    }

}

void Maquina::eliminar(string id) {

for(int i=0; i< productoList.size(); i++){

    if(this->productoList[i]->getNombre() == id){

        productoList.erase(productoList.begin()+i);

        }

    }

}

Producto Maquina::consultar(string id) {

    for(int i=0; i< productoList.size(); i++){

        if(productoList[i]->getNombre() == id){

        return *productoList[i];

        }

    }

}

void Maquina::addMoney(int money) {

    if(money >= 0){

        this->monederoElectronico->setDinero(money);

    } else{

        throw invalid_argument("la cantidad ingresada tiene que ser mayor a 0.00");

    }

}

void Maquina::drawOutMoney(int money) {

    if(money <= monederoElectronico->getDinero()){

        monederoElectronico->setDinero(monederoElectronico->getDinero() - money);

    }else{

        throw invalid_argument("No hay suficiente saldo para retirar la cantidad ingresada");

    }

}

string Maquina::realizarCompra(string id, int cantidad, int montoPagar) {
    stringstream s;



    return s.str();
}

Maquina::Maquina(int identificador, const string &nombre, Producto *producto, const vector<Producto *> &productoList,
                 MonederoElectronico *monederoElectronico) : identificador(identificador), nombre(nombre),
                                                             producto(producto), productoList(productoList),
                                                             monederoElectronico(monederoElectronico) {}

Maquina::Maquina() = default;
