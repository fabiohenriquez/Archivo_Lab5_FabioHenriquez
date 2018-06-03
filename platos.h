#ifndef PLATOS_H 
#define PLATOS_H
#include  <string>
#include "ingredientes.h"
#include <vector>

using std::string;
using std::vector;

class platos{

   private:
    string nombre;
	string Resena;
	vector<ingredientes*> lista_ingred;
    int valoracion;
    int duracion;

	
   public:
        platos();
        platos(string,string,ingredientes*,int,int);
        //set
        void setNombre(string nn);
        void setResena(string rr);
        void setListaIngredientes(ingredientes* inn);
        void setValoracion(int vv);
        void setDuracion(int dd);
        //get
        string getNombre();
        string getResena();
        vector<ingredientes*> getListaIngredientes();
        int getValoracion();
        int getDuracion();
	
	



};


#endif
