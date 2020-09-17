//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuAdministrador.h"

MenuAdministrador::MenuAdministrador() {}

MenuAdministrador::MenuAdministrador(Maquina *maquina) : maquina(maquina) {}

void MenuAdministrador::mostrar1() {
    int opcion = -1;
    do {
        system("cls");
        opcion = menuAdmin();
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
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion < 6 && opcion > 0);
}

int MenuAdministrador::menuAdmin() {
    int opcion;
    cout << "Esta en el menu de Administrador, elija una opcion:" << endl;
    cout << "1) Insertar producto" << endl;
    cout << "2) Modificar producto" << endl;
    cout << "3) Borrar informacion" << endl;
    cout << "4) Ingresar dinero" << endl;
    cout << "5) Retirar dinero" << endl;
    cout << "6) Volver al menu principal" << endl;
    cin >> opcion;
    return opcion;
}
