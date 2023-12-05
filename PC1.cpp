#include <iostream>
#include <limits> 
#include <cstdlib>
using namespace std;


int main(){
	int decision=0,suministros=0,vida=100,score=0;
	bool numError= false;
	
	cout<<">>Bienvenido a ProyectoZ<<"<<endl<<endl;
	cout<<"Es el anio 1995 y una infeccion zombie se a propagado por todo el pais"<<endl;
	cout<<"Los suministros del bunker se han terminado y ahora tienes que ir a buscar mas"<<endl;
	cout<<"el lider de los supervivientes te permite eligir si ir solo o con otro superviviente"<<endl<<endl;
	
	do{
		decision=0;
		cout<<"SUMINSTROS  ="<<suministros<<endl;
		cout<<"VIDA ="<<vida<<endl<<endl;
	
		if(cin.fail()){
			cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
            numError=true;
            continue;
		}
		cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
		cout<<"1.- Ir con Carlos(un exmilitar)."<<endl;
		cout<<"2.- Ir con Alberto(un ingeniero muy inteligente)."<<endl;
		cout<<"3.- Ir solo."<<endl;                                 
		cout<<"4.- rendirse/fin del juego"<<endl;
		cin>>decision;
		
		
		switch(decision){
		case 1:{
			break;
		}
		case 2:{
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			break;
		}
		default:{
			
		}
	
	}
	
	} while(numError==true);

	

	
return 0;	
}

