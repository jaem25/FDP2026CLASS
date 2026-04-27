#include <iostream>
using namespace std;

int main()
{
    float temperatura;

    cout<<"Ingrese la temperatura del agua en grado Celsius: "<<endl;
    cin>>temperatura;

    if (temperatura < 20.0)
    {
        cout<<"El agua esta fria."<<endl;
    }
    else if (temperatura >= 20.0 && temperatura <= 50.0)
    {
        cout<<"El agua esta templada."<<endl;
    }
    else
    {
        cout<<"El agua esta caliente."<<endl;
    }

    return 0;
}