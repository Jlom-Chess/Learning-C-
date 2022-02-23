#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;

int main()
{
    // Declaración de variables
    char cadena[254];
    //setlocale(LC_ALL, "spanish.utf8");
    //SetConsoleOutputCP(850);
    //SetConsoleCP(850);

    // Mostrar correctamente los caracteres especiales del español
    cout << "¡Éxito!. Se muestran los caracteres especiales del español.";

    cout << "Introduce un string con caracteres especiales: ";
    gets(cadena);

    cout << "El string con caracteres especiales que has introducido es: ";
    cout << cadena;

    return 0;
}
