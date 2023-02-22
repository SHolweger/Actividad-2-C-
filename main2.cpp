#include <iostream>
#include "Cliente.cpp"

using namespace std;

int main() {
  string nombres, apellidos, direccion,fecha_nacimiento,nit;
  int telefono;

  cout << "Ingresar Nit: ";
  cin>>nit;
  cout << "Ingresar Nombres: ";
  cin >> nombres;
  cout << "Ingresar Apellidos: ";
  cin >> apellidos;
  cout << "Ingresar Direccion: ";
  cin >> direccion;
  cout<<"Ingrese Fecha de Nacimiento: ";
  cin>>fecha_nacimiento;
  cout << "Ingresar telefono: ";
  cin >> telefono;

  //Instancia de un Objeto
  Cliente obj = Cliente(nombres,apellidos,direccion,fecha_nacimiento,telefono,nit);    
  obj.mostrar();

int opc;
cout<<"ingrese la opcion que desea realizar: 1. Crear nuevos datos 2. Leer  3. Actualizar datos 4. Borrar 5. Mostrar ";
cin>>opc;
switch (opc)
{
case 1:
 obj.crear();    
    break;
case 2:
  obj.leer();
    break;
case 3:
  obj.actualizar();  
    break;
case 4:
  obj.borrar();  
    break;
case 5:
 obj.mostrar();   
    break;

default:
cout<<"Esa no es una opcion valida...";
    break;
}
}