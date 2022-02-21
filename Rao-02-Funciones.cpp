// Autor: José Luis Ojeda
// Esta es una versión mejorada del Rao-01-Funciones
#include <iostream>
using namespace std;

// Declare una función y definición
int DemoConsoleOutput()
{
	cout << "Este es una simple cadena (string)" << endl;
	cout << "Escribe el numero cinco " << 5 << endl;
	cout << "Realiza la division 10/5 = " << 10/5 << endl;
	cout << "PI es aproximadamente 22/7 = " << 22/7 << endl;
	cout << "PI es es 22.0/7 = " << 22.0/7 << endl;
	
	return 0;
}

int main()
{
	// Llamar a la función
	return DemoConsoleOutput();
}

/*
En casos como este en los que no se requiere una función para tomar una decisión, 
o devolver el estado de éxito o error, puede declarar una función de tipo void:
void DemoConsoleOutput()
Esta función no puede devolver un valor.
*/