#include <iostream>
using namespace std;

int main()
{
    int res, n;
    char V;
    cout << "hola, podrias ingresar un caracter:";
    cin >> V;
    switch (V)
    {
    case 'L':
        cout<< "lunes\n";
        break;
    case 'M':
        cout<< "martes\n";
        break;
    case 'm':
        cout<< "miercoles\n";
        break;
    case 'J':
        cout<< "jueves\n";
        break;
    case 'V':
        cout << "viernes\n";
        break;
    case 'S':
        cout << "sabado\n";
        break;
    case 'D':
        cout<< "domingo\n";
        break;
    default:
        cout << "datos incorrectos";
        
        break;
    }

    return 0;
}