#ifndef PROPIEDAD_H
#define PROPIEDAD_H
#include <iostream>
#include "administracion.h"

using namespace std;

class Propiedad{
    private:
        double numIdentificacion;
        int piso;
        float areaProp;
        bool parqueadero;

    public:
        void setPagarRecargo(float);
        void setnumIdentificacion(double numIdentificacion);
        void setPiso(int piso);
        void setAreaProp(float areaProp);
        void setParqueadero(bool parqueadero);
        bool getParqueadero(Administracion parqueadero);
        void mostrarDatosPropiedad();
};
#endif