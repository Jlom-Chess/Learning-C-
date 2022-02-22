// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
	int numero, dato = 5;
	
	cout << "Ingrese un número : "; cin >> numero;
	
	if(numero <= dato){
		cout << "El número es menor o igual 5";
	}
	else{
		cout << "El número es mayor de 5";
	}

	return 0;
}
