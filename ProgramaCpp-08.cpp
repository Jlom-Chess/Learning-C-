// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
	int x, y, aux;
	
	cout << "Ingrese el valor de x : "; cin >> x;
	cout << "Ingrese el valor de y : "; cin >> y;
	
	/*
	x = 5
	y = 10
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout.precision(3);
	cout << "El nuevo valor de x es : " << x <<endl;
	cout << "El nuevo valor de y es : " << y <<endl;
	
	return 0;
}