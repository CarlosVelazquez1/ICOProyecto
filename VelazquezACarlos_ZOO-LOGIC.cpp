#include <iostream>
#include <stdlib.h>
#include <time.h>
 
 using namespace std;
 // juego realizado por VELAZQUEZ ARGAEZ CARLOS ANDRES EMMANUEL DEL GRUPO 1158
 int main ()
 {
 	int comeback1= 1;
 	int comeback1_1=1;
 	int comeback2=1;
 	int comeback3=1;
 	int comeback4=1;
 	int comeback5=1;
 	int comeback6=1;
 	int desicion1= -5;
 	int desicion2_2= -5;
 	int desicion2_2_1 = -5;
 	int comfir2_1= -5;
 	int comfir2=-1;
 	int desicion2_3= -5;
 	int desicion2_4= -5;
 	int eleccDif=  -5;
 	int dif=-5;
 	int famarival=-5;
 	int ninos=-5;
 	int leon1=-5;
 	int leon2=-5;
 	int leon3=-5;
 	int jirafa1=-5;
 	int jirafa2=-5;
 	int jirafa3=-5;
 	int oso1=-5;
 	int oso2=-5;
 	int oso3=-5;
 	int mono1=-5;
 	int mono2=-5;
 	int mono3=-5;
 	int elef1=-5;
 	int elef2=-5;
 	int elef3=-5;
 	int eleccion1=-5;
 	int eleccion2=-5;
 	int eleccion3=-5;
 	int eleccion4=-5;
 	int eleccion5=-5;
 	int monedas=4000;//deben ser 4000 monedas
 	int famapropia=-5;
 	int nos1=0;
 	int nos2=0;
 	int nos3=0;
 	int pun1=-5;
 	int pun2=-5;
 	int pun3=-5;
 	int elecciones [5];
 	while (comeback1==1){
 		srand(time(NULL));
 	cout<< "\t\t\t\t\t\tZOO-LOGIC"<< endl;
 	//leon, jirafa, oso, mono, elefante
 	cout<< "En "<<char(130)<<"ste juego tus decisiones cambiar"<<char(160)<<"n la forma en que se va desarrollando el juego dando origen a diferentes finales";
 	cout<<", para seleccionar una opci"<<char(162)<<"n deber"<<char(160)<<"s escribir el n"<<char(163)<<"mero que se encuentra antes de la opci"<<char(162)<<"n";
 	cout<<" que deseas y posteriormente tocar una vez la tecla ENTER"<< endl;
 	cout<<"\t\t\t\t\t Menu del juego \n Que deseas hacer?"<< endl;//opci�n 1 jugar  opcion 2 creditos opcion 3 cosas a tomar en considerar para calificar, opcion 4 cerrar el juego
 	cout<<"1.Jugar\t\t 2.Creditos\t\t 3.Curiosidades del juego (se recomienda leerlo)\t\t4.Nombre del juego en forma grafica\t\t5.Salir del juego"<<endl;
 	cin>>desicion1;
 	switch(desicion1){
 		case(1):
 			while(comeback1_1==1){
				cout<<"Seleccione la dificultad que desea\n 1.Facil\t\t2.Normal\t\t3.Dificil"<<endl;
 				cin>>dif;
 				switch(dif){
 					case(1)://numeros entre el 0 y el 6000
 						famarival= rand()%6001;
 				
 						break;
 					case(2)://numeros entre el 6000 y el 8000
 						famarival=6000+rand()%(8001-6000);
 						break;
 					case(3)://numeros entre el 8000 y el 9500
 						famarival=8000+rand()%(10000-8000);
 						break;
 					default:
 						cout<<"esta dificultad no existe, favor de elegir la dificultad 1(facil), la dificultad 2 (normal) o la dificultad 3 (dificil)"<<endl;
 						cout<<"Que deseas hacer? \n 1.cerrar el juego \t\t 2.volver a la eleccion de dificultad"<<endl;
 						cin>>desicion2_2_1;
 						if(desicion2_2_1==1){
 							cout<<"esta seguro de que desea cerrar el juego?\n 1.Si\t\t\t2.No"<<endl;
 							cin>>comfir2_1;
 							if(comfir2_1==1)
							{
 							exit(0);
							}
							else{
							system("cls");
							}
			 			}
			 			else{
						system("cls");
						}
						
				}//fin del switch anidado
				if(0<dif && dif<4){
					comeback1_1=0;
				}
			}//fin del while de dificultades
				ninos=1+rand()%(4-1);//lista 1, 2 o 3
			
				
				cin.ignore();//limpia la memoria para el cin get
				
				cout<<"En una noche tormentosa en la ciudad de Santa Clarita se va la luz, ";
				cout<<"al suceder esto se desactivan todas las cerraduras el"<<char(130)<<"ctricas que hab"<<char(161)<<"an ";
				cout<<"en los "<<char(163)<<"nicos 2 zool"<<char(162)<<"gicos de la ciudad, los due"<<char(164)<<"os de estos zool"<<char(162)<<"gicos eran amigos ";//tiene �
				cout<<"y al ver el desastre que hab"<<char(161)<<"a sucedido y que los animales hab"<<char(161)<<"an hu"<<char(161)<<"do hacen una apuesta";
				cout<<" entre ellos de qui"<<char(130)<<"n iba a volver a comprar sus animales y cual zool"<<char(162)<<"gico ";
				cout<<"iba a ser el favorito de los ni"<<char(164)<<"os despu"<<char(130)<<"s de volver a llenarlo de animales"<<endl;//tiene �
				cout<<"Presiona la tecla ENTER para continuar"<<endl;
				cin.get();
				system("cls");
				//switch de dificultad y posterior el while no2
				switch(dif){
				
					case(1):
						leon1=rand()%801;
						leon2=rand()%801;
						leon3=rand()%801;
						jirafa1=rand()%801;
						jirafa2=rand()%801;
						jirafa3=rand()%801;
						oso1=rand()%801;
						oso2=rand()%801;
						oso3=rand()%801;
						mono1=rand()%801;
						mono2=rand()%801;
						mono3=rand()%801;
						elef1=rand()%801;
						elef2=rand()%801;
						elef3=rand()%801;
						break;
					case(2):
						leon1=600+rand()%(851-600);
						leon2=600+rand()%(851-600);
						leon3=600+rand()%(851-600);
						jirafa1=600+rand()%(851-600);
						jirafa2=600+rand()%(851-600);
						jirafa3=600+rand()%(851-600);
						oso1=600+rand()%(851-600);
						oso2=600+rand()%(851-600);
						oso3=600+rand()%(851-600);
						mono1=600+rand()%(851-600);
						mono2=600+rand()%(851-600);
						mono3=600+rand()%(851-600);
						elef1=600+rand()%(851-600);
						elef2=600+rand()%(851-600);
						elef3=600+rand()%(851-600);
						break;
					case(3):
						leon1=600+rand()%(1001-600);
						leon2=600+rand()%(1001-600);
						leon3=600+rand()%(1001-600);
						jirafa1=600+rand()%(1001-600);
						jirafa2=600+rand()%(1001-600);
						jirafa3=600+rand()%(1001-600);
						oso1=600+rand()%(1001-600);
						oso2=600+rand()%(1001-600);
						oso3=600+rand()%(1001-600);
						mono1=600+rand()%(1001-600);
						mono2=600+rand()%(1001-600);
						mono3=600+rand()%(1001-600);
						elef1=600+rand()%(1001-600);
						elef2=600+rand()%(1001-600);
						elef3=600+rand()%(1001-600);
						break;
					}
				while(comeback2==1){
				
					cout<<"\t\t\t\t\t\tDIA 1"<<endl;
					cout<<"Has agarrado tus 4000 monedas ahorradas, saliste de tu casa y has pensado que es una buena idea ir a comprar al Le"<<char(162)<<"n en este gran y maravilloso d"<<char(161)<<"a";
					cout<<" y decides buscar cu"<<char(130)<<"l es el mejor lugar para comprarlo, despu"<<char(130)<<"s de haber buscado por un rato encontr"<<char(162)<<" las siguientes opciones:"<<endl;
					cout<<"(Toma en cuenta que la raza de los animales pueden cambiar la popularidad que van a tener el d"<<char(161)<<"a de la apuesta)"<<endl;
				
					cout<<"1.Le"<<char(162)<<"n de "<<char(181)<<"frica y cuesta "<<leon1<<" monedas"<<endl;
					cout<<"2.Le"<<char(162)<<"n de Katanga y cuesta "<<leon2<<" monedas"<<endl;
					cout<<"3.Le"<<char(162)<<"n del Congo y cuesta "<<leon3<<" monedas"<<endl;
					cout<<"4.No comprar ninguno"<<endl; 
					cout<<"5. Salir del juego"<<endl;
					cout<<"Cu"<<char(160)<<"l opci"<<char(162)<<"n eliges?"<<endl;
					cin>>eleccion1;
					switch(eleccion1){
						case(1):
							if(monedas-leon1>=0){
								monedas=monedas-leon1;
								cout<<"decidiste comprar el le"<<char(162)<<"n de "<<char(181)<<"frica con un costo de "<<leon1<<" monedas"<<endl;
								cout<<"Actualmente te quedan "<<monedas<<" monedas"<<endl;
								cout<<"Presione ENTER para continuar"<<endl;
								cin.ignore();
								cin.get();							
							}
							else{
								cout<<"no tiene suficientes monedas para realizar esta compra, de favor elija otra opci"<<char(162)<<"n"<<endl;
								cout<<"Presione espacio para regresar y elegir otra opci"<<char(162)<<"n"<<endl;
								cin.ignore();
								cin.get();
								system("cls");
							}
							break;
						case(2):
							if(monedas-leon2>=0){
								monedas=monedas-leon2;
								cout<<"decidiste comprar el le"<<char(162)<<"n de Katanga con un costo de "<<leon2<<" monedas"<<endl;
								cout<<"Actualmente te quedan "<<monedas<<" monedas"<<endl;
								cout<<"Presione ENTER para continuar"<<endl;
								cin.ignore();
								cin.get();
							
							}
							else{
								cout<<"no tiene suficientes monedas para realizar esta compra, de favor elija otra opci"<<char(162)<<"n"<<endl;
								cout<<"Presione espacio para regresar y elegir otra opci"<<char(162)<<"n"<<endl;
								cin.ignore();
								cin.get();
								system("cls");
							}
							break;
						case(3):
							if(monedas-leon3>=0){
								monedas=monedas-leon3;
								cout<<"decidiste comprar el le"<<char(162)<<"n del Congo con un costo de "<<leon3<<" monedas"<<endl;
								cout<<"Actualmente te quedan "<<monedas<<" monedas"<<endl;
								cout<<"Presione ENTER para continuar"<<endl;
								cin.ignore();
								cin.get();
							
							}
							else{
								cout<<"no tiene suficientes monedas para realizar esta compra, de favor elija otra opci"<<char(162)<<"n"<<endl;
								cout<<"Presione espacio para regresar y elegir otra opci"<<char(162)<<"n"<<endl;
								cin.ignore();
								cin.get();
								system("cls");
							}
							break;
						case(4):
							cout<<"Haz decidido no comprar nada, por lo que seguir"<<char(160)<<"s teniendo "<<monedas<<" monedas"<<endl;
							cout<<"Presiona ENTER para continuar"<<endl;
							cin.ignore();
							cin.get();
							break;
						case(5):
							cout<<"esta seguro de que desea cerrar el juego?\n 1.Si\t\t\t2.No"<<endl;
 							cin>>comfir2;
 							if(comfir2==1)
							{
 								exit(0);
							}
							else{
								system("cls");
							}
							break;
						default:
							cout<<"Esta opci"<<char(162)<<"n no existe, favor de elegir una que si exista."<<endl;
							cout<<"Presione ENTER para continuar"<<endl;
							cin.ignore();
							cin.get();
							system("cls");
							
				}//fin del switch opciones leon
				if(0<eleccion1 && eleccion1<6){
					comeback2=0;
				}
			}//fin del while no2
				//aqui sigue el codigo para la opcion 2
				if(eleccion1==1){
					nos1=nos1+1;
				}
				else{
					if(eleccion1==2){
						nos2=nos2+1;
					}
					else{
						if(eleccion1==3){
							nos3=nos3+1;
						}
					}
				}
				
				system("cls");
			
				
 			break;
 			
 		case(2):
 			cout<<"videojuego realizado por el alumno VELAZQUEZ ARGAEZ CARLOS ANDRES EMMANUEL del grupo 1158 en la carrera de ingenieria en computacion en primer semestre de la FES Aragon"<<endl;
 			cout<<"Que deseas hacer? \n 1.cerrar el juego \t\t 2.volver al menu"<<endl;
 			cin>>desicion2_2;
 			if(desicion2_2==1){
 				cout<<"esta seguro de que desea cerrar el juego?\n 1.Si\t\t\t2.No"<<endl;
 				cin>>comfir2;
 				if(comfir2==1)
				{
 					comeback1=0;
				}
				else{
					system("cls");
				}
			}
			else{
				system("cls");
			}
 			break;

		default:
			cout<<"usted ha introducido un dato no valido para el sistema, se le recomienda poner el numero que esta antes de una opcion que si exista, presione ENTER para volver"<<endl;
			cin.ignore();
			cin.get();
			system("cls");
			}//llave del switch case
			
			
	 
	}//llave del while
	return 0;
 }
