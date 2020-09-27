//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuCobro.h"

MenuCobro::MenuCobro() {}

MenuCobro::MenuCobro(MonederoElectronico *monedero, Maquina maquina) : monedero(monedero), maquina(maquina) {}

void MenuCobro::metSelectProduct() {
    string nombre;
    int cantidad;
    int money;
    string verificar;
    do {
        cout << "Seleccione un producto a comprar: " << endl;
        cin >> nombre;
        cout << "Ingrese la cantidad de producto que va a querer: " << endl;
        cin >> cantidad;
        cout << "Ingrese la cantidad de dinero con el que va a pagar: (2000/5000)" << endl;
        cin >> money;

        verificar = maquina.realizarCompra(nombre, cantidad, money);
        if(verificar == "El producto no existe"){
            cout << "El producto no existe, ingrese un valor valido" << endl;
        }else if(verificar == "No hay suficientes productos"){
            cout << "La cantidad de productos es menor a la solicitada, ingrese un valor valido" << endl;
        }else if(verificar == "No tiene suficiente saldo para pagar"){
            cout << "No cuenta con suficiente saldo para pagar, ingrese un valor valido" << endl;
        }else{
            cout << verificar << endl;
        }

    }while(verificar != "El producto no existe" && verificar != "No hay suficientes productos" && verificar != "No tiene suficiente saldo para pagar");
}

void MenuCobro::mostrar2() {
    int opcion = -1;
    do {
        system("cls");
        opcion = menuCobro();
        switch (opcion) {
            case 1:
                maquina.toString();
                break;
            case 2:
                metSelectProduct();
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
