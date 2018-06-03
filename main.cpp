#include<iostream>
#include <vector>
#include "bodega.h"
#include "ingredientes.h"
#include <string>
#include "platos.h"

using std::string;
using std::endl;
using std::cin;
using std::cout;
using std::vector;

int main(){
    //vectores
    ingredientes* lista_ingredientes;
    int cont = 0;
    int c= 0;
    int c1=0;
    int c3=0;



    bodega* bode = new bodega();
    //cargar archivo
    //bode->cargararchivo();
    //bode->cargararchivoplato();
    
    char respuesta = 's';

	while (respuesta =='s'){
		int opcion;
		cout<<"-MENU-"<<endl;
                cout<<"----------"<<endl;
		cout<<"1. Inventario" << endl;
		cout<<"2. Ventas" << endl;
                cout<<"3. imprimir inventario"<<endl;
                cout<<"------------"<<endl;
		cout<<"Ingrese una opcion: ";
                cin>>opcion;
                        if(opcion == 1){
                                int op=0;
                                cout<<"-MENU-"<<endl;
                                cout<<"----------"<<endl;
                                cout<<"1. Agregar Ingredientes" << endl;
                                cout<<"2. Hacer plato" << endl;
                                cout<<"------------"<<endl;
                                cin>>op;
                                if(op == 1){
                                        cout<<"Ingrese el nombre del Ingrediente"<<endl;
                                        string nombre;
                                        cin>>nombre;
                                        cout<<"Ingrese el tipo de ingrediente lácteo, vegetales, frutas, otros..."<<endl;
                                        string tipo;
                                        cin>>tipo;
                                        cout<<"Ingrese la cantidad "<<endl;
                                        int cantidad;
                                        cin>>cantidad;
                                        cout<<"Ingrese la duracion "<<endl;
                                        double duracion;
                                        cin>>duracion;
                                        bode->setIngredientes(new ingredientes(nombre,tipo,cantidad,duracion));
                                        //bode->getIngredientes().push_back(new ingredientes(nombre,tipo,cantidad,duracion));
                                        //lista_ingredientes = new ingredientes(nombre,tipo,cantidad,duracion));//lista_ingredientes = new ingredientes(nombre,tipo,cantidad,duracion);
                                        bode->escribirarchivo();             
                                }
                                if(op ==2 ){
                                        cout<<"Ingrese el nombre del Plato"<<endl;
                                        string nombre;
                                        cin>>nombre;
                                        cout<<"Ingrese una pequeña reseña"<<endl;
                                        string resena;
                                        cin>>resena;
                                        cout<<"Ingrese la valoracion del plato del 1-10"<<endl;
                                        int valor;
                                        cin>>valor;
                                        cout<<"----------------------------"<<endl;
                                        bode->cargararchivo();
                                        for(int i = 0; i< bode->getIngredientes().size();i++){
                                                cout<<"[ "<<c3<<" ]"<<bode->getIngredientes()[i]->getIngrediente()<<","<<bode->getIngredientes()[i]->getCantidad()<<endl;
                                                cout<<"------"<<endl;
                                                c3++;
                                        }
                                        cout<<"Ingrese la posicion de los ingredientes que quiere agregar a su plato"<<endl;
                                        int pos;
                                        cin>>pos;
                                        bode->setPlatos(new platos(nombre,resena,bode->getIngredientes()[pos],valor,cont));
                                        bode->escribirarchivoplato();
                                        //bode->escribirarchivo();
                                        cont++;


                                }
                                

                                }//fin del primer if opcion

                                cout<<endl;
                        if(opcion == 3){
                                        int o = 0;
                                        cout<<"[1] . Imprimir ingredientes"<<endl;
                                        cout<<"[2] . Imprimir Platos"<<endl;
                                        cin>>o;
                                        if(o == 1){
						bode->cargararchivo();
                                                for(int i = 0; i< bode->getIngredientes().size();i++){
                                                cout<<"[ "<<c<<" ]"<<bode->getIngredientes()[i]->getIngrediente()<<","<<bode->getIngredientes()[i]->getCantidad()<<endl;
                                                cout<<"------"<<endl;
                                                c++;
                                                
                                        } 
                                        }
                                        if(o == 2){
						bode->cargararchivoplato();
                                                 for(int i = 0; i< bode->getPlatos().size();i++){
                                                cout<<"[ "<<c1<<" ]"<<bode->getPlatos()[i]->getNombre()<<","<<bode->getPlatos()[i]->getValoracion()<<endl;
                                                     cout<<"------"<<endl;
                                                     c1++;
                                        }
                                        }


                                }
                                
                              
                                
                                
                
            
        
        cout<<"Desea continuar [s/n]: ";
		cin>>respuesta;	
    }

return 0;
}
