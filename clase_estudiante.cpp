#include <iostream>
#include <windows.h>
using namespace std;


/** 
 * @file 
 * @brief Funciones (métodos) disponibles de la calculadora. Se utiliza un retorno de tipo double en sus
 * métodos para manejar números decimales eficientemente. Debido a que funciona a partir de dos números,
 * se establecen los parámetros "num1" y "num2".
 */

class Estudiante
{
    private:
        string nombre;
        string carrera;
        int promedio;
        int matricula;
        int materias_cursando;
    public:
        Estudiante(string nombre, string carrera, int promedio, int matricula, int materias_cursando);
        void obtener_datos();
        void aprobado();
        int obtener_matricula();
        void modificar_promedio(int calific);
};

int menu(); // Menú del programa que maneja el input (aportación) del usuario

/***********************************************************************/

Estudiante::Estudiante(string nombre, string carrera, int promedio, int matricula, int materias_cursando)
{
    this->nombre = nombre;
    this->carrera = nombre;
    this->promedio = promedio;
    this->matricula = matricula;
    this->materias_cursando = materias_cursando;
}

void Estudiante::obtener_datos()
{
    cout << "Datos del ESTUDIANTE " << nombre << " : \n";
    cout << "--> Carrera : " << carrera << endl;
    cout << "--> Promedio : " << promedio << endl;
    cout << "--> Matricula : " << matricula << endl;
    cout << "--> Número de materias cursando : " << materias_cursando << endl;
}

void Estudiante::aprobado()
{
    if (promedio >= 60)
    {
        cout << nombre << " está APROBADO (sin riesgo académico).";
    }
    else
    {
        cout << nombre <<" está REPROBADO (en riesgo académico).";
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
