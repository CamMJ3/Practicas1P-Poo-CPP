#pragma once
#include <vector>

#include "Estudiante.h"
using namespace std;

/** 
 * @file 
 * @brief Funciones (métodos) disponibles de la clase Grupo. Puede almacenar una o más de una instancia de la clase
 * Estudiante mediante la adición de nuevos estudiantes al grupo. Su método principal le permite calcular el promedio 
 * general al sumar el de cada estudiante para después dividirlo entre el número de estudiantes en el grupo.
 */

class Grupo
{
    private:
        vector<Estudiante> estudiantes; // Inicializa un vector vacío de Estudiantes.
    public:
        Grupo(); // Constructor de la clase Grupo.
        void nuevo_estudiante(string nombre, string carrera, int promedio, int matricula, int materias_cursando); // Agrega un nuevo estudiante al grupo.
        double promedio_general(); // Calcula el promedio general de todos los estudiantes en el grupo.
};