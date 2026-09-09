#include <iostream>
#include <windows.h>
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
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    while (true)
	{
		switch (menu())
		{
        case 1:
        {
            double num1, num2;
            cout <<  "\nIngrese el primer número: "; 
            cin >> num1;

            cout <<  "\nIngrese el segundo número: "; 
            cin >> num2;

            cout << "\nLa suma de " << num1 << " + " << num2 << " es : " << sumar(num1, num2) << endl;
            break;
        }
		case 2:
        {
            double num1, num2;
            cout <<  "\nIngrese el primer número: "; 
            cin >> num1;

            cout <<  "\nIngrese el segundo número: "; 
            cin >> num2;

            cout << "\nLa resta de " << num1 << " - " << num2 << " es : " << restar(num1, num2) << endl;
            break;
        }
		case 3:
        {
            double num1, num2;
            cout <<  "\nIngrese el primer número: "; 
            cin >> num1;

            cout <<  "\nIngrese el segundo número: "; 
            cin >> num2;

            cout << "\nLa multiplicación de " << num1 << " * " << num2 << " es : " << multiplicar(num1, num2) << endl;
            break;
        }
        case 4:
        {
            double num1, num2;
            cout <<  "\nIngrese el primer número: "; 
            cin >> num1;

            cout <<  "\nIngrese el segundo número: "; 
            cin >> num2;

            cout << "\nLa división de " << num1 << " / " << num2 << " es : " << dividir(num1, num2) << endl;
            break;
        }
        case 5:
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