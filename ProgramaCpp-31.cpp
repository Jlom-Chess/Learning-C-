// Autor: Josï¿½ Luis Ojeda
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    int suma = 0, elevacion = 0, n;

    cout << "Ingrese el numero de elementos a sumar: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        elevacion = pow(2, i);
        suma += elevacion;
    }

    cout << "\nla suma total es: " << suma << endl;

    system("pause");
    return 0;
}
