//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MonederoElectronico.h"
MonederoElectronico::MonederoElectronico() {}

MonederoElectronico::MonederoElectronico(int dinero) : dinero(dinero) {}

MonederoElectronico::~MonederoElectronico() {

}

int MonederoElectronico::getDinero() const {
    return dinero;
}

void MonederoElectronico::setDinero(int dinero) {
    MonederoElectronico::dinero = dinero;
}
string MonederoElectronico::desgloceVuelto(string &) {

}

//El monedero electrónico se encarga de manejar
//el dinero de la máquina. Dentro de esta clase
//existe un método que se encarga de calcular
//el vuelto a ser entregado al usuario cuando
//este cancela (string desgloceVuelto()) este
//método debe seguir el algoritmo voraz (greedy algorithm)
//para devolver la menor cantidad de monedas cuando se
//calcula el vuelto. Este método devuelve en texto el detalle completo del desglose.
//Los productos tienen precios cerrados con valores definidos entre
// 200, 300, 700. El cliente normalmente paga con billetes de 2000 o 5000.
// Por lo que la máquina debe calcular el desgloce en monedas de 100, monedas de 500,
// billetes de 1000 y billetes de 2000 cuál es la mejor forma de entregar el vuelto
// al cliente, este detalle es lo que debe devolver el método.