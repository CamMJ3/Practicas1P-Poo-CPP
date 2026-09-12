#include <iostream>
#include <windows.h>

#include "Grupo.h"
#include "Estudiante.h"
using namespace std;

// IMPORTANTE : La ejecucion de las clases Estudiante y Grupo se encuentra dentro de clase_grupo.cpp.


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

    // En primer lugar, instancias de clase Estudiante.

    cout << "\n\n-------> Estudiante 1.\n\n";

    Estudiante estudiante1("Samantha de la Cruz", "Ing. Civil", 98, 56887, 9);
    estudiante1.obtener_datos();
    estudiante1.obtener_matricula();
    estudiante1.modificar_promedio(69);
    estudiante1.aprobado();

    cout << "\n\n-------> Estudiante 2.\n\n";

    Estudiante estudiante2("Ana Maria", "Medicina", 89, 45672, 10);
    estudiante2.aprobado();
    estudiante2.modificar_promedio(50);
    estudiante2.aprobado();
    estudiante2.obtener_datos();

    // En segundo lugar, la instancia de clase Grupo para objetos de tipo Estudiante.

    cout << "\n\n-------> Grupo de estudiantes.\n\n";

    Estudiante medico("Camilo Perez", "Medicina", 87, 95441, 12);
    Estudiante abogado("Diego Fernandez", "Derecho", 99, 22982, 7);
    Estudiante ing("Lily Guzman", "Ing. civil", 100, 32011, 8);

    Grupo grupo_estudiantes;
    grupo_estudiantes.nuevo_estudiante(medico);
    grupo_estudiantes.nuevo_estudiante(abogado);
    grupo_estudiantes.nuevo_estudiante(ing);

    cout << "El promedio general de los estudiantes es : " << grupo_estudiantes.promedio_general() << endl;
}