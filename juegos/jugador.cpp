#include "jugador.h"
#include <iostream>
using std::endl;
using std::cout;

void Jugador::cambia_posicion(int n)
{
    posicion = posicion + n;
}

int Jugador::get_posicion()
{
    return posicion;
}

void Jugador::set_nombre(string n)
{
    nombre = n;
}

void Jugador::imprimir()
{
    cout << "Soy el Jugador " << nombre;
    cout << " Mi posicion es:" <<  posicion << endl;
}

void Jugador::mover()
{
    int mov = midado.lanzar();
    cambia_posicion(mov);
}

Jugador::Jugador()
{
    nombre = "Yo";
    posicion = 0;
}

Jugador::Jugador(int n, string m)
{
    nombre = m;
    posicion = n;
}

Jugador::~Jugador()
{
    cout << "Desde destructor de jugador" << nombre << endl;
}
