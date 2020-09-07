//
// Created by Fabio Villalobos on 6/9/2020.
//

#ifndef PROGRA2_PROJECT_01_LIONS_INTERFAZ_H
#define PROGRA2_PROJECT_01_LIONS_INTERFAZ_H

#include"MenuPrincipal.h"
#include<string.h>
#include<windows.h>
#include<cstdlib>
#include<time.h>

class Interfaz {
private:

    MenuPrincipal* mostrar;
public:
    Interfaz();
    int generaNumero(int minimo, int maximo);
    void inicio();
    int menuPrincipal();
    void menuNaturalezas();
    void menuHabilidades();
    ~Interfaz();
};


#endif //PROGRA2_PROJECT_01_LIONS_INTERFAZ_H
