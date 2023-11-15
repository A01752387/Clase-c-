#include "casilla.h"
#include <iostream>
using std::endl;
using std::cout;

int Casilla::get_pos()
{
    return posicion;
}

int Casilla::get_cambio()
{
    return cambio;
}

void Casilla::imprimir()
{
    cout << "La casilla es: " << posicion << endl;
    cout << "El cambio es de: " << cambio <<endl;
}

void Casilla::set_cambio(int c)
{
    cambio = c;
}

 void Casilla::set_pos(int p)
 {
    posicion = p;
 }