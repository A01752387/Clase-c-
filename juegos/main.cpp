#include "dado.h"
#include "jugador.h"
#include <iostream>
using std::cout;
using std::endl;


int main()
{
 Dado midado;
 midado.set_caras(6);

 //cout <<midado << endl;

 midado.imprimir();   

 for (int i = 0; i < 5; i++)
 {
    cout <<midado.lanzar() << endl;
 }

 Jugador yo;
yo.set_nombre("Liam");
yo.imprimir();
yo.mover();
yo.imprimir();
yo.mover();
yo.imprimir();

Jugador tu;
yo.set_nombre("Mike");
yo.imprimir();
yo.mover();
yo.imprimir();
yo.mover();
yo.imprimir();
}
