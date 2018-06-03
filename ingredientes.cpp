#include "ingredientes.h"
#include <iostream>
#include <string>


using std::cout;
using std::endl;
using std::string;

    ingredientes::ingredientes(){

    }

    ingredientes::ingredientes(string n,string t,int c,double d){
        tipo=t;
        ingrediente=n;
        cantidad=c;
        duracion=d;
    }


    ingredientes::~ingredientes(){


    }

    
    string ingredientes::getIngrediente(){
        return  ingrediente;
    }

    void ingredientes:: setIngrediente(string i){
        ingrediente = i;

    }

    string ingredientes::getTipo(){
        return  tipo;
    }

    void ingredientes:: setTipo(string t){
        tipo = t;

    }

    int ingredientes::getCantidad(){
        return  cantidad;
    }

    void ingredientes::setCantidad(int c){
        cantidad = c;

    }

    int ingredientes::getDuracion(){
        return  duracion;
    }

    void ingredientes::setDuracion(int d){
        duracion = d;

    }
    

