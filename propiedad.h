#ifndef PROPIEDAD_H
#define PROPIEDAD_H
#include <iostream>

using namespace std;

class Propiedad{
    private:
        double numIdentificacion;
        int piso;
        float areaProp;
        bool parqueadero;
        bool cupo;
    public:
        void setPagarRecargo(float);
        void setnumIdentificacion(double numIdentificacion);
        void setPiso(int piso);
        void setAreaProp(float areaProp);
        void setParqueadero(bool parqueadero);
        void setCupo(bool cupo);
        bool getParqueadero();
        float getArea();
        void mostrarDatosPropiedad();
};
#endif
