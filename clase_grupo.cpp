#include <iostream>
#include <windows.h>
using namespace std;


/** 
 * @file 
 * @brief Funciones (métodos) disponibles de la clase Grupo. A partir de la clase Estudiante, utiliza un vector
 * para almacenar objetos de tipo Estudiante, es decir, es capaz de agrupar distintos estudiantes con el propósito
 * de calcular el promedio general de todos los estudiantes.
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
        void obtener_datos(); // Obtiene la información general del estudiante.
        int obtener_promedio(); // Obtiene el promedio del estudiante.
        void aprobado(); // Determina si el estudiante está o no en riesgo académico.
        int obtener_matricula(); // Obtiene la matrícula del estudiante.
        void modificar_promedio(int calific); // Modifica el promedio del estudiante.
};

int menu(); // Menú del programa que maneja el input (aportación) del usuario

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