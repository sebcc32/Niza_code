all: compilar clean
compilar: propietario propiedad administracion main
	g++ -o Salida administracion.o propiedad.o propietario.o main.o
administracion: administracion.cpp administracion.h propiedad.h propietario.h
	g++ -c administracion.cpp
propietario: propietario.cpp propietario.h propiedad.h
	g++ -c propietario.cpp
propiedad: propiedad.cpp propiedad.h
	g++ -c propiedad.cpp
main: main.cpp propietario.h
	g++ -c main.cpp
clean:
	@echo "Removing junk files..."
	del *.o