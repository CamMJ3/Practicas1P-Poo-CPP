#include <iostream>
#include <windows.h>

#include "Estudiante.h"
using namespace std;


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


/***********************************************************************/

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
}