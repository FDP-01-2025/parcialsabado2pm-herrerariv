#include <iostream>
using namespace std;

int main()
{
    double const pagoPorHora = 13.50; // 1 hora trabajada serán $13.50
    int horasTrabajadas;
    double salario;
    double salarioExtra; 

    cout << "Hola, cuantas horas has trabajado en el mes? Pago por hora es de $13.50" << endl;
    cout << "Horas que he trabajado: ";
    cin >> horasTrabajadas;

    salario = horasTrabajadas * pagoPorHora;

    if (horasTrabajadas <= 0)
    {
        cout << "Por favor ingresa un dato válido" << endl;
    }
    else if (horasTrabajadas < 40)
    {
        cout << "Las horas que has trabajado han sido " << horasTrabajadas << " y tu salario sera de: $" << salario << endl;
    }
    else
    {
        cout << "Horas trabajadas: " << horasTrabajadas << " y ya que has trabajado mas de 40 horas, tu salario se duplicara por 1.5" << endl;
        salario = horasTrabajadas * pagoPorHora;
        salarioExtra = salario * 1.5;
        cout << "Tu salario es de: $" << salarioExtra << endl;
    }

    return 0;
}