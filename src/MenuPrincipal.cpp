//
// Created by Fabio Villalobos on 25/8/2020.
//

#include "MenuPrincipal.h"

void MenuPrincipal::saltoLinea()
{
    cout << "\t" << char(186) << "\t\t\t\t\t\t\t\t\t\t\t\t     " << char(186) << endl;
}

void MenuPrincipal::construirLinea()
{
    for (int i = 0; i < 100; i++)
    {
        cout << char(205);
        Sleep(5);
    }
}

void MenuPrincipal::mostrarMenuPrincipal()
{
    cout <<"\n\t"<< char(201);
    construirLinea();
    cout << char(187) << endl;
    saltoLinea();
    cout <<"\t"<<char(186)<<"\t\t\t\t\t"<< char(176) <<char(176) <<char(176)<<"BATTLEMAINIA"<< char(176)<<char(176)<< char(176)<<"\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    saltoLinea();
    cout <<"\t"<<char(186) << "\t\t [1]\t\t Admimistrar Naturalezas\t\t\t\t\t     " << char(186)<<endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [2]\t\t Admimistrar Habilidades de Batalla\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [3]\t\t Admimistrar Luchadores\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [4]\t\t Emular Batalla\t\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [5]\t\t Salir\t\t\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(200);
    construirLinea();
    cout << char(188) << endl;
}


void MenuPrincipal::mostrarMenuNaturalezas()
{
    cout << "\n\t" << char(201);
    construirLinea();
    cout << char(187) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t\t\t\t" << "{Naturalezas}"  << "\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [1]\t\t Ingresar Naturaleza\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [2]\t\t Administrar Interacciones\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [3]\t\t Mostrar todas las Naturalezas\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [4]\t\t Regresar al Menu Principal\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(200);
    construirLinea();
    cout << char(188) << endl;
}

void MenuPrincipal::mostrarMenuHabilidades()
{
    cout << "\n\t" << char(201);
    construirLinea();
    cout << char(187) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t\t\t" << "{Habilidades de Batalla}" << "\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [1]\t\t Ingresar Habilidad de Batalla\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [2]\t\t Mostrar todas las Habilidades de Batalla\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [3]\t\t Regresar al Menu Principal\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(200);
    construirLinea();
    cout << char(188) << endl;
}

void MenuPrincipal::mostrarMenuLuchador()
{
    cout << "\n\t" << char(201);
    construirLinea();
    cout << char(187) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t\t\t\t" << "{Luchadores}" << "\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [1]\t\t Ingresar Luchador\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [2]\t\t Admimistrar Habilidades de Batalla\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [3]\t\t Eliminar Luchador\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [4]\t\t Consultar Luchador\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t [5]\t\t Regresar al Menu Principal\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(200);
    construirLinea();
    cout << char(188) << endl;
}


void MenuPrincipal::mostrarCreditos()
{
    cout << "\n\t" << char(201);
    construirLinea();
    cout << char(187) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t\t\t\t" << "Programa Desarrollado Por: " << "\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    saltoLinea();
    cout << "\t" << char(186) << "\t\t\t Allen Blanco Contreras\t\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(186) << "\t\t\t Emmanuel Paniagua Villalobos\t\t\t\t\t\t     " << char(186) << endl;
    saltoLinea();
    cout << "\t" << char(200);
    construirLinea();
    cout << char(188) << endl;
}
