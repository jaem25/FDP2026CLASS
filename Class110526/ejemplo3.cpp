#include <iostream>
using namespace std;
int main()
{
    int numeroSecreto = 25, intento, contador = 0, maxIntentos = 10;
    do
    {
        cout << "Piensa un numero entre 1 y 100 y escribelo: ";
        cin >> numeroSecreto;
        if (numeroSecreto < 1 || numeroSecreto > 100)
            cout << "Numero invalido. Debe estar entre 1 y 100.\n";
    } while (numeroSecreto < 1 || numeroSecreto > 100);
    cout << "Tienes " << maxIntentos << " intentos para adivinarlo.\n";
    do
    {
        cout << "Ingresa tu intento: ";
        cin >> intento;
        if (intento >= 1 && intento <= 100)
        {
            contador++;
            if (intento == numeroSecreto)
            {
                cout << "¡Correcto! Lo adivinaste en " << contador << " intentos.\n";
                break;
            }
            else if (intento < numeroSecreto)
                cout << "El numero es mayor.\n";
            else
                cout << "El numero es menor.\n";
            if (contador == maxIntentos)
            {
                cout << "Se acabaron tus intentos. El numero era: " << numeroSecreto << endl;
                break;
            }
        }
        else
            cout << "Numero invalido. Debe estar entre 1 y 100.\n";
    } while (true);
    return 0;
}