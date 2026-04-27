#include <iostream>
#include <cmath> //Para utilizar la funcion pow

using namespace std;

int main()
{
    int y, x;

    //Solicitar el numero al usuario
    cout << "Por favor ingrese un numero: "<< endl;
    cin>> y;

    //Calcular x = y^y
    x = pow(y, y);

    //Determinar si x es par o impar
    if (x % 2 == 0)
    {
        cout<< "El numero: "<< x << " es par. "<< endl;
    }
    else
    {
        cout<<"EL numero: "<< x << " es impar. "<< endl;
    }
    
    if (y > 0)
    {
        cout << "El numero: " << y << " es positivo. "<<endl;
    }
    else
    {
        cout <<"El numero: " << y << " es negativo. "<<endl;
    }

    return 0;
}