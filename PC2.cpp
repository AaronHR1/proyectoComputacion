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
			system("cls");
			cout<<"escogiste la opcion: "<<decision<<endl;
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
			
			cout<<"Carlos: Creo que la mejor opcion es llegar al supermercado del otro lado del bosque. Hay rumores de que aun quedan suministros alla, tambien tenemos la opcion de ir a los suministros militares al sur. "<<endl;
			cout<<"Carlos: ten toma este chaleco antibalas de algo te servira"<<endl;
			cout<<"VIDA +10"<<endl;
			vida=vida+10;
		
			cout<<"tu sabes que las opciones que te da Carlos no son las mas seguras, a ti te parece mas correcto ir a una ciudad cercana y sin zombies a buscar suministros pero aun asi no quieres descartar las ideas de Carlos"<<endl;
			cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
			cout<<"1.- Ir al supermercado."<<endl;
			cout<<"2.- Ir a los suministros militares en el sur."<<endl;
			cout<<"3.- Ir a la ciudad cercana"<<endl;                                 
			cout<<"4.- rendirse/fin del juego"<<endl;
			cin>>decision;
			switch(decision){
				case 1:{
					supermercado(vida,suministros);
			
					break;
				}
				case 2:{
					system("cls");
					cout<<"escogiste la opcion: "<<decision<<endl;
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
			
					cout<<"En los suministros militares encuentras raciones de comida militar"<<endl;
					cout<<"Suministros +50"<<endl;
					suministros= suministros+10;
		
					cout<<"Gracias a lo que han encontrado le preguntas a carlos si deberian regresar con los suministros que tienen, carlos se enoja y te dice que hagas lo que quieras el va a seguir buscando suministros en el bosque "<<endl;
					cout<<"Tu consideras ir solo a buscar un nuevo bunker donde habitar"<<endl;
					cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
					cout<<"1.- Revelarse y volver al bunker con los suministros "<<endl;
					cout<<"2.- Seguir con el"<<endl;
					cout<<"3.- Ir a un nuevo bunker"<<endl;                                 
					cout<<"4.- rendirse/fin del juego"<<endl;
					cin>>decision;
					switch(decision){
					case 1:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
						cout<<"Carlos resulto ser un espia de otro bunker y te mato"<<endl;
						cout<<"mas suerte para la proxima fin del juego";
						return 0;
						break;
					}
					case 2:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
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
			
						cout<<"Decidiste seguir con Carlos, despues de un tiempo tienen una pequena discusion y Carlos te reta a una pelea"<<endl;
						
	
						cout<<" Estas muy enojado, pero tienes que ser prudente "<<endl;
				
						cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
						cout<<"1.-Peleas con Carlos  "<<endl;
						cout<<"2.- Ignoras a Carlos"<<endl;
						cout<<"3.- Decides matar a carlos "<<endl;                                 
						cout<<"4.- rendirse/fin del juego"<<endl;
						cin>>decision;
						switch(decision){
						case 1:{
							system("cls");
							cout<<"escogiste la opcion: "<<decision<<endl;
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
			
							cout<<"decidiste pelear con Carlos, despues de un tiempo los dos deciden continuar"<<endl;
						
							cout<<"Vida-50"<<endl;
							vida=vida-50;
	
								cout<<"1.- No hacer nada y quedarse con las cosas que te dio el lider"<<endl;
								cout<<"2.- Ir a un bunker en mejores condiciones."<<endl;
								cout<<"3.- Ser honesto y dirijirte a la granja"<<endl;                                 
								cout<<"4.- rendirse/fin del juego"<<endl;
								cin>>decision;
							switch(decision){
								case 1:{
								system("cls");
								cout<<"escogiste la opcion: "<<decision<<endl;
								cout<<"has decidido no hacer nada, por lo que empiezas a vagar, llegas a un pueblito desolado sin comida ni agua, mientras tu salud mental disminuye, 8 dias despues confundiste a un zombie con tu madre y este te mordio, te convertiste en un zombie."<<endl;
								cout<<"mas suerte para la proxima"<<endl;
								return 0;
								break;
								}
								case 2:{
									nuevobunker(vida,suministros);
					
								break;
								}
								case 3:{
									granja(vida,suministros);
								break;
								}
								case 4:{
								cout<<"mas suerte para la proxima"<<endl;
								return 0;
								break;
								}
								default:{
								cout<<"opcion no valida vuelve a intentar"<<endl;
								numError=true;	
									}
				
								}
							}while(numError==true);
							
					
			
							break;
						}
						case 2:{
						
							system("cls");
							cout<<"escogiste la opcion: "<<decision<<endl;
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
			
							cout<<"ignoras a carlos el esta cansado de ti y te sugiere que cada quien tome la ruta que mas quiere"<<endl;
						
							cout<<"Vida-50"<<endl;
							vida=vida-50;
	
								cout<<"1.-seguir con el "<<endl;
								cout<<"2.- Ir a un bunker en mejores condiciones."<<endl;
								cout<<"3.- Ir al supermercado "<<endl;                                 
								cout<<"4.- rendirse/fin del juego"<<endl;
								cin>>decision;
							switch(decision){
								case 1:{
								system("cls");
								cout<<"escogiste la opcion: "<<decision<<endl;
								cout<<"Decidiste seguir con el, acabaste con su paciencia y te mato,resulto ser un espia infiltrado "<<endl;
								cout<<"mas suerte para la proxima"<<endl;
								return 0;
								break;
								}
								case 2:{
									nuevobunker(vida,suministros);
					
								break;
								}
								case 3:{
									supermercado(vida,suministros);
								break;
								}
								case 4:{
								cout<<"mas suerte para la proxima"<<endl;
								return 0;
								break;
								}
								default:{
								cout<<"opcion no valida vuelve a intentar"<<endl;
								numError=true;	
									}
				
								}
							}while(numError==true);
							
					
						break;
						}
						case 3:{
							cout<<"dias despues de matar a Carlos te enfrentas a muchos zombies, hubiera sido facil si Carlos siguiera vivo te arrepientes de tu decisi�n y mueres"<<endl;
							cout<<"mas suerte para la proxima fin del juego";
							return 0;
						break;
						}
						case 4:{
						cout<<"mas suerte para la proxima"<<endl;
						return 0;
						break;
						}
						default:{
						cout<<"opcion no valida vuelve a intentar"<<endl;
						numError=true;	
						}
				
						}
						}while(numError==true);
				
						break;
						}
					case 3:{
						break;
						}
					case 4:{
						cout<<"mas suerte para la proxima"<<endl;
						return 0;
						break;
					}
					default:{
						cout<<"opcion no valida vuelve a intentar"<<endl;
						numError=true;	
					}
				
					}
					}while(numError==true);
					break;
				}
				case 3:{
					system("cls");
					cout<<"escogiste la opcion: "<<decision<<endl;
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
			
					cout<<"Decidiste ir a la ciudad a saquear algunas casas y tiendas pequenas, lastimosamente en una de estas casas te muerde un zombie a ti y a tu companero, lograr acabarlo y encuentran un poco de comida"<<endl;
					cout<<"Suministros +20"<<endl;
					suministros= suministros+20;
					cout<<"vida-50"<<endl;
					vida=vida-50;
		
					cout<<" Tienen poca salud entonces se preguntan si deben continuar o no"<<endl;
					cout<<"Tu consideras ir solo a buscar un nuevo bunker donde habitar"<<endl;
					cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
					cout<<"1.- Ir a la granja"<<endl;
					cout<<"2.- Seguir con el"<<endl;
					cout<<"3.- Ir a un nuevo bunker"<<endl;                                 
					cout<<"4.- rendirse/fin del juego"<<endl;
					cin>>decision;
					switch(decision){
					case 1:{
						granja(vida,suministros);
					
			
					break;
					}
					case 2:{
						
						system("cls");
					cout<<"escogiste la opcion: "<<decision<<endl;
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
				
					cout<<"Despues, notas que tu companero actua raro y cada vez mas agresivo, una noche despieras y ves a tu companero convertido en zombie"<<endl;
					
					

		
					cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
					cout<<"1.- Usar una pistola para matarlo "<<endl;
					cout<<"2.- Ir a un bunker cercano a pedir ayuda"<<endl;
					cout<<"3.- Intentar hacerlo reaccionar "<<endl;                                 
					cout<<"4.- rendirse/fin del juego"<<endl;
					cin>>decision;
					switch(decision){
						case 1:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
						cout<<"el ruido de la pistola atrajo a muchos zombie, no pudiste sobrevivir"<<endl;
						cout<<"mas suerte para la proxima fin del juego"<<endl;
						
						break;
						}
						case 2:{
							nuevobunker(vida,suministros);
						
							
						break;
						}
						case 3:{
							
							system("cls");
							cout<<"escogiste la opcion: "<<decision<<endl;
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
				
							cout<<"has decidido intentar hacer reaccionar a tu companero lo atas a un arbol y esperas a que llegue ayuda,pasaron dos semanas y nunca llego la ayuda" <<endl;
					
					

		
								cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
								cout<<"1.- Dejar que te muerda "<<endl;
								cout<<"2.- Seguir esperando"<<endl;
								cout<<"3.- Disparar a tu companero"<<endl;                                 
								cout<<"4.- rendirse/fin del juego"<<endl;
								cin>>decision;
								switch(decision){
								case 1:{
								system("cls");
								cout<<"escogiste la opcion: "<<decision<<endl;
								cout<<"has dejado que te muerda ahora ambos se pasean por la ciudad buscando a quien comer"<<endl;
								cout<<"Felicidades, final de los dos zombies"<<endl;
								cout<<"VIDA="<<vida<<endl;
								cout<<"Suministros="<<suministros<<endl;
								cout<<"SCORE = "<<(vida+suministros)/2;
						
								break;
								}
								case 2:{
								system("cls");
								cout<<"escogiste la opcion: "<<decision<<endl;
								cout<<" esperas una semana mas hasta que ambos mueren de hambre"<<endl;
								cout<<"mas suerte para la proxima fin del juego";
								return 0;
								
							
								break;
								}
								case 3:{
								system("cls");
								cout<<"escogiste la opcion: "<<decision<<endl;
								cout<<"el ruido de la pistola atrajo a muchos zombie, no pudiste sobrevivir"<<endl;
								cout<<"mas suerte para la proxima fin del juego";
							
					
								break;
								}
										case 4:{
								cout<<"mas suerte para la proxima"<<endl;
								return 0;
						
								break;
								}
								default:{
								cout<<"opcion no valida vuelve a intentar"<<endl;
								numError=true;	
								}
					
								}
								}while(numError==true);
							
					
									break;
								}
								case 4:{
								cout<<"mas suerte para la proxima"<<endl;
						
								break;
								}
								default:{
								cout<<"opcion no valida vuelve a intentar"<<endl;
								numError=true;	
								}
					
								}
								}while(numError==true);
				
								break;
								}
					case 3:{
						nuevobunker(vida,suministros);
					break;
					}
					case 4:{
					cout<<"mas suerte para la proxima"<<endl;
					return 0;
					break;
					}
					default:{
					cout<<"opcion no valida vuelve a intentar"<<endl;
					numError=true;	
					}
				
					}
					}while(numError==true);
					
					break;
				}
				case 4:{
					cout<<"mas suerte para la proxima"<<endl;
					return 0;
					break;
				}
				default:{
					cout<<"opcion no valida vuelve a intentar"<<endl;
					numError=true;	
				}
				
			}
			}while(numError==true);
	
			
			break;
		}
		case 2:{
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			cout<<"mas suerte para la proxima";
			return 0;
			break;
		}
		default:{
			cout<<"opcion no valida vuelve a intentar"<<endl;
			numError=true;
		
		}
	
	}
	
	} while(numError==true);

	

	
return 0;	
}


	int decision =0;
	
	bool numError1=false;
			
			bool remordimiento=false;
		
			do{
			system("cls");
			decision=0;
			cout<<"SUMINSTROS  ="<<suministros<<endl;
			cout<<"VIDA ="<<vida<<endl<<endl;
			
			if(cin.fail()){
			cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
            numError1=true;
            continue;
			}
			if(remordimiento==false){
			cout<<"han decidido ir al supermercado, hay muchos viveres suficientes para vivir tranquilamente por 2 meses, de pronto en una bodega escuchas un grito muy fuerte no es el grito de un zombie es un sobreviviente" <<endl;
			cout<<"junto a tu companero discuten si investigar o mejor prevenirse"<<endl;
			cout<<"SUMINISTROS+100"<<endl;
			
			suministros=suministros+100;
			}else{
				cout<<"reconoces que lo girtos son de un nino y el remordimiento te impide continuar"<<endl;
			}
			
		
		
			cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
			cout<<"1.- Ir a ayudar"<<endl;
			cout<<"2.- Ignorar el grito"<<endl;
			cout<<"3.- Pedirle a tu companero que regrese al bunker a pedir ayuda"<<endl;                                 
			cout<<"4.- rendirse/fin del juego"<<endl;
			cin>>decision;
			switch(decision){
				case 1:{
					system("cls");
				cout<<"escogiste la opcion: "<<decision<<endl;
				do{
			
				decision=0;
				cout<<"SUMINSTROS  ="<<suministros<<endl;
				cout<<"VIDA ="<<vida<<endl<<endl;
				
				if(cin.fail()){
				cin.clear();
         		cin.ignore(numeric_limits<streamsize>::max(), '\n');
         		cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
         		numError1=true;
		        continue;
				}
			
				cout<<"han decidido ir juntos a ayudar, ven a un nino pequeno intentando escapar de los zombies, mientras tu companero distrae a los zombies tu ayudaras a al nino, el ni�o se cae y tu companero esta rodeado de muchos zombies tienes que elegir a quien salvar "<<endl;
				cout<<"al entrar te has rasgunado con vidrios rotos"<<endl;
				cout<<"VIDA-50";
				vida=vida-50;
	
			
		
				cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
				cout<<"1.- Ayudar a el nino "<<endl;
				cout<<"2.- ayudar a tu companero"<<endl;
				cout<<"3.- no hacer nada "<<endl;                                 
				cout<<"4.- rendirse/fin del juego"<<endl;
				cin>>decision;
				switch(decision){
				case 1:{
					
					system("cls");
					cout<<"escogiste la opcion: "<<decision<<endl;
					do{
			
					decision=0;
					cout<<"SUMINSTROS  ="<<suministros<<endl;
					cout<<"VIDA ="<<vida<<endl<<endl;
			
					if(cin.fail()){
					cin.clear();
           	 		cin.ignore(numeric_limits<streamsize>::max(), '\n');
           			 cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
           			 numError1=true;
            		continue;
					}
				
					cout<<"has decidido ayudar al nino, desgraciadamente tu compa�ero muere, el nino te explica que el ya ha sido mordido por varios zombies y te muestra las marcas, parece que el nino es inmune, te ofrece que vayan a el centro de la ciudad donde unos cientificos pueden extraerle sangre y asi talvez encontrar la cura, hacer esto implica traicionar a el bunker no sabes que hacer"<<endl;
					
					

		
					cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
					cout<<"1.- Acompanarlo al centro de la ciudad "<<endl;
					cout<<"2.- Volver con los suministros encontrados y el nino"<<endl;
					cout<<"3.- seguir buscando suministros"<<endl;                                 
					cout<<"4.- rendirse/fin del juego"<<endl;
					cin>>decision;
					switch(decision){
						case 1:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
						cout<<"has decidido traicionar al bunker sabes que es lo correcto y talvez encuentren la cura"<<endl;
						cout<<"Felicidades, final de el nino"<<endl;
						cout<<"VIDA="<<vida<<endl;
						cout<<"Suministros="<<suministros<<endl;
						cout<<"SCORE = "<<(vida+suministros)/2;
						
						break;
						}
						case 2:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
						cout<<"vuelves a casa con los suministros encontrados son pocos pero te lo agradecen, mientras que el nino encuentra un hogar en el bunker, a pesar de que los habitantes tienen miedo de que un dia el nino se convierta en zombie"<<endl;
						cout<<"Felicidades, final feliz"<<endl;
						cout<<"VIDA="<<vida<<endl;
						cout<<"Suministros="<<suministros<<endl;
						cout<<"SCORE = "<<(vida+suministros)/2;
							
						break;
						}
						case 3:{
							system("cls");
							cout<<"tu avaricia fue mas grande"<<endl;
							cout<<"decidieron seguir buscando durante horas, perdiste a tu companero pero aun asi sigues buscando suministros, un zombie te muerde y te conviertes en zombie mientras e nino no puede hacer nada"<<endl;
							cout<<"mas suerte para la proxima fin del juego";
							exit(0);
							
					
						break;
						}
						case 4:{
						cout<<"mas suerte para la proxima"<<endl;
						
						break;
						}
						default:{
						cout<<"opcion no valida vuelve a intentar"<<endl;
						numError1=true;	
						}
					
						}
						}while(numError1==true);
			
						break;
					
				}
				case 2:{
					system("cls");
					cout<<"escogiste la opcion: "<<decision<<endl;
					do{
			
					decision=0;
					cout<<"SUMINSTROS  ="<<suministros<<endl;
					cout<<"VIDA ="<<vida<<endl<<endl;
			
					if(cin.fail()){
					cin.clear();
           	 		cin.ignore(numeric_limits<streamsize>::max(), '\n');
           			 cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
           			 numError1=true;
            		continue;
					}
				
				
					cout<<"decides ayudar a tu companero, resulta que el nino es inmune a los zombies y lo rescatas a pesar de que lo mordieron varias veces"<<endl;
					cout<<"el nino te platica sobre su inmunidad, y sobre como en el centro hay unos investigadores que pueden encontrar una cura con el nino, el nino les plantea la opcion de ayudarlo";
					

		
					cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
	
					cout<<"1.- Acompanarlo al centro de la ciudad "<<endl;
					cout<<"2.- Volver con los suministros encontrados y el nino"<<endl;
					cout<<"3.- seguir buscando suministros"<<endl;                                 
					cout<<"4.- rendirse/fin del juego"<<endl;
					cin>>decision;
					switch(decision){
						case 1:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
						cout<<"han decidido traicionar al bunker sabes que es lo correcto y talvez encuentren la cura"<<endl;
						cout<<"Felicidades, final de la cura"<<endl;
						cout<<"VIDA="<<vida<<endl;
						cout<<"Suministros="<<suministros<<endl;
						cout<<"SCORE = "<<(vida+suministros)/2;
						
						break;
						}
						case 2:{
						system("cls");
						cout<<"escogiste la opcion: "<<decision<<endl;
						cout<<"vuelven a casa con los suministros encontrados son pocos pero te lo agradecen, mientras que el nino encuentra un hogar en el bunker, a pesar de que los habitantes tienen miedo de que un dia el nino se convierta en zombie"<<endl;
						cout<<"Felicidades, final todos felices"<<endl;
						cout<<"VIDA="<<vida<<endl;
						cout<<"Suministros="<<suministros<<endl;
						cout<<"SCORE = "<<(vida+suministros)/2;
							
						break;
						}
						case 3:{
							system("cls");
							cout<<"tu avaricia fue mas grande"<<endl;
							cout<<"decidieron seguir buscando durante horas, perdiste a tu companero pero aun asi sigues buscando suministros, un zombie te muerde y te conviertes en zombie mientras e nino no puede hacer nada"<<endl;
							cout<<"mas suerte para la proxima fin del juego";
							exit(0);
							
					
						break;
						}
						case 4:{
						cout<<"mas suerte para la proxima"<<endl;
						
						break;
						}
						default:{
						cout<<"opcion no valida vuelve a intentar"<<endl;
						numError1=true;	
						}
					
						}
						}while(numError1==true);
					
					
				
					break;
				}
				case 3:{
					system("cls");
					cout<<"decides no hacer nada y ves a los dos morir, despues un zombie se te acerca por la espalda y mueres";
					cout<<"mas suerte para la proxima fin del juego"<<endl;
					exit(0);
					break;
				}
				case 4:{
					cout<<"mas suerte para la proxima"<<endl;
					
					exit(0);
				}
				default:{
					cout<<"opcion no valida vuelve a intentar"<<endl;
					numError1=true;	
				}
				
				}
				}while(numError1==true);
			
					
					
					break;
				}
				case 2:{
					
					remordimiento=true;
					numError1=true;
					break;
				}
				case 3:{
					system("cls");
					cout<<"has escogido la opcion: "<<decision;
					cout<<"Tu companero nunca llego no sabes si te traiciono o murio, decides ir a la bodega a investigar, encuentras mas de 5 zombies comiendo a una persona, voltean a verte y tu sabes que estas muerto"<<endl;
					cout<<"mas suerte para la proxima, fin del juego";
					
					break;
				}
				case 4:{
					cout<<"mas suerte para la proxima"<<endl;
					exit(0);
					break;
				}
				default:{
					cout<<"opcion no valida vuelve a intentar"<<endl;
					numError1=true;	
				}
				
			}
			}while(numError1==true);
			
		
	};
	//granja//
	void granja(int vida,int suministros){
	
	
	int decision=0;
	bool error= false;
	system("cls");
	cout<<"escogiste la opcion: "<<decision<<endl;
	
	
	
	
	do{
	decision=0;
	cout<<"SUMINSTROS  ="<<suministros<<endl;
	cout<<"VIDA ="<<vida<<endl<<endl;
			
	if(cin.fail()){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	 cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
	 error=true;
	continue;
	}
	
	cout<<"decidiste ir a la granja a buscar suministros parece ser el lugar indicado, pues hay muy pocos zombies "<<endl;
	cout<<"SUMINISTROS+100"<<endl;
	suministros=suministros+100;
	cout<<"a lo lejos ven un almacen con mucha comida parece irreal, emocionados corren a el almacen, escuchan como la puerta se cierra y de la oscuridad salen muchos hombres con sangre, resultan ser personas que se convirtieron en canibales debido a la falta de comida"<<endl;

	cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;

	cout<<"1.- Intentar matar a los canibales "<<endl;
	cout<<"2.- Intentar huir"<<endl;
	cout<<"3.- Fingir ser un canibal tambien"<<endl;                                 
	cout<<"4.- rendirse/fin del juego"<<endl;
	cin>>decision;
	switch(decision){
		case 1: {
			system("cls");
			cout<<"Intentaron matar a los canibales gracias a su armamento consiguen lastimar a algunos y escapar, pero los lastiman gravemente"<<endl;
			cout<<"VIDA-50";
			do{
				decision=0;
				cout<<"SUMINSTROS  ="<<suministros<<endl;
				cout<<"VIDA ="<<vida<<endl<<endl;
						
				if(cin.fail()){
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				 cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
				 error=true;
				continue;
				}
				cout<<"Se plantean volver a el almacen para acabar con los canibales y robarse todo"<<endl;
				cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;
				cout<<"1.- Regresar a matar a todos "<<endl;
				cout<<"2.- Hacerlos arrepentirse y dejar el camino de los canibales"<<endl;
				cout<<"3.- Regresar a el bunker"<<endl;                                 
				cout<<"4.- rendirse/fin del juego"<<endl;
				cin>>decision;
				
				switch(decision){
					case 1: {
						cout<<"Regresaron a matar a todos y a llevarse toda su comida"<<endl;
						cout<<"SUMINISTROS + 500"<<endl;
						cout<<"pudieron regresar a su bunker sanos y salvos, y con suministros,fin del juego"<<endl;
						cout<<"VIDA="<<vida<<endl;
						cout<<"Suministros="<<suministros<<endl;
						cout<<"SCORE = "<<(vida+suministros)/2;
						break;
					}
					case 2:{
						cout<<"son canibales no puedes razonar con ellos"<<endl;
						cout<<"mas suerte para la proxima";
						break;
					}
					case 3:{
						cout<<"regresaron al bunker con los suministros que ya tenian, a pesar de que ya no quedaban muchos canibales"<<endl;
						cout<<"cumpliste con tu deber y llevaste suministros a el bunker, fin del juego"<<endl;
						cout<<"VIDA="<<vida<<endl;
						cout<<"Suministros="<<suministros<<endl;
						cout<<"SCORE = "<<(vida+suministros)/2;
						exit(0);
						
						break;
					}
					case 4:{
						cout<<"fin del juego";
						break;
					}
					
					
				}
				
				
				
			}while(error==true);
			break;
		}
		case 2:{
			cout<<"Intentaron huir, eran muchos canibales por lo que se los comieron";
			cout<<"mas suerte para la proxima";
			break;
		}
		case 3:{
			system("cls");
			cout<<"Fingieron ser canibales por mucho tiempo vieron cosas muy desagradables, pero aun asi se aferran a no comer carne humana, esto les parece sospechoso a los canibales y les ofrecen carne de una manera violenta"<<endl;
			
			do{
				decision=0;
				cout<<"SUMINSTROS  ="<<suministros<<endl;
				cout<<"VIDA ="<<vida<<endl<<endl;
						
				if(cin.fail()){
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				 cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
				 error=true;
				continue;
				}
				cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;

				cout<<"1.- No comer de la carne y tratar se escapar "<<endl;
				cout<<"2.- Comer de la carne"<<endl;
				cout<<"3.- Decir que no tienes hambre"<<endl;                                 
				cout<<"4.- rendirse/fin del juego"<<endl;
				cin>>decision;
				
				switch(decision){
					case 1: {
						system("cls");
						cout<<"decidiste no comer, por lo que los canibales se enojan intentas escapar pero tu cuerpo esta debil de no comer y te atrapan, fin del juego";
						exit(0);

						break;
					}
					case 2:{
						system("cls");
						cout<<"decidiste comer de la carne humana, despues de unos mordiscos te empieza a gustar el sabor y te conviertes en canibal ya no necesitas comida normal, fin del juego"<<endl;
						cout<<"felicidades final del canibal";
						exit(0);
						break;
					}
					case 3:{
						system("cls");
						cout<<"llevas mucho tiempo sin comer para no tener hambre, los canibales te descubrieron fin del juego"<<endl;
						exit(0);
						
						break;
					}
					case 4:{
						system("cls");
						cout<<"fin del juego";
						break;
					}
					
					
				}
				
				
				
			}while(error==true);
			break;
		}
		case 4: {
			cout<<"mas suerte para la proxima";
			exit(0);
			break;
		}
		
		
		
	};	
		
	}while(error=true);
	

	
            	 	
	};
	

	void nuevobunker(int vida,int suministros){
			int decision=0;
			bool error= false;
			system("cls");
			cout<<"escogiste la opcion: "<<decision<<endl;
		
				cout<<"SUMINSTROS  ="<<suministros<<endl;
				cout<<"VIDA ="<<vida<<endl<<endl;
			cout<<"Es probable que otro bunker tenga comida y una vida saludable para ti, asi que dejas tu vida pasada atras para buscar una nueva"<<endl;
			
			do{
				decision=0;
				cout<<"SUMINSTROS  ="<<suministros<<endl;
				cout<<"VIDA ="<<vida<<endl<<endl;
						
				if(cin.fail()){
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				 cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
				 error=true;
				continue;
				}
				cout<<"Encuentras un nuevo bunker es muy grande y parece una ciudad por dentro tiene todo lo necesario para vivir te quedas un par de horas y el presidente del bunker te propone que te quedes pero acambio te tendras que meter a su equipo militar "<<endl;
				cout<<"meses despues en el campo de batalla, en la batalla contra un grupo de zombies vuelves a tu antiguo bunker que esta siendo amenazado por un zombie mutado muy poderoso, decides enfrentarte a el con las armas que te han dado que planeas hacer"<<endl;
				cout<<"es un zombie muy grande debes pensar muy bien cual debe ser tu primero movimiento"<<endl;
				cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;

				cout<<"1.-lanzarle una granada"<<endl;
				cout<<"2.- Lanazarte hacia el con un cuchillo"<<endl;
				cout<<"3.- Dispararle con tu metralleta"<<endl;                                 
				cout<<"4.- rendirse/fin del juego"<<endl;
				cin>>decision;
				
				switch(decision){
					case 1: {
						system("cls");
							do{
							decision=0;
							cout<<"SUMINSTROS  ="<<suministros<<endl;
							cout<<"VIDA ="<<vida<<endl<<endl;
									
							if(cin.fail()){
							cin.clear();
							cin.ignore(numeric_limits<streamsize>::max(), '\n');
							cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
							error=true;
							continue;
							}
							cout<<"le lanzaste una granada fue una buena decision, el zombie mutante te lanzo acido y perdiste vida pero perdio una pierna, ahora tienes que acabar con el"<<endl;
							cout<<"VIDA-30";
							vida=vida-30;
							cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;

							cout<<"1.- Lanzarte a cortar su otra pierna"<<endl;
							cout<<"2.- Lanzarte a cortarle un brazo"<<endl;
							cout<<"3.- Lanzarle una granada nuevamente"<<endl;                                 
							cout<<"4.- rendirse/fin del juego"<<endl;
							cin>>decision;
							
							switch(decision){
								case 1: {
									system("cls");
									cout<<"Bien hecho cortaste la pierna del otro zombie y ahora esta inmobil, tus companeros aprovechan y lo atacan todos, lograron acabar con el zombie"<<endl;
									cout<<"Bien hechosalvaste a tu viejo bunker y tu nuevo bunker te ofrecio la oportunidad de volver a tu antiguo bunker como un soldado retirado ademas de que le dan a tu antiguo bunker una racion de comida muy grande"<<endl;
									cout<<"felicidades obtuviste el final del heroe"<<endl;
									cout<<"VIDA="<<vida<<endl;
									cout<<"Suministros="<<suministros<<endl;
									cout<<"SCORE = "<<(vida+suministros)/2;
									
									exit(0);

									break;
								}
								case 2:{
									system("cls");
									cout<<"corriste a cortarle un brazo al zombie, este es muy fuerte y te termina derribando y matandote"<<endl;
									cout<<"mas suerte para la proxima";
									exit(0);
									break;
								}
								case 3:{
									system("cls");
									cout<<"fuiste a la opcion segura lanzaste otra granada, esta da en la boca del zombie haciendo explotar su cabeza"<<endl;
									cout<<"saliste ileso de la batalla"<<endl;
									cout<<"Bien hechosalvaste a tu viejo bunker y tu nuevo bunker te ofrecio la oportunidad de volver a tu antiguo bunker como un soldado retirado ademas de que le dan a tu antiguo bunker una racion de comida muy grande"<<endl;
									cout<<"felicidades obtuviste el final del heroe"<<endl;
									cout<<"VIDA="<<vida<<endl;
									cout<<"Suministros="<<suministros<<endl;
									cout<<"SCORE = "<<(vida+suministros)/2;
									
									exit(0);
									
									break;
								}
								case 4:{
									system("cls");
									cout<<"fin del juego";
									break;
								}
								
								
							}
							
							
							
						}while(error==true);

						

						break;
					}
					case 2:{
						system("cls");
						cout<<"Decides atacar el cuello del zombie con un cuchillo, este es muy fuerte y termina derribandote al suelo"<<endl;
						cout<<"suerte para la proxima";
						exit(0);
						break;
					}
					case 3:{
						do{
						decision=0;
						cout<<"SUMINSTROS  ="<<suministros<<endl;
						cout<<"VIDA ="<<vida<<endl<<endl;
								
						if(cin.fail()){
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Entrada no valida. Por favor, ingresa un numero entero." << endl;
						error=true;
						continue;
						}
						cout<<"Decidiste atacar al zombie con tu metralleta, lo llenaste de hoyos,el zombie se enoja y va a contraatacar tu tienes que defender a tus antiguos companeros del bunker"<<endl;
						cout<<"Presiona la tecla de la accion que quieras tomar y despues presiona la tecla enter"<<endl;

						cout<<"1.-Intentar bloquear el golpe"<<endl;
						cout<<"2.-Correr para que se aleje del bunker"<<endl;
						cout<<"3.- Agacharte"<<endl;                                 
						cout<<"4.- rendirse/fin del juego"<<endl;
						cin>>decision;
						
						switch(decision){
							case 1: {
								system("cls");
								cout<<"Intentas bloquear el golpe, pero el zombie es muy fuerte ¿por que pensaste que eso funcionaria?, el zombie termina golpeandote muy fuerte y mueres"<<endl;
								cout<<"mas suerte para la proxima";
								exit(0);

								break;
							}
							case 2:{
								system("cls");
								cout<<"Corres para que se aleje del bunker, esto les da suficiente tiempo a tus companeros para dejar mal herido al zombie lastimosamente alcanzo a quitarte una pierna, despues de un tiempo regresas a tu bunker reconocido como el heroe que dio su pierna por su bunker"<<endl;
								cout<<"felicidades final bueno";
								cout<<"VIDA="<<vida<<endl;
									cout<<"Suministros="<<suministros<<endl;
									cout<<"SCORE = "<<(vida+suministros)/2;
									
								
								exit(0);
								break;
							}
							case 3:{
								system("cls");
								cout<<"elegiste la mejor opcion te agachas para que tus companeros lo ataquen con un tanque, sales ileso de la batalla y te consideran un heroe"<<endl;
								cout<<"VIDA="<<vida<<endl;
									cout<<"Suministros="<<suministros<<endl;
									cout<<"SCORE = "<<(vida+suministros)/2;
									
								exit(0);
								
								break;
							}
							case 4:{
								system("cls");
								cout<<"fin del juego";
								break;
							}
					
					
							}
				
				
				
						}while(error==true);
						
						break;
					}
					case 4:{
						system("cls");
						
						cout<<"fin del juego";
						exit(0);
						break;
					}
					
					
				}
				
				
				
			}while(error==true);
	
		
	};




