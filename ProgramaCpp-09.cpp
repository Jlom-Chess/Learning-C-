// Autor: José Luis Ojeda
/* La calificación final de un estudiantes es la media ponderada de tres notas:
- La nota de práctica que vale el 30% del total
- La nota teórica que vale el 60% del total
- La participación que vales el 10%
Escriba un programa que lea de la entrada estándar las tres notas del alumno
y escriba en la salida estándar la nota final
*/
#include <iostream>
using namespace std;

int main()
{
	float practica, teorica, participacion, nota_final;
	
	cout << "Ingrese la nota de practica : "; cin >> practica;
	cout << "Ingrese la nota teorica : "; cin >> teorica;
	cout << "Ingrese la nota de participacion : "; cin >> participacion;
	
	practica *= 0.30; // practica = practica*0.30
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teorica + participacion;
	
	cout.precision(3);
	cout << "\nla nota final es : " << nota_final <<endl;
		
	return 0;
}