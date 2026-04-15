#include <cstring>
#include <string>

using namespace std;

#define Numero_Equipos 5
#define Numero_Partidos 4
#define Max_puntos 50
#define Min_puntos 0
#define Maxima_Longitud_Cadena 100

class toneos
{
private:
    float matriz[Numero_Equipos][Numero_Partidos + 1];

    char Equipos[Numero_Equipos][Maxima_Longitud_Cadena]={
        "Barcelona","Madrid","Atletico","Atletic","Villareal"
    };

    string nombreGrupo;

public:
    toneos(string nombre);
    int generarAleatorio(int min, int max);
    void llenarMatriz();
    void linea();
    float imprimir();
};


