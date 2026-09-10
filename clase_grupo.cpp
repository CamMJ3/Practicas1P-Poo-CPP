#include <iostream>
#include <windows.h>

#include "Grupo.h"
#include "Estudiante.h"
using namespace std;


/***********************************************************************/

Grupo::Grupo()
{
    estudiantes = {};
}

void Grupo::nuevo_estudiante(Estudiante nuevo_estudiante)
{
    estudiantes.push_back(nuevo_estudiante);
    cout << "Nuevo estudiante agregado al grupo.\n"; 
}

double Grupo::promedio_general()
{
    int suma = 0;
    for (int i = 0; i < estudiantes.size(); i++)
    {
        suma += estudiantes[i].obtener_promedio();
    }

    return double(suma) / estudiantes.size();
}

/***********************************************************************/

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    cout << "\n\n-------> Grupo de estudiantes.\n\n";

    Estudiante estudiante1("Camilo Perez", "Medicina", 87, 95441, 12);
    Estudiante estudiante2("Diego Fernandez", "Derecho", 99, 22982, 7);
    Estudiante estudiante3("Lily Guzman", "Ing. civil", 100, 32011, 8);

    Grupo grupo_estudiantes;
    grupo_estudiantes.nuevo_estudiante(estudiante1);
    grupo_estudiantes.nuevo_estudiante(estudiante2);
    grupo_estudiantes.nuevo_estudiante(estudiante3);

    grupo_estudiantes.promedio_general();
}