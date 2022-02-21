// Autor: José Luis Ojeda
#include <iostream>
#include <math.h>  //se presenta una nueva bibiloteca con operaciones matemáticas
using namespace std;

int main()
{
	float x, y, resultado;
	
	cout << "Ingrese el valor de x : "; cin >> x;
	cout << "Ingrese le valor de y : "; cin >> y;
		
	resultado = sqrt(x)/(pow(y,2)-1);
	
	cout << "\nEl resultado es : " << resultado <<endl;
		
	return 0;
}