//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuAdministrador.h"

MenuAdministrador::MenuAdministrador() {}



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

void MenuAdministrador::mostrar1() {
    int opcion ;
    do {
        system("cls");
       opcion = menuAdmin();
        switch (opcion) {
            case 1:
                metInsert();
                system("cls");
                break;
            case 2:
                metModificar();
                system("cls");
                break;
            case 3:
                metBorrar();
                system("cls");
                break;
            case 4:
                metAddMoney();
                system("cls");
                break;
            case 5:
                metDrawoutMoney();
                system("cls");
                break;
            case 6:
                break;
            default:
                cout << "Opcion invalida" << endl;
        }
    } while (opcion < 6 && opcion > 0);
}


void MenuAdministrador::metInsert() {
    string nombre;
    string tipoProducto;
    float porcentajeDeDescuento;
    int dia;
    int mes;
    int anno;
    int precio;
    int cantidad;
    Maquina maquina;
    bool repetir = false;
    do {
        cout << "Desea ingresar un producto perecedero o no perecedero?(pp/pnp)" << endl;
        cin >> tipoProducto;
        if (tipoProducto == "pp") {
            cout << "Por favor ingrese el nombre del producto:" << endl;
            cin >> nombre;
            cout << "Por favor ingrese el precio del producto:" << endl;
            cin >> precio;
            cout << "Por favor ingrese la cantidad de prodcutos disponibles: " << endl;
            cin >> cantidad;
            cout << "Por favor ingrese el año que caduca: " << endl;
            cin >> anno;
            cout << "Por favor ingrese el mes que caduca: " << endl;
            cin >> mes;
            cout << "Por favor ingrese el dia que caduca: " << endl;
            cin >> dia;

            Producto *producto1 = new ProductoPerecedero(nombre, precio, cantidad, dia, mes, anno);
            maquina.insert(producto1);
            cout<<"El poducto ha sido agregado con exito"<< endl;
        } else if (tipoProducto == "pnp") {
            cout << "Por favor ingrese el nombre del producto:" << endl;
            cin >> nombre;
            cout << "Por favor ingrese el precio del producto:" << endl;
            cin >> precio;
            cout << "Por favor ingrese la cantidad de prodcutos disponibles: " << endl;
            cin >> cantidad;
            cout << "Por favor ingrese el procentaje de descuento que tendra el producto: " << endl;
            cin >> porcentajeDeDescuento;
            Producto *producto2 = new ProductoNoPerecedero(nombre, precio, cantidad, porcentajeDeDescuento);
            maquina.insert(producto2);
            cout<<"El poducto ha sido agregado con exito"<< endl;
        } else {
            cout << "Por favor ingrese un valor valido" << endl;
        }
    } while (tipoProducto != "pp" && tipoProducto != "pnp");
}

void MenuAdministrador::metModificar() {
    Maquina maquina;
    string nombre;
    string modificar;
    int cantidad;
    do {

        cout << "Ingrese el producto que quiere modificar: " << endl;
        cin >> nombre;
        if(maquina.consultar(nombre)== nullptr){
            cout << "El producto no existe, por favor ingrese correctamente"<<endl;
        }else {
            do {
                cout << "Desea agregar o disminuir provisiones de este producto? (add/rest)" << endl;
                cin >> modificar;
                if (modificar == "add") {
                    cout << "Ingrese la cantidad que quiere agregar del producto: " << endl;
                    cin >> cantidad;
                    maquina.addProvisions(nombre, cantidad);
                } else if (modificar == "rest") {
                    cout << "Ingrese la cantidad que quiere disminuir del producto: " << endl;
                    cin >> cantidad;
                    maquina.decreaseProvisions(nombre, cantidad);
                } else {
                    cout << "Ingrese una palabra valida" << endl;
                }
            } while (modificar != "add" && modificar != "rest");
        }
    }while(maquina.consultar(nombre)== nullptr);
}

void MenuAdministrador::metBorrar() {
    Maquina maquina;
    string nombre;
    cout << "Ingrese el nombre del rpodructo que quiere eliminar: " <<endl;
    cin >> nombre;
    maquina.eliminar(nombre);
    cout<<"El elemento ha sido eliminado correctamente" <<endl;
    system("pause");
}

void MenuAdministrador::metAddMoney() {
    Maquina maquina;
    int money = 0;
    cout << "Ingrese la cantidad de dinero que se ingresara a la maquina: "<< endl;
    cin>>money;
    maquina.addMoney(money);
    cout << "El dinero ha sido ingresado satisfactoriamente"<<endl;
    system("pause");
}

void MenuAdministrador::metDrawoutMoney() {
    Maquina maquina;
    int money;
    cout << "Ingrese la cantidad de dinero que se retirara de la maquina: "<< endl;
    cin>>money;
    maquina.drawOutMoney(money);
    cout << "El dinero ha sido retirado satisfactoriamente"<<endl;
    system("pause");
}