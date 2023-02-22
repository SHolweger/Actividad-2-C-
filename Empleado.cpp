#include "Persona.cpp"
#include <iostream>

using namespace std;
class Empleado: Persona{
    private: string codigo_empleado,puesto;

    public: Empleado(){

    }
    Empleado(string nom, string ape, string dir,string fech, int tel, string c_emple, string p): Persona(nom, ape, dir,fech, tel) {
    codigo_empleado = c_emple;
    puesto=p;
  } 
//Metodos
// Set -> Modificar
  void setCodigoEmpleado(string c_emple){codigo_empleado = c_emple;}
  void setPuesto(string p){puesto = p;}
  void setNombre(string nom){ nombres = nom;}
  void setApellido(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setFecha(string fech){fecha_nacimiento = fech;}
  void setTelefono(int tel){telefono = tel;}
    //Get -> (Mostrar)
  string getCodigoEmpleado(){ return codigo_empleado;}
  string getPuesto(){ return puesto;}
  string getNombre(){ return nombres;}
  string getApellido(){ return apellidos;}
  string getDireccion(){ return direccion;}
  string getFecha(){ return fecha_nacimiento;}
  int getTelefono(){ return telefono ;}

  void mostrar(){
      cout << "Has elegido... Mostrar" << endl;
      cout << "______________________________________________" << endl;
      cout << codigo_empleado << ", " <<puesto<< ", " <<nombres<< ", " <<apellidos<< ", " <<direccion<<", " <<fecha_nacimiento<< ", " <<telefono<<endl;
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