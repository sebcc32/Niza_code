#include <iostream>
#include "propietario.h"
#include "administracion.h"
#include "propiedad.h"

using namespace std;

void menu(Administracion administracion){
    int opc = 0;
    do{
        cout << "Bienvenidos°°°°°    \n";
        cout << "1. Mostrar informacion \n";
        cout << "2. Mostrar propietarios con parqueadero \n";
        cout << "3. Mostrar cantidad propietarios con parqueadero \n";
        cout << "0. Salir \n";

        cin >> opc;

        switch (opc){
        case 1:
            administracion.imprimirPropietarios();
            break;
        case 2:
            administracion.imprimirPropietariosConParqueadero();
            break;
        case 3:
            administracion.imprimirCantidadParqueadero();
            break;
        default:
            break;
        }
    }while (opc != 0);
}

int main(){
    Administracion administracion;

    // Inicializar datos
    administracion.inicializarDatos();
    menu(administracion);

    //done:
    // TODO: Imprimir la informción de los propietarios que tengan parqueadero solamente
    // Decir cuantos propietarios tienen propiedades con parqueadero.
    return 0;
}