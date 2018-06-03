#ifndef INGREDIENTES_H
#define INGREDIENTES_H
#include<string>

using std::string;

class ingredientes{

   private:
	string tipo;
	string ingrediente;
    int cantidad;
    double duracion;

	
   public:
	ingredientes();//ctor por defecto
    ingredientes(string,string,int,double);

    
	string getIngrediente();//instanciar matrices
	void setIngrediente(string i);//liberar memoria

    string getTipo();//instanciar matrices
	void setTipo(string t);//liberar memoria

    int getCantidad();
    void setCantidad(int d);

    int getDuracion();
    void setDuracion(int d);
	~ingredientes();//destructor
	



};


#endif
