//Conversion de celsius a fahrenheit
#include <iostream>
using namespace std;

int main(){
    float celsius;
    cout<<"Ingrese el valor en grado Celsius: "<<endl;
    cin>>celsius;

    float fahrenheit = (celsius * 9/5) + 32;
    cout<<"EL valor en grado Fahrenheit es: "<<fahrenheit<<endl;

    return 0;
}