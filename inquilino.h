#ifndef INQUILINO_H
#define INQUILINO_H
#include <iostream>
#include "propiedad.h"

using namespace std;

class Inquilino{
    private:
        double identificacion;
        string nombre;
        string direccion;
        string inicioContrato;
        string finContrato;
        double cuota;
        Propiedad propiedad;
    public:
        void pagarAdministracion(int cobroAscensor, int cobroBase, float recargo);
};
#endif