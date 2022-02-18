#include "administracion.h"

void Administracion::inicializarDatos(){
    Propietario propiet1, propiet2, propiet3, propiet4,propiet5,propiet6;
    Propiedad prop1, prop2, prop3, prop4,prop5,prop6;

    propiet1.setNombre("Debora Vilar");
    propiet1.setIdentificacion(20202492);
    propiet2.setNombre("Ignacio Rodríguez");
    propiet2.setIdentificacion(30458452);
    propiet3.setNombre("Erika Muñoz");
    propiet3.setIdentificacion(1058845781);
    propiet4.setNombre("Modesto Villaverde");
    propiet4.setIdentificacion(31321432);
    propiet5.setNombre("Camilo Torres");
    propiet5.setIdentificacion(4476283);
    propiet6.setNombre("Sebastian Agudelo");
    propiet6.setIdentificacion(30432176);

    prop1.setnumIdentificacion(101);
    prop1.setAreaProp(160);
    prop1.setParqueadero(true);
    prop1.setPiso(10);
    prop1.setCupo(true);
    propiet1.setPropiedad(prop1); // Aun no estamos usando Apuntadores

    prop2.setnumIdentificacion(901);
    prop2.setAreaProp(30);
    prop2.setParqueadero(false);
    prop2.setPiso(9);
    prop2.setCupo(true);
    propiet2.setPropiedad(prop2);

    prop3.setnumIdentificacion(701);
    prop3.setAreaProp(45);
    prop3.setParqueadero(true);
    prop3.setPiso(7);
    prop3.setCupo(true);
    propiet3.setPropiedad(prop3);

    prop4.setnumIdentificacion(502);
    prop4.setAreaProp(60);
    prop4.setParqueadero(false);
    prop4.setPiso(5);
    prop4.setCupo(false);
    propiet4.setPropiedad(prop4);
    
    prop5.setnumIdentificacion(102);
    prop5.setAreaProp(55);
    prop1.setParqueadero(true);
    prop5.setPiso(10);
    prop5.setCupo(true);
    propiet5.setPropiedad(prop5);
    
    prop6.setnumIdentificacion(902);
    prop6.setAreaProp(100);
    prop6.setParqueadero(false);
    prop6.setPiso(9);
    prop6.setCupo(false);
    propiet6.setPropiedad(prop6);

    // Incluir los propietarios en el vector
    propietarios.push_back(propiet1);
    propietarios.push_back(propiet2);
    propietarios.push_back(propiet3);
    propietarios.push_back(propiet4);
    propietarios.push_back(propiet5);
    propietarios.push_back(propiet6);
}

void Administracion::imprimirUnPropietario(){
}

void Administracion::imprimirPropietarios(){
    // Recorrer el arreglo e imprimir todos los propietarios
    for (int i = 0; i < propietarios.size(); i++){
        propietarios[i].mostrarDatosPropietario();
    }
}

void Administracion::imprimirPropietariosConParqueadero(){
    for(int i = 0; i < propietarios.size(); i++){
        if(propietarios[i].getPropiedad().getParqueadero()==true){
            propietarios[i].mostrarDatosPropietario();
        }
    }
}

void Administracion::imprimirCantidadParqueadero(){
    int cantParqueadero=0,cantNoParqueadero=0;
    for(int i = 0; i < propietarios.size(); i++){
        if(propietarios[i].getPropiedad().getParqueadero()==true){
            cantParqueadero+=1;
        }else{cantNoParqueadero+=1;}
    }
    cout<<"Con parqueadero: "<<cantParqueadero<<"\nSin parqueadero"<<cantNoParqueadero;
}

void Administracion::imprimirSegunArea(){
    for(int i = 0; i < propietarios.size(); i++){
        if(propietarios[i].getPropiedad().getArea()>=50){
            //propietarios[i].getName;
        }
    }
}

void Administracion::recaudarAdministracion(){
}
