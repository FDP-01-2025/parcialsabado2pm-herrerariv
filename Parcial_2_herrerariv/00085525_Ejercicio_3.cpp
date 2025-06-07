#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    const int m = 4;

    float nota;
    float sumaG = 0;

    for (int i = 0; i <= n; i++)
    {
        float sumaE = 0;
        cout << "Estudiante " << i + 1 << ":\n";

        for (int j = 1; j <= m; j++)
        {
            cout << "Examen " << j <<": ";
            cin >> nota;
            sumaE += nota;
        }
        float prom = sumaE / m;
        cout << "Promedio: " << prom << endl;
        cout << "Estado: " <<(prom>=70?"Aprobado\n\n":"Reprobado\n\n");
        sumaG += prom;
    }
    cout << "Promedio general: " <<sumaG / n << endl;
    return 0;
}