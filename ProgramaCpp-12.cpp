// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
	int numero, dato = 5;
	
	cout << "Ingrese un numero : "; cin >> numero;
	
	if(numero <= dato){
		cout << "El numero es menor o igual 5";
	}
	else{
		cout << "El numero es mayor de 5";
	}

	return 0;
}