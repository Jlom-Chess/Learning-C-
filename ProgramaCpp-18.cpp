// Autor: José Luis Ojeda
// en romanos
// M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1
#include <iostream>
using namespace std;

int main()
{
	int numero, unidades, decenas, centenas, millares;
	
	cout << "Ingrese un numero : "; cin >> numero;
	
	// El máximo número a usar es 3999 por las dificultades de los número romanos
	// mayores a 4000 para ser representados en el IDE
	// usaremos de ejemplo para seguir la lógic el siguiente número
	// numero = 2152 -> 2000 + 100 + 50 + 2
	
	unidades = numero%10;  // el residuo de dividir por 10 es 2
	numero /= 10; // al dividir entre 10 entonces numero = 215
	decenas = numero%10; // ahora en las decenas está el valor 5
	numero /=10; // ahora numero = 21
	centenas = numero%10; // ahora en centena está el valor 1
	numero /=10; // Ahora número = 2
	millares = numero%10; // Ahora millar tiene el valor 2
	numero /=10; // ahora numero vale 0
	
	switch(millares){
		case 1: cout <<"M"; break;
		case 2: cout <<"MM"; break;
		case 3: cout <<"MMM"; break; // Hasta aquí por el tema de los romanos
	}
	
	switch(centenas){
		case 1: cout <<"C"; break;
		case 2: cout <<"CC"; break;
		case 3: cout <<"CCC"; break;
		case 4: cout <<"CD"; break;
		case 5: cout <<"D"; break;
		case 6: cout <<"DC"; break;
		case 7: cout <<"DCC"; break;
		case 8: cout <<"DCCC"; break;
		case 9: cout <<"CM"; break;
	}

	switch(decenas){
		case 1: cout <<"X"; break;
		case 2: cout <<"XX"; break;
		case 3: cout <<"XXX"; break;
		case 4: cout <<"XL"; break;
		case 5: cout <<"L"; break;
		case 6: cout <<"LX"; break;
		case 7: cout <<"LXX"; break;
		case 8: cout <<"LXXX"; break;
		case 9: cout <<"XC"; break;
	}
	
	switch(unidades){
		case 1: cout <<"I"; break;
		case 2: cout <<"II"; break;
		case 3: cout <<"III"; break;
		case 4: cout <<"IV"; break;
		case 5: cout <<"V"; break;
		case 6: cout <<"VI"; break;
		case 7: cout <<"VII"; break;
		case 8: cout <<"VIII"; break;
		case 9: cout <<"IX"; break;
	}
	return 0;
}