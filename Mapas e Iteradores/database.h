#ifndef DATABASE_H
#define DATABASE_H
#include <map>
#include <string>
#include <iostream>

using namespace std;

class DataBase
{
private:
    string Nombres;
    float Talla;
    float Peso;
    map<string, map<float, float>> Mapa;


public:
    DataBase(string n, float t, float p);
    void IngresarDatos(string n, float t, float p);
    void ComprobarDatos(string n);
    void show();

};

#endif // DATABASE_H
