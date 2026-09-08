#include <iostream>
using namespace std;

/** 
 * @file 
 * @brief Funciones (métodos) disponibles de la calculadora. Se utiliza un retorno de tipo double en sus
 * métodos para manejar números decimales eficientemente. Debido a que funciona a partir de dos números,
 * se establecen los parámetros "num1" y "num2".
 */

double sumar(double num1, double num2); // Suma dos números dados por el usuario.
double restar(double num1, double num2); // Resta dos números dados por el usuario.
double multiplicar(double num1, double num2); // Multiplica dos números dados por el usuario.
double dividir(double num1, double num2); // Divide dos números dados por el usuario.

int menu(); // Menú del programa que maneja el input (aportación) del usuario

/***********************************************************************/

double sumar(double num1, double num2)
{
    return double(num1 + num2);
}

double restar(double num1, double num2)
{
    return double(num1 - num2);
}

double multiplicar(double num1, double num2)
{
    return double(num1 * num2);
}

double dividir(double num1, double num2)
{
    return double(num1 / num2);
}

/***********************************************************************/

int main()
{
    while (true)
	{
		switch (menu())
		{
        case 1:
        {
            double num1, num2;
            cout <<  "\nIngrese el primer número: "; 
            cin >> num1;

            cout << "\n¡Se ha insertado el nodo correctamente!";
            break;
        }
		case 2:
        {
            cout << "\n---> Recorrido in-orden del árbol AVL...\n";
			break;
        }
		case 3:
        {
            cout << "\n---> Representación visual del árbol AVL...\n";
            break;
        }
        case 4:
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
        cout << "\n\n-------> Calculadora.\n";
        cout << "1) Sumar dos números.\n";
		cout << "2) Restar dos números.\n";
		cout << "3) Multiplicar dos números.\n";
        cout << "4) Dividir dos números.\n";
        cout << "5) Salir del programa.\n";
		cout << "\n--> Seleccione una opción: ";
		cin >> opcion;
	} while (opcion < 1 || opcion > 5);
	return opcion;
}