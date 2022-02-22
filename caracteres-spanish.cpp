#include <stdio.h>
// Añade paquete de idiomas
#include <locale.h>
#include <windows.h>

int main(void)
{
    // Declaración de variables
    char cadena[254];

    // Establecer el idioma a español
    //setlocale(LC_ALL, "es-ES.UTF-8"); // Cambiar locale - Suficiente para máquinas Linux
    setlocale(LC_ALL, "es_ES.UTF8");
    //SetConsoleCP(1252);           // Cambiar STDIN -  Para máquinas Windows
    // SetConsoleOutputCP(1252);     // Cambiar STDOUT - Para máquinas Windows

    // Mostrar correctamente los caracteres especiales del español
    printf("¡Éxito!. Se muestran los caracteres especiales del español.");

    printf("Introduce un string con caracteres especiales: ");
    gets(cadena);

    printf("El string con caracteres especiales que has introducido es: %s", cadena);

    return 0;
}
