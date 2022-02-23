// Autor: José Luis Ojeda
#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, nota5, avg, numAlum;
    int val;

    while (true)
    {
        cout << "Primera nota: ";
        cin >> nota1;
        cout << "Segunda nota: ";
        cin >> nota2;
        cout << "Tercera nota: ";
        cin >> nota3;
        cout << "Cuarta nota: ";
        cin >> nota4;
        cout << "Quinta nota: ";
        cin >> nota5;
        avg = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
        cout << "Promedio: " << avg << "\n";
        cout << "¿Quiere continuar? [1] Si, [Otro] No ";
        cin >> val;
        if (val != 1)
        {
            break;
        }

    }

    return 0;
}
