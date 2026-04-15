#ifndef IMPRIMIRMATRIZ_H
#define IMPRIMIRMATRIZ_H

#include <iostream>//David Emanuel Alegria Cap 9959-23-11277
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

#define Numero_Equipos 5
#define Numero_Partidos 4
#define Max_puntos 50
#define Min_puntos 0
#define Maxima_Longitud_Cadena 100

class ImprimirMatriz
{
private:
    float matriz[Numero_Equipos][Numero_Partidos + 1];

    char Equipos[Numero_Equipos][Maxima_Longitud_Cadena]={
        "Barcelona","Madrid","Atletico","Atletic","Villareal"
    };

    string nombreGrupo;

public:
    ImprimirMatriz(string nombre);
    int generarAleatorio(int min, int max);
    void llenarMatriz();
    void linea();
    float imprimir();
};

#endif
