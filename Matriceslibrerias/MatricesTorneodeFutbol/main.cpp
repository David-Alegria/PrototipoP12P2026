#include <iostream>//David Emanuel Alegria Cap 9959-23-11277
#include "imprimirmatriz.h"
#include <cstdlib>
#include <ctime>
using namespace std;




int main()
{
    srand(time(0));

    char op;

    do
    {
        system("cls");

        ImprimirMatriz g1("Torneo 2022");
        ImprimirMatriz g2("torneo 2023");
        ImprimirMatriz g3("torneo 2024");

        float r1, r2, r3;

        g1.llenarMatriz();
        r1=g1.imprimir();

        g2.llenarMatriz();
        r2= g2.imprimir();

        g3.llenarMatriz();
        r3 = g3.imprimir();

        if (r1 > r2 && r1 > r3)
            cout <<"El grupo con mas puntos fue A\n";
        else if (r2 > r1 && r2 > r3)
            cout <<"El grupo con mas puntos fue B\n";
        else if (r3 > r1 && r3 > r2)
            cout << "El grupo con mas puntos fue C\n";
        else
            cout <<"Tenemos empate\n";

        cout <<"\nDesea generar otra tabla? (s/n): ";
        cin >>op;
    } while (op != 'n');

    return 0;
}
