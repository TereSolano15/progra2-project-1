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
                metInsert();
                break;
            case 2:

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

void MenuAdministrador::metInsert() {
    string nombre;
    int precio;
    int cantidad;
    string ingresa;
    bool repetir = false;
    do {
        cout << "Por favor ingrese el nombre del producto:" << endl;
        cin >> nombre;
        cout << "Por favor ingrese el precio del producto:" << endl;
        cin >> precio;
        cout << "Por favor ingrese la cantidad de prodcutos disponibles: " << endl;
        cin >> cantidad;

        Producto producto(nombre, precio, cantidad);
        maquina->insert(producto);

        cout << "Quiere ingresar otro producto?(y/n)"<<endl;
        cin >> ingresa;
        if (ingresa == "y"){
            repetir=true;
        }
    }while(repetir==true);
}


