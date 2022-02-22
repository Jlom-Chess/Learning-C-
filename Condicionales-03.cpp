// Autor: José Luis Ojeda
#include <iostream>
using namespace std;
int main()
{
    int nota;
    cout << "Ingrese su nota: ";
    cin >> nota;

    switch (nota)
    {
        case 10:
            cout << "¡Excelente!"; 
            break;
        case 9:
            cout <<"Muy buena nota"; 
            break;
        case 8:
            cout << "Buen trabajo";
            break;
        case 7:
            cout << "No está mal, siga trabajando";
            break;
        case 6:
            cout << "Pasó con lo justo";
            break;
        default:
            cout << "Lo sentimos, usted desaprobó";
    }
    return 0;
}
