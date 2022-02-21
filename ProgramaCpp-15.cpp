// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	
	cout << "Ingrese dos numeros : "; cin >> n1 >> n2;
	
	if(n1 == n2){
		cout << "Ambos numeros son iguales";
	}
	else if(n1 > n2){
		cout << "El el mayor es " <<n1;
	}
	else{
		cout << "El el mayor es " <<n2;
	}

	return 0;
}