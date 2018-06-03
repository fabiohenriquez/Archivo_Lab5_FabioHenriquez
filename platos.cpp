#include "platos.h"


platos::platos(){


}

platos::platos(string n ,string r ,ingredientes* in,int v ,int d){
    nombre = n;
    Resena= r;
    lista_ingred.push_back(in);
    valoracion = v;
    duracion = d;
}

 void platos::setNombre(string nn){
     nombre = nn; 
 }

void platos::setResena(string rr){
    Resena = rr;
}
void platos::setListaIngredientes(ingredientes* inn){
    lista_ingred.push_back(inn);
}
void platos::setValoracion(int vv){
    valoracion = vv;
}
void platos::setDuracion(int dd){
    duracion = dd;
}

string platos::getNombre(){
    return nombre;
}

string platos::getResena(){
    return Resena;
}

int platos::getValoracion(){
    return valoracion;
}

int platos::getDuracion(){
    return duracion;
}