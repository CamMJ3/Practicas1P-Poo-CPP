#include <iostream>
#include <windows.h>

#include "Estudiante.h"
using namespace std;

// IMPORTANTE : La ejecucion de las clases Estudiante y Grupo se encuentra dentro de clase_grupo.cpp.

/***********************************************************************/

Estudiante::Estudiante(string nombre, string carrera, int promedio, int matricula, int materias_cursando)
{
    this->nombre = nombre;
    this->carrera = carrera;
    this->promedio = promedio;
    this->matricula = matricula;
    this->materias_cursando = materias_cursando;
}

void Estudiante::obtener_datos()
{
    cout << "\nDatos del ESTUDIANTE " << nombre << " : \n";
    cout << "--> Carrera : " << carrera << endl;
    cout << "--> Promedio : " << promedio << endl;
    cout << "--> Matricula : " << matricula << endl;
    cout << "--> Número de materias cursando : " << materias_cursando << endl;
}

int Estudiante::obtener_promedio()
{
    return promedio;
}

void Estudiante::aprobado()
{
    if (promedio >= 60)
    {
        cout << nombre << " está APROBADO(A) (sin riesgo académico).\n";
    }
    else
    {
        cout << nombre <<" está REPROBADO(A) (en riesgo académico).\n";
    }
}

int Estudiante::obtener_matricula()
{
    return matricula;
}

void Estudiante::modificar_promedio(int calific)
{
    promedio = calific;
}

