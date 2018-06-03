#include "bodega.h"
#include <fstream>
#include "ingredientes.h"
#include "platos.h"

bodega::bodega(){


}

void bodega::setIngredientes(ingredientes*i){
ingredient.push_back(i);

}

void bodega::setPlatos(platos*p){
plat.push_back(p);

}

vector<platos*> bodega::getPlatos(){
return plat;
}

vector<ingredientes*> bodega::getIngredientes(){
return ingredient;
}

void bodega::escribirarchivo(){
	ofstream archivo;
	archivo.open("ingredientes.txt",ios::ate);

	for(int i=0;i<ingredient.size();i++){
		archivo<<ingredient[i]->getIngrediente()<<endl;


	}
	archivo.close();

}

void bodega::cargararchivo(){
	ifstream archivo;
	string nombre;
    string tipo;
	int as;
    int duracion;

	archivo.open("ingredientes.txt",ios::in);
	while(!archivo.eof()){
		getline(archivo,nombre);
		
		setIngredientes(new ingredientes(nombre,"",0,0));
	}
	archivo.close();
}
void bodega::escribirarchivoplato(){
	ofstream archivo;
	archivo.open("platos.txt",ios::ate);

	for(int i=0;i<plat.size();i++){
		archivo<<plat[i]->getNombre()<<endl;
	
	}
	archivo.close();

}
void bodega::cargararchivoplato(){
	ifstream archivo;
	string nombre;
	archivo.open("platos.txt",ios::in);
	while(!archivo.eof()){
		getline(archivo,nombre);
		setPlatos(new platos(nombre,"",0,0,0));
	}
	archivo.close();


}


