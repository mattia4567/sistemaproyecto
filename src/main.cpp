

#include <iostream>
#include <cstring>

using namespace std;


struct EntidadProyecto {
    int id;
    char nombre[50];
    float metrica; 
};


void cargarDatos(EntidadProyecto* ptr);

int main() {
  
    EntidadProyecto miEntidad;
    miEntidad.id = 0;
    strcpy(miEntidad.nombre, "Vacio - Ulises Ferrari");
    miEntidad.metrica = 0.0f;

    cout << "=====================================================" << endl;
    cout << " MODELADO STRUCT - ESTUDIANTE: Federico Mattia " << endl;
    cout << "=====================================================" << endl;

   
    cargarDatos(&miEntidad);

    cout << "\n=== DATOS VERIFICADOS EN LA MEMORIA RAM ===" << endl;
    cout << "ID Registrado: " << miEntidad.id << endl;
    cout << "Nombre Registrado: " << miEntidad.nombre << endl;
    cout << "Metrica Guardada: " << miEntidad.metrica << endl;
    cout << "Direccion RAM Hexadecimal: " << &miEntidad << endl;
    cout << "=====================================================" << endl;

    return 0; 
}


void cargarDatos(EntidadProyecto* ptr) {
    cout << "\n-- INGRESO DE DATOS MEDIANTE OPERADOR FLECHA --" << endl;
    cout << "=> Ingrese el ID de la entidad (entero): ";
    cin >> ptr->id;


    cin.ignore();

    cout << "=> Ingrese el Nombre o Descripcion: ";
    cin.getline(ptr->nombre, 50);

    cout << "=> Ingrese la Metrica de Operacion (decimal/float): ";
    cin >> ptr->metrica;
}
