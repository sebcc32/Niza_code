#ifndef PROPIETARIO_H
#define PROPIETARIO_H
#include <iostream>
#include "propiedad.h"

using namespace std;

class Propietario{
    private:
        double identificacion;
        string nombre;
        Propiedad propiedad;
    public:
        void pagarAdministracion(int cobroAscensor, int cobroBase, float recargo);
        void setIdentificacion(double identificacion);
        void setNombre(string nombre);
        void setPropiedad(Propiedad propiedad);
        double getIdentificacion();
        Propiedad getPropiedad();
        void mostrarDatosPropietario();
};
#endif