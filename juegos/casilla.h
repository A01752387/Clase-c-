#ifndef _CASILLA_H_
#define _CASILLA_H_
#include <iostream>
using std::endl;
using std::cout;
using std::string;

class Casilla
{
    private:
        int posicion;
        int cambio;
    
    public:
        Casilla();
        Casilla(int p, int c);
        void imprimir();
        int get_pos();
        void set_cambio(int c);
        int get_cambio();
        void set_pos(int p);
};
#endif