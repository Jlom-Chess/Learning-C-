// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, nota5, avg, numAlum;

    cout << "¿Cuántos estudiantes hay?: ";
    cin >> numAlum;

    for (int i = 0; i !=numAlum; i++) 
    {
        cout << "Primera nota: "; cin >> nota1;
        cout << "Segunda nota: "; cin >> nota2;
        cout << "Tercera nota: "; cin >> nota3;
        cout << "Cuarta nota: ";  cin >> nota4;
        cout << "Quinta nota: ";  cin >> nota5;
        avg = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
        cout << "Promedio: " << avg << "\n";
    }

    return 0;
}
