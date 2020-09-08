//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MENUPRINCIPAL_H
#define MY_PROJECT_NAME_MENUPRINCIPAL_H
#include <iostream>
#include <sstream>
#include "Maquina.h"
#include "ProductoPerecedero.h"
#include "ProductoNoPerecedero.h"
#include "MenuAdministrador.h"
#include "MenuCobro.h"
using namespace std;

class MenuPrincipal {
private:
    MenuAdministrador* menuAdministrador;
    MenuCobro* menuCobro;
public:
    MenuPrincipal(MenuAdministrador *menuAdministrador, MenuCobro *menuCobro);
    void mostrar0();
    int menuPrincip();
};


#endif //MY_PROJECT_NAME_MENUPRINCIPAL_H
