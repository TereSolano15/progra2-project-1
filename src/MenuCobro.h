//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MENUCOBRO_H
#define MY_PROJECT_NAME_MENUCOBRO_H
#include "Maquina.h"
#include "MonederoElectronico.h"
#include "ProductoPerecedero.h"
#include "ProductoNoPerecedero.h"
#include <iostream>
#include <sstream>

class MenuCobro {
private:
    MonederoElectronico* monedero;

public:
    MenuCobro();

    MenuCobro(MonederoElectronico *monedero);

    void mostrar2();


    static int menuCobro();

    void metSelectProduct();

};


#endif //MY_PROJECT_NAME_MENUCOBRO_H
