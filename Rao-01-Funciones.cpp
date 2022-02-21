// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

// Declare una función
int DemoConsoleOutput();

int main()
{
	// Llamar a la función
	DemoConsoleOutput();
	
	return 0;	
}

// Definir la función anteriormente declarada

int DemoConsoleOutput()
{
	cout << "Este es una simple cadena (string)" << endl;
	cout << "Escribe el numero cinco " << 5 << endl;
	cout << "Realiza la division 10/5 = " << 10/5 << endl;
	cout << "PI es aproximadamente 22/7 = " << 22/7 << endl;
	cout << "PI es es 22.0/7 = " << 22.0/7 << endl;
	
	return 0;
}