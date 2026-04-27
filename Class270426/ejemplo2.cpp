#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float r,pi=3.141516;
    int area;

    cout<<"Bienvenido a calculadora de radio"<<endl;

    cout<<"Ingrese el valor del radio: "<<endl;
    cin>>r;

    area = pi * (pow(r,2));
    cout<<area<<endl;
    
    if (area % 2 == 0)
    {
        cout<<"El area es calculada es: "<<area<<" por lo tanto es par."<<endl;
    }
    else
    {
        cout<<"El area calculada es: "<<area<<" por lo tanto es impar."<<endl;
    }

    return 0;
}
