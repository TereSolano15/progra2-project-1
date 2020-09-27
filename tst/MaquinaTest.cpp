//
// Created by Fabio Villalobos on 27/9/2020.
//

#include "Maquina.h"
#include "Producto.h"
#include "ProductoNoPerecedero.h"
#include "ProductoPerecedero.h"
#include "gtest/gtest.h"

TEST(MaquinaTestSuite, VerifyMachineProcess){

Producto* p1 = new ProductoNoPerecedero("j",500,9,40);
Maquina maquina;
maquina.insert(p1);
EXPECT_EQ(maquina.insert(p1),"Agregado");

}