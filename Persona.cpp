#include <iostream>

using namespace std;
class Persona{
    protected: string nombres,apellidos,direccion, fecha_nacimiento;
    int telefono;
    protected: Persona() { 
  }
    Persona(string nom, string ape, string dir, string fech, int tel) {
    nombres = nom;
    apellidos = ape;
    direccion = dir;
    telefono = tel;
    fecha_nacimiento =fech;
  }
  
    void mostrar();
    void crear();
    void leer();
    void actualizar();
    void borrar();
};