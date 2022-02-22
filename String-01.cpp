// Autor: José Luis Ojeda
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre, apellido, nombreCompleto;

    cout << "Cual es su nombre ";
    cin >> nombre;
    cout << "Cual es su apellido ";
    cin >> apellido;
    nombreCompleto = nombre + " " + apellido;

    cout << "Nos vemos " << nombreCompleto;

    return 0;
}
