//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(MenuAdministrador *menuAdministrador, MenuCobro *menuCobro) : menuAdministrador(
        menuAdministrador), menuCobro(menuCobro) {}


void MenuPrincipal::mostrar0() {
    int opcion = -1;
    do {
        system("cls");
        opcion = menuPrincip();
        switch (opcion) {
            case 1:
                menuAdministrador->mostrar1();
                break;
            case 2:
               // met12();
                system("pause");
                break;
            case 3:
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion < 3 && opcion > 0);
}

int MenuPrincipal::menuPrincip() {
    int opcion;
    cout << "Bienvenido, elija una opcion:" << endl;
    cout << "1) Menu Administrador" << endl;
    cout << "2) Menu Cobro" << endl;
    cout << "3) Salir" << endl;
    cin >> opcion;
    return opcion;
}

MenuPrincipal::MenuPrincipal() {}
