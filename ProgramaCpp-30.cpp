// Autor: Josï¿½ Luis Ojeda
#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int numero, suma = 0;

    do{
    	cout << "Digite un numero: "; cin >> numero;
    	
    	if(numero > 0){
    		suma += numero;
		}
	}while ((numero < 20 || numero > 30) && numero != 0);
	
    cout << "El resultado de la suma es: " << suma << endl;

    getch();
    return 0;
}