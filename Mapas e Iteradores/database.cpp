#include "database.h"

DataBase::DataBase(string n, float t, float p){
    Nombres = n;
    Talla = t;
    Peso = p;
}

void DataBase::IngresarDatos(string n, float t, float p){
    Mapa.insert(make_pair(n, map<float, float>()));
    Mapa[n].insert(make_pair(t, p));
}

void DataBase::ComprobarDatos(string sn){ //search name (sn)
    map<string, map<float, float>>::iterator P_itr; //iterador del mapa principal
    map<float, float>::iterator S_itr; //iterador del mapa aninado

    for(P_itr = Mapa.begin(); P_itr == Mapa.find(sn); P_itr++ ){
        for(S_itr = P_itr->second.begin(); S_itr != P_itr->second.end(); S_itr++){

            cout<<P_itr->first;
            cout<<"  Talla: "<< S_itr->first;
            cout<<"  Peso: "<<S_itr->second<<endl;

        }
    }

}

void DataBase::show(){
    map<string, map<float, float>>::iterator P_itr;
    map<float, float>::iterator S_itr;

    for(P_itr = Mapa.begin(); P_itr != Mapa.end(); P_itr++){
        for(S_itr = P_itr ->second.begin(); S_itr != P_itr->second.end(); S_itr++){

            cout<<P_itr->first;
            cout<<"  Talla: "<< S_itr->first;
            cout<<"  Peso: "<<S_itr->second<<endl;
        }
    }
}

