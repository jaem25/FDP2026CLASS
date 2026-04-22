#include <iostream>
using namespace std;

int main(){
    float num1,num2,num3;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>num1;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>num2;

    cout<<"Ingrese el tercer numero: "<<endl;
    cin>>num3;

    float promedio = (num1 + num2 + num3)/3;
    cout<<"Su promedio es: "<<promedio<<endl;

    return 0;
}