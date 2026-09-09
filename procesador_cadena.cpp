#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


/** 
 * @file 
 * @brief Funciones (métodos) disponibles del procesador de cadenas (tipo string). Las funciones trabajan
 * a partir de un texto dado por el usuario, devolviendo su número de letras, vocales y la frase invertida.
 */

int obtener_num_palabra(string cadena); // Obtiene el número de letras en la cadena.
int obtener_vocales(string cadena); // Obtiene el número de vocales de la cadena.
string frase_invertida(string cadena); // Obtiene la frase invertida del texto al invertir el orden de las letras. 


int menu(); // Menú del programa que maneja el input (aportación) del usuario

/***********************************************************************/

/** 
 * @brief Obtiene el número de letras en la cadena.
 * @details Si la cadena está vacía, no hay palabras (contador = 0). De lo contrario, recorre la cadena y registra
 * el número de palabras al encontrar una letra que no sea un espacio y que sea la primera letra de la palabra o que antes
 * estuviera un espacio. Mediante estas condiciones, incrementa el contador.
 */

int obtener_num_palabra(string cadena)
{
    if (cadena.empty())
    {
        return 0;
    }

    int contador = 1;
    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] != ' ' && (i == 0 || cadena[i - 1] == ' ')) // Si se encuentra una letra que no es un espacio, es la primera letra de la pakabra o antes de esta se encuentra un espacio, se toma como palabra.
        {
            contador++;
        }
    }

    return contador;
}

/** 
 * @brief Obtiene el número de vocales de la cadena.
 * @details Mediante un contador inicializado en 0, se recorre la cadena conviertiendo las letras de la cadena
 * a minúsculas (tolower) para facilitar la obtención de las vocales. Si la letra actual es, primero, "a, b, c, d, e",
 * se incrementa el contador. La segunda condición permite tomar en cuenta las vocales con acento usando la función substr,
 * que salta el segundo byte de la letra para evitar contarla dos veces.
 */

int obtener_vocales(string cadena)
{
    int contador = 0;
    for (int i = 0; i < cadena.length(); i++)
    {
        char letra = tolower(cadena[i]);
        string letra_acento = cadena.substr(i, 2);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
        {
            contador++; // Se incrementa con letras sin acento.
        }
        else if (letra_acento == "á" || letra_acento == "é" || letra_acento == "í" || letra_acento == "ó" || letra_acento == "ú")
        {
            contador++; // Se incrementa ante letras con acento.
            i++; // Se salta el segundo byte de la letra para evitar contarla dos veces.
        }
    }

    return contador;
}

/** 
 * @brief Obtiene la frase invertida del texto al invertir el orden de las letras. 
 * @details Se crea una cadena vacía a la cual se le agregarán las letras de la cadena en orden invertido.
 * Se comienza un recorrido de la cadena al empezar desde el último índice (cadena.length() -1), agregando
 * la palabra a la cadena nueva y continuando el recorrido en retroceso hasta llegar a la primera letra de la 
 * cadena original.
 */

string frase_invertida(string cadena)
{
    string frase_inv = "";
    for (int i = cadena.length() - 1; i >= 0; i--)
    {
        frase_inv += cadena[i];
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

            cout << "Con su calificación de " << calificacion;
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
        cout << "\n\n-------> Procesador de cadenas.\n";
		cout << "1) Contar número de palabras.\n";
		cout << "2) Contar número de vocales (con o sin acento).\n";
		cout << "3) Invertir la frase.\n";
        cout << "2) Salir del programa.\n";
		cout << "\n--> Seleccione una opción: ";
		cin >> opcion;
	} while (opcion < 1 || opcion > 2);
	return opcion;
}