//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuCobro.h"

MenuCobro::MenuCobro() {}

MenuCobro::MenuCobro(MonederoElectronico *monedero, Maquina *maquina) : monedero(monedero), maquina(maquina) {}

void MenuCobro::metSelectProduct() {

}

void MenuCobro::subMetSelectProduct() {

}

void MenuCobro::mostrar2_0() {
    int opcion = -1;
    do {
        system("cls");
        opcion = subMenuCobro();
        switch (opcion) {
            case 1:
                subMetSelectProduct();
                system("pause");
                break;
            case 2:
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion < 2 && opcion > 0);
}

int MenuCobro::subMenuCobro() {
    int opcion;
    cout << "Ha seleccionado un producto, desea continuar:" << endl;
    cout << "1) Si" << endl;
    cout << "2) No, regresar al menu anterior" << endl;
    cin >> opcion;
    return opcion;
}

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
                metSelectProduct();
                mostrar2_0();
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