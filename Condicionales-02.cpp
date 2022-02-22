// Autor: José Luis Ojeda
#include <iostream>
using namespace std;
int main()
{
    int nota;
    cout << "Ingrese su nota: ";
    cin >> nota;

    if (nota == 10)
    {
        cout << "¡Excelente!";
    }
    else if (nota >6 && nota <10)
    {
        cout << "Felicitaciones, está usted aprobado";
    }
    else
    {
        cout << "Lamentablemente está usted desaprobado";
    }
    return 0;
}
