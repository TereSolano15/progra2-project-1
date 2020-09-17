//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuCobro.h"

MenuCobro::MenuCobro() {}

MenuCobro::MenuCobro(MonederoElectronico *monedero, Maquina *maquina) : monedero(monedero), maquina(maquina) {}

void MenuCobro::mostrar2() {
    int opcion = -1;
    do {
        system("cls");
        opcion = menuCobro();
        switch (opcion) {
            case 1:
                //met11();
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

int MenuCobro::menuCobro() {
    int opcion;
    cout << "Esta en el menu de Cobro, elija una opcion:" << endl;
    cout << "1) Mostrar Producto" << endl;
    cout << "2) Seleccionar Producto" << endl;
    cout << "3) Regresar al menu principal" << endl;
    cin >> opcion;
    return opcion;
}