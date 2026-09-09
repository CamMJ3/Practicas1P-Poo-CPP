#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


/** 
 * @file 
 * @brief Funciones (métodos) disponibles del procesador de cadenas (tipo string). Las funciones trabajan
 * a partir de un texto dado por el usuario, devolviendo su número de letras, vocales y la frase invertida.
 */

int obtener_num_letras(string cadena); // Obtiene el número de letras en la cadena.
int obtener_vocales(string cadena); // Obtiene el número de vocales de la cadena.
string frase_invertida(string cadena); // Obtiene la frase invertida del texto al invertir el orden de las letras. 


int menu(); // Menú del programa que maneja el input (aportación) del usuario

/***********************************************************************/

/** 
 * @brief Funciones del procesador de cadenas.
 * @details a
 */

int obtener_num_letras(string cadena)
{
    return cadena.length();
}

int obtener_vocales(string cadena)
{
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++)
    {

    }

    return contador;
}

frase frase_invertida(string cadena)
{

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