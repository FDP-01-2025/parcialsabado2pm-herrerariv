// Ejercicio 1 While - Do While
// Pide un numero y muestra todos sus divisores usando un ciclo while

#include <iostream>
using namespace std;

int main()
{
    int number;
    int i = 1;
    int divisor;

    cout << "Por favor ingresa un numero para mostrar todo sus divisores" << endl;
    cout << "Numero: ";
    cin >> number;

    while (i <= number)
    {
        if (number % i == 0)
        {
            cout << "Los divisores son: " << i;
            i++;
        }
        
    }
    
    return 0;
}