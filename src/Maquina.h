//
// Created by Fabio Villalobos on 25/8/2020.
//

#ifndef MY_PROJECT_NAME_MAQUINA_H
#define MY_PROJECT_NAME_MAQUINA_H
#include <sstream>
#include <conio.h>
#include <iostream>
#include <vector>
#include "IMaquinaAdministrradora.h"
#include "IMaquinaVendedora.h"
#include "MonederoElectronico.h"


using namespace std;
class Maquina : public  IMaquinaAdministradora, IMaquinaVendedora{

private:

    int identificador{};
    string nombre;
    Producto* producto{};
    vector<Producto*> productoList;
    MonederoElectronico* monederoElectronico{};

public:

    Maquina(int identificador, const string &nombre, Producto *producto, const vector<Producto *> &productoList,
            MonederoElectronico *monederoElectronico);

    Maquina();

   // override of IMaquinaAdministradora
    int getIdentificador() override;
    string getNombre() override;
    void setNombre(string nombre) override;
    string toString() override;
    void insert(Producto* producto)  override;
    void addProvisions(string idProducto, int cantidad) override;
    void decreaseProvisions(string idProducto, int cantidad) override;
    void eliminar(string id) override;
    Producto* consultar(string id) override;
    void addMoney(int) override;
    void drawOutMoney(int) override;

    //override of IMaquinaVendedora
    string realizarCompra(string id, int cantidad, int montoPagar) override;

    virtual ~Maquina();
};


#endif //MY_PROJECT_NAME_MAQUINA_H
