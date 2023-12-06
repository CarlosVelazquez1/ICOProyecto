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
 	cout<<"\t\t\t\t\t Menu del juego \n Que deseas hacer?"<< endl;//opción 1 jugar  opcion 2 creditos opcion 3 cosas a tomar en considerar para calificar, opcion 4 cerrar el juego
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
				cout<<"en los "<<char(163)<<"nicos 2 zool"<<char(162)<<"gicos de la ciudad, los due"<<char(164)<<"os de estos zool"<<char(162)<<"gicos eran amigos ";//tiene ñ
				cout<<"y al ver el desastre que hab"<<char(161)<<"a sucedido y que los animales hab"<<char(161)<<"an hu"<<char(161)<<"do hacen una apuesta";
				cout<<" entre ellos de qui"<<char(130)<<"n iba a volver a comprar sus animales y cual zool"<<char(162)<<"gico ";
				cout<<"iba a ser el favorito de los ni"<<char(164)<<"os despu"<<char(130)<<"s de volver a llenarlo de animales"<<endl;//tiene ñ
				cout<<"Presiona la tecla ENTER para continuar"<<endl;
				cin.get();
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
