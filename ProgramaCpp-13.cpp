// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
	int numero, dato = 5;
	
	cout << "Ingrese un numero : "; cin >> numero;
	
	if(numero != dato){
		cout << "El numero no es 5";
	}
	else{
		cout << "El numero es 5";
	}

	return 0;
}