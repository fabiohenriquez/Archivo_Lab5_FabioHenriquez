#ifndef BODEGA_H
#define BODEGA_H

#include <iostream>
#include <string>
#include <vector>
#include "ingredientes.h"
#include "platos.h"
using std::vector;
using namespace std;

class bodega{
    private:
        vector<ingredientes*> ingredient;
        vector<platos*> plat;

    public:
        bodega();
       //get
       vector<ingredientes*>  getIngredientes();
       vector<platos*>  getPlatos();
       //set
       void setIngredientes(ingredientes* i);
       void setPlatos(platos* p);

       void escribirarchivo();
	   void cargararchivo();
       //cargar y escribir plato
       void escribirarchivoplato();
		void cargararchivoplato();

       

};

#endif