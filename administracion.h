#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H
#include <iostream>
#include <vector>
#include "propietario.h"
#include "propiedad.h"

using namespace std;

class Administracion{
private:
    int cobroAscensor;
    int cobroBase;
    float recargo;
    vector<Propietario> propietarios;
public:
    void inicializarDatos();
    void imprimirPropietariosConParqueadero(); // TO-DO
    void imprimirUnPropietario();
    void imprimirPropietarios();
    void recaudarAdministracion();
};
#endif