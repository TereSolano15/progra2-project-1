//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuCobro.h"

MenuCobro::MenuCobro() {}

MenuCobro::MenuCobro(MonederoElectronico *monedero, Maquina *maquina) : monedero(monedero), maquina(maquina) {}

void MenuCobro::metSelectProduct() {
    string nombre;
    int cantidad;
    int money;
    string confirmar;
    bool verificar = false;
    cout << "Seleccione un producto a comprar: "<<endl;
    cin >> nombre;
    maquina->consultar(nombre);

    cout << "Desea continuar?(y/n)"<<endl;
    cin >> confirmar;
    if(confirmar == "y"){
        verificar=true;
    }

    while(verificar == true) {
        cout << "Ya que ha querido continuar, por favor ingrese la cantidad de producto que va a querer: " << endl;
        cin >> cantidad;
        cout <<"Ingrese la cantidad de dinero con el que va a pagar:"<<endl;
        cin >> money;

        maquina->realizarCompra(nombre, cantidad, money);
    }
}

void MenuCobro::mostrar2() {
    int opcion = -1;
    do {
        system("cls");
        opcion = menuCobro();
        switch (opcion) {
            case 1:
                maquina->toString();
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
void MenuCobro::subMetSelectProduct(){

}
void MenuCobro::mostrar2_0(){

}
int MenuCobro::subMenuCobro(){
return 0;
}