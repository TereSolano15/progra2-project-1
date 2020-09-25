//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MENUADMINISTRADOR_H
#define MY_PROJECT_NAME_MENUADMINISTRADOR_H
#include "Maquina.h"
#include "Producto.h"
#include "ProductoPerecedero.h"
#include "ProductoNoPerecedero.h"
#include <iostream>
#include <sstream>

class MenuAdministrador {
private:
Maquina* maquina;
Producto producto;
public:
    MenuAdministrador();

    MenuAdministrador(Maquina *maquina, const Producto &producto);

    void mostrar1();

    int menuAdmin();
};


#endif //MY_PROJECT_NAME_MENUADMINISTRADOR_H
