#pragma once
#include <string>
using namespace std;

/** 
 * @file 
 * @brief Funciones (métodos) disponibles de la clase Estudiante. Cada instancia u objeto de la clase
 * Estudiante cuenta con cinco propiedades privadas (nombre, carrera, promedio, matrícula y número de 
 * materias cursando). Sus métodos facilitan el visualizar la información general del estudiante. 
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
        Estudiante(string nombre, string carrera, int promedio, int matricula, int materias_cursando); // Constructor de la clase Estudiante. 
        void obtener_datos(); // Obtiene la información general del estudiante.
        int obtener_promedio(); // Obtiene el promedio del estudiante.
        void aprobado(); // Determina si el estudiante está o no en riesgo académico.
        int obtener_matricula(); // Obtiene la matrícula del estudiante.
        void modificar_promedio(int calific); // Modifica el promedio del estudiante.
};