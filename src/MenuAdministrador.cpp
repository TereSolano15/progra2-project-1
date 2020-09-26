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

                break;
            case 3:
                metBorrar();
                break;
            case 4:
                metAddMoney();
                break;
            case 5:
                metDrawoutMoney();
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
        cout << "El elemento ha sido ingresado correctamente"<<endl;
        cout << "Quiere ingresar otro producto?(y/n)"<<endl;
        cin >> ingresa;
        if (ingresa == "y"){
            repetir=true;
        }
    }while(repetir==true);
    system("pause");
}

void MenuAdministrador::metModificar() {

}

void MenuAdministrador::metBorrar() {
    string nombre;
    cout << "Ingrese el nombre del rpodructo que quiere eliminar: " <<endl;
    cin >> nombre;
    maquina->eliminar(nombre);
    cout<<"El elemento ha sido eliminado correctamente" <<endl;
    system("pause");
}

void MenuAdministrador::metAddMoney() {
    int money;
    cout << "Ingrese la cantidad de dinero que se ingresra a la maquina: "<< endl;
    maquina->addMoney(money);
    cout << "El dinero ha sido ingresado satisfactoriamente"<<endl;
    system("pause");
}

void MenuAdministrador::metDrawoutMoney() {
    int money;
    cout << "Ingrese la cantidad de dinero que se retirara de la maquina: "<< endl;
    maquina->drawOutMoney(money);
    cout << "El dinero ha sido retirado satisfactoriamente"<<endl;
    system("pause");
}