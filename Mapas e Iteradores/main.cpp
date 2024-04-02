#include <iostream>
#include "database.h"

using namespace std;

int main()
{
    int opcion = 0;
    string Nombres, BuscarNombres;
    float Talla = 0.0, Peso = 0.0;

    DataBase DT(Nombres, Talla, Peso);

    while(opcion != 4){
        cout<<"\tMenu"<<endl;
        cout<<"1) Ingresar Datos"<<endl;
        cout<<"2) Mostrar Datos"<<endl;
        cout<<"3) Buscar Nombre"<<endl;
        cout<<"4) Cerrar sesion"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        cout<<"--------------------------"<<endl;


    if (opcion == 1){
        cout<<"Ingresar Nombre: ";
        cin>>Nombres;
        cout<<"Ingresar Talla: ";
        cin>>Talla;
        cout<<"Ingresar Peso: ";
        cin>>Peso;
        cout<<"--------------------------"<<endl;
        cout<<"\n";


        DT.IngresarDatos(Nombres, Talla, Peso);
    }

    if(opcion == 2){
        cout<<"\n";
        DT.show();
        cout<<"\n";
    }

    if(opcion == 3){
        cout<<"\n";
        cout<<"Ingresar Nombre a buscar: ";
        cin>>BuscarNombres;
        cout<<"\n";

        DT.ComprobarDatos(BuscarNombres);
    }

    if(opcion == 4){
        break;
    }

    }
}
