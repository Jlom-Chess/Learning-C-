// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
	int numeroA;
	int numeroB;
	int resultado;
	float promedio;
	
	cout << "Ingrese primer valor: ";
	cin >> numeroA;
	cout << "Ingrese segundo valor: ";
	cin >> numeroB;
	
	resultado = numeroA + numeroB;
	promedio = (numeroA + numeroB)/2.0;
	cout << "La suma de ambos valores es: " << resultado <<endl;
	cout << "El promedio de ambos valores es: " << promedio;
	
	return 0;
}