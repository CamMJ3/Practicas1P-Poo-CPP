#include <iostream>
#include <windows.h>
using namespace std;


/** 
 * @file 
 * @brief La función de obtener_calificacion() trabaja a partir de la calificación ingresada por el usuario,
 * devolviendo NA, S, B, MB o E (es decir, tipo string) según el sistema de calificación de la universidad.
 */

string obtener_calificacion(double calificacion); // Ubica la calificación del usuario en el sistema de calificación de la universidad.

int menu(); // Menú del programa que maneja el input (aportación) del usuario

/***********************************************************************/

/** 
 * @brief Ubica la calificación del usuario en el sistema de calificación de la universidad.
 * @details
 * - Si la calificación es igual o mayor a 95, es "excelente" (E).
 * - Si la calificación es igual o mayor a 85, es "muy bien" (MB).
 * - Si la calificación es igual o mayor a 95, es "bien" (B).
 * - Si la calificación es igual o mayor a 95, es "suficiente" (S).
 * - Si la calificación es igual o mayor a 95, es "no acreditada" (NA).
 */

string obtener_calificacion(double calificacion)
{
    if (calificacion < 0 || calificacion > 100)
    {
        return "Calificación inválida. Intente de nuevo.";
    }
    else if (calificacion >= 95)
    {
        return "E";
    }
    else if (calificacion >= 85)
    {
        return "MB";
    }
    else if (calificacion >= 75)
    {
        return "B";
    }
    else if (calificacion >= 60)
    {
        return "S";
    }
    else
    {
        return "NA";
    }
}

/***********************************************************************/

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    while (true)
	{
		switch (menu())
		{
        case 1:
        {
            int calificacion;
            cout << "\nIngrese su calificación: ";
            cin >> calificacion;

            cout << "Con su calificación de " << calificacion << " obtuvo : " << obtener_calificacion(calificacion) << endl;
            break;
        }
        case 2:
        {
			cout << "\nSaliendo del programa...";
			exit(0);
			break;
        }
        }
    }
}

/***********************************************************************/

/** 
 * @brief Menú del programa que maneja el input (aportación) del usuario.
 *
 * @details Devuelve una opción a la función main().
 */

int menu()
{
    int opcion;
	do
	{
		cout << "\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_ ¡ MENÚ ! -_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
        cout << "\n\n-------> Sistema de calificación.\n";
        cout << "Este programa ubica tu calificación en el sistema de calificación de tu universidad. \n";
		cout << "RECUERDA : Ingresa una calificación entre 0 y 100.\n\n";
		cout << "1) Ingresar calificación.\n";
        cout << "2) Salir del programa.\n";
		cout << "\n--> Seleccione una opción: ";
		cin >> opcion;
	} while (opcion < 1 || opcion > 2);
	return opcion;
}