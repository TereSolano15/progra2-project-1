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

string Maquina::insert(Producto* producto) {

productoList.push_back(producto);
 return "Agregado";
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



    if(consultar(idProducto) != nullptr) {

        Producto* p1 = consultar(idProducto);

        if (p1->getCantidad() < cantidad) {

            p1->setCantidad(p1->getCantidad() - p1->getCantidad());
            throw invalid_argument(
                    "hay menos unidades del productos ingresados, se disminuyo la cantidad de productos");

        } else {

            p1->setCantidad(p1->getCantidad()- cantidad);

        }

    }

    throw invalid_argument("El producto a buscar no fue encontrado");

}

void Maquina::eliminar(string id) {

for(int i=0; i< productoList.size(); i++){

    if(this->productoList[i]->getNombre() == id){

        productoList.erase(productoList.begin()+i);

        }

    }

}

Producto* Maquina::consultar(string id) {

    for(int i=0; i< productoList.size(); i++){

        if(productoList[i]->getNombre() == id){

        return productoList[i];

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

    stringstream output;

    Producto* p1  = consultar(id);

    int vueltoAux = 0;

    if(p1 == nullptr){

        output<<"El producto no existe" <<endl;

    } else if((p1->getCantidad() < cantidad)){

        output<<"No hay suficientes productos";

    }  else if(montoPagar < (p1->getPrecio() * cantidad)){

        output<<"No tiene suficiente saldo para pagar";

    } else if(montoPagar == 2000 || montoPagar == 5000){

        vueltoAux = montoPagar - (p1->getPrecio() * cantidad);

        monederoElectronico->setDinero(p1->getPrecio() * cantidad);

        decreaseProvisions(id, cantidad);

        output<<"Nombre del producto comprado"<< p1->getNombre() <<endl;
        output<<monederoElectronico->desgloceVuelto(vueltoAux);

    }

    return output.str();
}

Maquina::Maquina(int identificador, const string &nombre, Producto *producto, const vector<Producto *> &productoList,
                 MonederoElectronico *monederoElectronico) : identificador(identificador), nombre(nombre),
                                                             producto(producto), productoList(productoList),
                                                             monederoElectronico(monederoElectronico) {}

Maquina::Maquina() = default;
