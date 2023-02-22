#include "Persona.cpp"
#include <iostream>

using namespace std;
class Cliente: Persona{
    private: string nit;

    public: Cliente(){}
    Cliente(string nom, string ape, string dir,string fech, int tel, string n): Persona(nom, ape, dir,fech, tel) {
    nit = n;
  }
//Metodos
// Set -> Modificar
  void setNit(string n){nit = n;}
  void setNombre(string nom){ nombres = nom;}
  void setApellido(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha(string fech){fecha_nacimiento = fech;}
  void setTelefono(int tel){telefono = tel;}
    //Get -> (Mostrar)
  string getNit(){ return nit;}
  string getNombre(){ return nombres;}
  string getApellido(){ return apellidos;}
  string getDireccion(){ return direccion;}
  string getFecha(){ return fecha_nacimiento;}
  int getTelefono(){ return telefono ;}

  void mostrar(){
      cout << "___________________________________________________" << endl;
      cout << nit << ", " <<nombres<< ", " <<apellidos<< ", " <<direccion<<", " <<fecha_nacimiento<< ", " <<telefono<<endl;
    }
    void crear(){
        cout<<"Has ingresado al metodo: \"Crear()\"";
    }
    void leer(){
        cout<<"Has ingresado al metodo: \"Leer()\"";
    }
    void actualizar(){
        cout<<"Has ingresado al metodo: \"Actualizar()\"";
    }
    void borrar(){
        cout<<"Has ingresado al metodo: \"Borrar()\"";
    }
};