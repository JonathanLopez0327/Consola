// ConsoleApplication1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
 using namespace std;

int main()

	
		{
	int pri=0,seg=0,terc=0,cuart=0,quin=0;
	int opciones;
	bool Irse;


	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_BLUE);
	
cout<<"*******      *     **         *    ******   *******"<<endl; 
cout<<"*            *     *   *      *    *        *"<<endl;
cout<<"*            *     *      *   *    ******   ******"<<endl;
cout<<"*******      *     *         **    *              *"<<endl;
cout<<"                                   ******    ******"<<endl;
                                                                                          
cout<<"\n";
cout<<"\n";
		SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
		
	   system("cls");
		cout<<"\t\t\t\t\t ***********************\n";
		cout<<"\t\t\t\t\t *Selecione El Distrito*\n"<<endl;  
		cout<<"\t\t\t\t\t ***********************\n\n";

		cout<<"\t\t\t\t\t ***********************\n";
		cout<<"\t\t\t\t\t        *1-Brooklyn*\n"<<endl;  
		cout<<"\t\t\t\t\t ***********************\n\n";


		cout<<"\t\t\t\t\t ***********************\n";
		cout<<"\t\t\t\t\t         *2-Queens*\n"<<endl;  
		cout<<"\t\t\t\t\t ***********************\n\n";


		cout<<"\t\t\t\t\t ***********************\n";
		cout<<"\t\t\t\t\t       *3-Manhattan*\n"<<endl;  
		cout<<"\t\t\t\t\t ***********************\n\n";


		cout<<"\t\t\t\t\t ***********************\n";
		cout<<"\t\t\t\t\t      *4-El Brox*\n"<<endl;  
		cout<<"\t\t\t\t\t ***********************\n\n";
		
		cout<<"\t\t\t\t\t ***********************\n";
		cout<<"\t\t\t\t\t     *5-Staten Island*\n"<<endl;  
		cout<<"\t\t\t\t\t ***********************\n\n";

		bool Cont = true;
		char Opciones1[30];
		do{
	
cin.clear();
cout<<"\nSeleccines El Distrito: ";cin>>Opciones1;
Cont = false;

    for(int i = 0; i<strlen(Opciones1) && Cont == false; i++){
	
    Cont = !isdigit(Opciones1[i]);
}
}while(Cont == true);
opciones = atoi(Opciones1);

		switch (opciones)
			
		{
		case 1:
			system("cls");
			//cines de brooklyn
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_INTENSITY);
		cout<<"Los Cines de Brooklyn son"<<endl<<endl;		
		cout<<"--------------------------\n"<<endl;
		cout<<"1-Alpine Cinema\n"<<endl;
		cout<<"2-Linden Boulevard Miltiplex Cinemas\n"<<endl;
		cout<<"3-Williamsburg Cinemas\n"<<endl;
		cout<<"4- Cobble Hill Cinemas\n"<<endl;
		
		cout<<"5-Alamo Drafthouse Cinema Dawntown Brooklyn \n"<<endl;
		cout<<"6- Nitehawk Cinema\n"<<endl;
		cout<<"7- Film Noir Cinema\n"<<endl;
		cout<<"8- United Artists Sheepshead Bay 14 IMAX & RPX\n"<<endl;
		
		

       
		char simon;
		cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>simon;
		if (simon=='s')
		{
			return main();
		}else if(simon=='n'){
		
		 bool haha = true;
		char pri1[30];
		do{
	
cin.clear();
cout<<"\nSeleccines El Cine: ";cin>>pri1;
haha = false;

    for(int i = 0; i<strlen(pri1) && haha == false; i++){
	
    haha = !isdigit(pri1[i]);
}
}while(haha == true);
pri = atoi(pri1);

		}else if(simon !='s')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>simon;
		}else if (simon!='n')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>simon;
		}else
		{
			return main();
		}
		

	

			break;

		case 2: 
			system("cls");

			//los cines de queens 
			SetConsoleTextAttribute(h,FOREGROUND_BLUE|FOREGROUND_GREEN);
			cout<<"Los Cines de Queens son:"<<endl<<endl;
			cout<<"--------------------------\n"<<endl;
			cout<<"1- Main Street Cinemas\n"<<endl;
			
			cout<<"2- UA Kaufman Astoria Cinemas 14 & RPX\n"<<endl;
			cout<<"3- Regal Cinemas Atlas Park 8\n"<<endl;
			
			
			cout<<"4-Kew Gardens Cinemas\n"<<endl;
			cout<<"5-United Artists Midway 9\n"<<endl;
			cout<<"6-College Point Multiplex Cinemas\n"<<endl;


			
		char tomasito;
		cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>tomasito;
		if (tomasito=='s')
		{
			return main();
		}else if(tomasito=='n'){
		
		bool hehe = true;
		char seg1[30];
		do{
	
cin.clear();
cout<<"\nSeleccines El Cine: ";cin>>seg1;
hehe = false;

    for(int i = 0; i<strlen(seg1) && hehe == false; i++){
	
    hehe = !isdigit(seg1[i]);
}
}while(hehe == true);
seg = atoi(seg1);

		 system("cls");
		}else if(tomasito !='s')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>tomasito;
		}else if (tomasito!='n')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>tomasito;
		}else
		{
			return main();
		}
			
		
			break;

		case 3:

			system("cls");
			//cines de manhatna
			SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);
			cout<<"Los Cines de Mahattan son:"<<endl<<endl; 
		    cout<<"--------------------------\n"<<endl;
			cout<<"1-Regal Union Square Stadium 14\n"<<endl;
			cout<<"2-Cinepolis Chelsea\n"<<endl;
			
			cout<<"3-Village East Cinema\n"<<endl;
			
			cout<<"4-City Cinemas\n"<<endl;
			
			cout<<"5-Roxy Cinemas\n"<<endl;
			
			cout<<"6-East 86th St. Cinema\n"<<endl;
			cout<<"7-Regal Cinemas Battery Park 11\n"<<endl;
			cout<<"8-AMC Lincoln Square 13\n"<<endl;
			cout<<"9-Regal Cinemas 1,2 & 3 \n"<<endl;
			cout<<"10-Regal Cinemas E-Walk 13 & RPX\n"<<endl;
			
			cout<<"11-Cinema Village \n "<<endl;
			cout<<"12-IPic Theaters \n"<<endl;
			cout<<"13-Angelika Film Center & Café \n"<<endl;
			
			
			
			cout<<"14-AMC Empire 25 \n"<<endl;
			cout<<"15-El Teatro Beekman\n "<<endl;


			
		char ram;
		cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>ram;
		if (ram=='s')
		{
			return main();
		}else if(ram=='n'){
		
		 bool hihi = true;
		char terc1[30];
		do{
	
cin.clear();
cout<<"\nSeleccines El Cine: ";cin>>terc1;
hihi = false;

    for(int i = 0; i<strlen(terc1) && hihi == false; i++){
	
    hihi = !isdigit(terc1[i]);
}
}while(hihi == true);
terc = atoi(terc1);
		 system("cls");
		}else if(ram !='s')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>ram;
		}else if (ram!='n')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>ram;
		}else
		{
			return main();
		}
			
		
			break;
		case 4:
			system("cls");
			//cines del bronx
			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_INTENSITY);

			cout<<" Los Cines de El Bronx son: "<<endl<<endl;
			cout<<"--------------------------\n"<<endl;
			cout<<"1-Concourse Plaza Multiplex Cinemas\n"<<endl;
			cout<<"2-AMC Bay Plaza Cinema 13\n"<<endl;

			
		char jeje;
		cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>jeje;
		if (jeje=='s')
		{
			return main();
		}else if(jeje=='n'){
		
		bool hoho = true;
		char cuart1[30];
		do{
	
cin.clear();
cout<<"\nSeleccines El Cine: ";cin>>cuart1;
hoho = false;

    for(int i = 0; i<strlen(cuart1) && hoho == false; i++){
	
    hoho = !isdigit(cuart1[i]);
}
}while(hoho == true);
cuart = atoi(cuart1);
		 system("cls");
		}else if(jeje !='s')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>jeje;
		}else if (jeje!='n')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>jeje;
		}else
		{
			return main();
		}
			
		
			break;
		case 5:

			system("cls");
			//cine de state ailan

			SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_BLUE);
			cout<<" Los Cines de Staten Island  son: "<<endl<<endl;
			cout<<"--------------------------\n"<<endl;
			cout<<"1-Atrium Stadium Cinemas\n"<<endl;
			cout<<"2-United Artist Staten Island 16 & RPX\n"<<endl;
			cout<<"3-United Artist Hylan Plaza 5\n"<<endl;
			

			
		char jaja;
		cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>jaja;
		if (jaja=='s')
		{
			return main();
		}else if(jaja=='n'){
		
		bool huhu = true;
		char quin1[30];
		do{
	
cin.clear();
cout<<"\nSeleccines El Cine: ";cin>>quin1;
huhu = false;

    for(int i = 0; i<strlen(quin1) && huhu == false; i++){
	
    huhu = !isdigit(quin1[i]);
}
}while(huhu == true);
quin = atoi(quin1);
		 system("cls");
		}else if(jaja !='s')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>jeje;
		}else if (jaja!='n')
		{
			cout<<"Entraste Por Error A este Distrito? Digita (s) para Volver. Si No Digite (n) y ingrese el numero de orden del cine al que desea ingresar: "<<endl;
		cin>>jaja;
		}else
		{
			return main();
		}
			
			break;
	 
		}
			switch (pri)
				

			{
			case 1:
				system("cls");
				//brooklyn alpine cinemas
				cout<<" En Alpine Cinemas Se Esta Exiviendo: "<<endl ;
				cout<<endl;
				cout<<"Como Entrenar a Tu Dragon el Mundo Oculto\nSala 1\nViernes 23/2/2019 horarios 2:10p, 4:35p \n"<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita: Angel De Batalla\nSala \nViernes 23/2/19 11:00a,1:35p,4:10p,6:45p,9:20p\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz Dia De La Muerte 2U\nSala \nVierne 23/2/19  de 1:00p a 10:00p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No es Romantico\nSala \nViernes 23/2/19 11:00a A 9:00p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Persecucion en Frio\nSala\nViernes 23/2/19 11:00a"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"La Pelicula de Lego 2: La Segunda Parte\nSala \nViernes 23/2/19 11:00a A 9:00p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<" El Prodigio\nSala \nViernes 23/2/19 6:55p A 9:15p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Lo Que Quieren Los Hombres\nSala \nViernes 23/2/19 1:30p A 9:05p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"Spider-Man: Into the Spider-Man \nSala <Vierne 23/2/19 desde 4:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
			    cout<<"*************************************************************************************"<<endl;
		        cout<<endl;
		        system("pause");
				break;

			case 2:
				system("cls");
				//linden
				cout<<"En Linden Boulevard Se Esta Exibiendo: "<<endl <<endl;
				
						cout<<"*************************************************************************************"<<endl;
				cout<<"Como Entrenar a Tu Dragon el Mundo Oculto\nSala 1\nViernes 23/2/2019 a las 10:30a A 6:35p "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita: Angel De Batalla\nSala \nViernes 23/2/19 12:35p A 12:25a"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz Dia De La Muerte 2U\nSala \nVierne 23/2/19  desde 10:40a A 12:35a"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No es Romantico\nSala \nViernes 23/2/19 10:15a A 12:25p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Persecucion en Frio\nSala\nViernes 23/2/19 10:20a A 12;40p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"La Pelicula de Lego 2: La Segunda Parte\nSala \nViernes 23/2/19 11:50a A 12:45a"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<" El Prodigio\nSala \nViernes 23/2/19   9:15p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Lo Que Quieren Los Hombres\nSala \nViernes 23/2/19 1:30p A 9:05p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"Spider-Man: Into the Spider-Man \nSala \nVierne 23/2/19 desde 4:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Peleando Co Mi Familia\nSala \nVierne 23/2/19 desde 10:45a A 12:10p"<<endl;

				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		        system("pause");
				break;

			case 3:
				system("cls");
				//wiliam
				cout<<" En Williamsburg Cinemas Se esta Exibiendo: "<<endl <<endl;

				cout<<"Como Entrenar a Tu Dragos El Mundo Oculto\nSala 1\nViernes 22/2/2019 Horarios 1:00p, 3:10p, 6:00p, 8:30p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita Angel de Batalla\nSala 4\nViernes 22/2/2019 Horarios 1:00,4:00, 7:00, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz dia de La Muerte 2\nSala 7\nViernes 23/2/2019 Horarios 1:00, 3:20, 5:40, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No Es Romantico\nSala 2\nViernes 23/2/2019 Horarios 1:00, 3:30, 5:41, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"La Pelicula lego 2 La segunda Parte\nSala 5 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Lo que quiren los Hombres\nSala 3\n Viernes 23/2/2019 Horarios 1:30, 4:15, 7:20, 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Spider Man Into the Spider man\nSala 6\n Viernes 23/2/2019 Horarios 1:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"El Favoritp\nSala 6\nViernes 23/2/2019 Horarios 9:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Libro Verde\nSala 6\nViernes 23/2/2019 Horarios 3:45, 6:35"<<endl;
				
				cout<<endl;
		        system("pause");
				break;

			case 4:
				system("cls");
				//COBILE 
				cout<<" En Cobble Hill Cinemas se esta exhibiendo: "<<endl <<endl;
				
						cout<<"*************************************************************************************"<<endl;
				cout<<"Como Entrenar a tu dragon 2 el mundo oculto\nSala 2 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita Angel de Batalla \nSala  3\nViernes 23/2/2019 Horarios 1:00, 3:50, 6:35, 9:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				
				cout<<"La Pelicula Lego La segunda Parte \nSala 4\nHoy a Las 7:00,9:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Guerra Fria\nSala 5\nViernes 23/2/2019 Horarios 1:30, 3:40, 9:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Spider Man Into the Spider Man\nSala 1\nViernes 23/2/2019 Horarios 1:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 6:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Libro Verde\nSala 1\nViernes 23/2/2019 Horarios 6:00,  9:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"La Esposa\nSala 5 \nViernes 23/2/2019 Horarios 3:45"<<endl;
				
			    cout<<endl;
		        system("pause");
				break;

				 case 5:
			   system("cls");
			   //alamo
			    
			   cout<<" En Alamo Drafthouse Cinema Dawntown Brooklyn se esta exhibiendo: "<<endl <<endl;
			   
			   cout<<"Peleando Con Mi Familia \nSala 7\nViernes 23/2/2019 Horarios 1:20, 4:10, 7:00, 9:50"<<endl;
			   cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Alita Angel de Batalla \nSala 4\nViernes 23/2/2019 Horarios 1:20, 4:25, 7:30, 10:35"<<endl;
			   cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Aves DE paso\nSala 3\nViernes 23/2/2019 Horarios 6:30, 10:50"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"La Pelicula Lego 2 La Segunda Parte \nSala 6\nViernes 23/2/2019 Horarios 12:20, 3:10, 6:00, 8:50"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Lo que Quieren Los Hombre\nSala 2\nViernes 23/2/2019 Horarios 12:45, 4:00, 7:00, 10:10"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Spider Man Into The Spider Man\nSala 1\n Viernes 23/2/2019 Horarios 4:50"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"El Favorito\nSala 1\nViernes 23/2/2019 Horarios 1:50,7:50"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 1:05,6:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 3:35,9:05"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Fp2 Beats of rage\nSala 3\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<"Ruben Brandt, Coleccionista\nSala 3\nViernes 23/2/2019 Horarios 12:45,3:50"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			   cout<<endl;
		        system("pause");
				break;

				case 7:
					system("cls");
					//nitehau
					
					cout<<" En Nitehawk Cinemas Se esta Exibiendo :"<<endl<<endl;
				
					
				
					cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Vice \nSala  \nViernes 23/2/2019 Horarios  9:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Roma \nSala\nViernes 22/2/2019 Horarios 7:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"RapSodia Bohemia\nSala\nViernes 23/2/2019 Horarios 4:25"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Hereditario\nSala \nViernes 23/2/2019 Horarios 12:10"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Unido\nSala \nViernes 23/2/2019 Horarios 12:20,  "<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 7:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 4:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
		system("pause");
					break;
				case 8:
					system("cls");

					//fillm nori
				cout<<" En Fil Noir Cinema Se esta EXhibiendo :"<<endl<<endl;

				
				cout<<"Señores del Caos\nSala 2 \nViernes 22/2/2019 Horarios 8:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Macari\n<Sala 2\nViernes 22/2/2019 Horarios 8:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
		system("pause");
				break;


				case 9:
					system("cls");
					//satdio
					cout<<" En United Artists Sheepshead Bay 14 IMAX & RPX Se esta Exibiendo :"<<endl<<endl;

				
				
				cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Vidrio \nSala 7  \nViernes 23/2/2019 Horarios  11:15, 2:25, 5:30, 8:30, 11:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Libro Verde  \nSala 9 \nViernes 22/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"RapSodia Bohemia\nSala 9\nViernes 23/2/2019 Horarios 1:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Blackkklansman\nSala 9\nViernes 23/2/19 10:15a A 7:00"<<endl;
				
				cout<<"El Favorito\nSalcout<<"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    
				cout<<"Alita Angel de Batalla \nSala 4\nViernes 23/2/2019 Horarios 1:20, 4:25, 7:30, 10:35"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Como Entrenar a tu dragon 2 el mundo oculto\nSala 2 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz dia de La Muerte 2\nSala 7\nViernes 23/2/2019 Horarios 1:00, 3:20, 5:40, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No es Romantico\nSala \nViernes 23/2/19 10:15a A 12:25p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Persecucion en Frio\nSala 8 \nViernes 23/2/19 2:20, 5:20, 8:10, 11:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
		system("pause");
					break;

					case 10:
					system("cls");
					//satdio
					cout<<" En United Artists Sheepshead Bay 14 IMAX & RPX Se esta Exibiendo :"<<endl<<endl;

				
				cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Vidrio <Sala 7  \nViernes 23/2/2019 Horarios  11:15, 2:25, 5:30, 8:30, 11:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Libro Verde  \nSala 9 \nViernes 22/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"RapSodia Bohemia\nSala 9\nViernes 23/2/2019 Horarios 1:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Blackkklansman\nSala 9\nViernes 23/2/19 10:15a A 7:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    
				cout<<"Alita Angel de Batalla \nSala 4\nViernes 23/2/2019 Horarios 1:20, 4:25, 7:30, 10:35"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Como Entrenar a tu dragon 2 el mundo oculto\nSala 2 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz dia de La Muerte 2\nSala 7\nViernes 23/2/2019 Horarios 1:00, 3:20, 5:40, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No es Romantico\nSala \nViernes 23/2/19 10:15a A 12:25p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Persecucion en Frio\nSala 8 \nViernes 23/2/19 2:20, 5:20, 8:10, 11:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
		system("pause");
					break;
					
					}
					//cartelera de queens
				switch (seg)
					 
				{
				case 1:
					cout<<"1-En  Main Street Cinemas Se Esta Exibiendo:\n"<<endl;
			
			cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Vice \nSala  \nViernes 23/2/2019 Horarios  9:30"<<endl;
				cout<<"Duracion: 1h45"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Roma \nSala\nViernes 22/2/2019 Horarios 7:00"<<endl;
				cout<<"Duracion: 1h43"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"RapSodia Bohemia\nSala\nViernes 23/2/2019 Horarios 4:25"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Hereditario\nSala \nViernes 23/2/2019 Horarios 12:10"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					
						cout<<endl;
					system("pause");
					break;
					////////////////////////////
					case 2:
						system("cls");
					
			
			cout<<"2- En UA Kaufman Astoria Cinemas 14 & RPX se Esta Exibiendo:\n"<<endl;
			
			
					cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h42"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Unido\nSala \nViernes 23/2/2019 Horarios 12:20,  "<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 7:30"<<endl;
				cout<<"Duracion: 1h41"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 4:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
					system("pause");
					break;
					///////////////////////////////
					case 3:
						system("cls");
					
			cout<<"3- En Regal Cinemas Atlas Park 8 se esta Exibiendo\n:"<<endl;
		
			cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h30"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Vice \nSala  \nViernes 23/2/2019 Horarios  9:30"<<endl;
				cout<<"Duracion: 1h41"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Roma \nSala\nViernes 22/2/2019 Horarios 7:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					
					cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 7:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 4:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
					system("pause");
					break;


					///////////////////////////////
					case 4:
						system("cls");
				
			
			
			cout<<"4-En Kew Gardens Cinemas se Esta Exibiendo:\n"<<endl;
			
			cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Vice \nSala  \nViernes 23/2/2019 Horarios  9:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Roma \nSala\nViernes 22/2/2019 Horarios 7:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"RapSodia Bohemia\nSala\nViernes 23/2/2019 Horarios 4:25"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Hereditario\nSala \nViernes 23/2/2019 Horarios 12:10"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Unido\nSala \nViernes 23/2/2019 Horarios 12:20,  "<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 7:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 4:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
					system("pause");
					break;

					///////////////////////////////
					case 5:
					
			cout<<"5-En United Artists Midway 9 se Esta Exibiendo:\n"<<endl;
			
					cout<<"RapSodia Bohemia\nSala\nViernes 23/2/2019 Horarios 4:25"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Hereditario\nSala \nViernes 23/2/2019 Horarios 12:10"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Unido\nSala \nViernes 23/2/2019 Horarios 12:20,  "<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 7:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 4:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
					system("pause");
					break;

					///////////////////////////////
					case 6:
						system("cls");
					
			cout<<"6-En College Point Multiplex Cinemas se Esta Exibeindo:\n"<<endl;


			cout<<"Peleando Con Mi Familia\nSala  \nViernes 23/2/2019 Horarios 4:35, 7:15, 9:45"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Vice \nSala  \nViernes 23/2/2019 Horarios  9:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Roma \nSala\nViernes 22/2/2019 Horarios 7:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					
					cout<<"Hereditario\nSala \nViernes 23/2/2019 Horarios 12:10"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"El Favorito\nSala 5\nViernes 23/2/2019 Horarios 10:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Unido\nSala \nViernes 23/2/2019 Horarios 12:20,  "<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Pantalones Cortos DE animacion Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 7:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<"Shrots De Accion en Vivo Nominados AL Oscar 2019\nSala 5\nViernes 23/2/2019 Horarios 4:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
					system("pause");
					break;





				}
				
			
				switch (terc)
					
				{
				//cartelera de mahatan
				case 1:
					cout<<"\t\t\tEn Regal Union Square Stadium 14 las peliculas que estan son: \n"<<endl <<endl;
				cout<<endl;
			    cout<<"Alita: Battle Angel"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Cold Pursuit"<<endl ; 
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 12:30 PM,3:20 PM,6:15 PM,9:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"The Lego Movie 2: The Second Part "<<endl ;
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a Las 10:00 AM,11:00 AM,11:50 AM,1:30 PM,4:00 PM,6:30PM,9:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"What Men Want"<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 1:00PM,3:40PM,6:20PM,9:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Spider-man: Into The Spider Verse "<<endl ;
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a Las 6:25PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"RAPSODIA BOHEMIA "<<endl ;
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		     system("pause");
				break;
				 
				  case 2:
			   system("cls");
			   cout<<"t\t\tEn Cineapolis Chelsea las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"Alita: Battle Angel"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Isn't It Romantic"<<endl ;  
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 12:00 PM,2:00 PM,4:00 PM,5:45 PM,8:00 PM,10:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THEY SHALL NOT GROW OLD "<<endl ;
				cout<<"Sala: 3"<<endl ;
			
				cout<<"Horario: a las 12:30 PM,3:20 PM,6:15 PM,9:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"VICE "<<endl ;
				cout<<"Sala: 4"<<endl ;
			
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD WAR"<<endl ;
				cout<<"Sala: 5"<<endl ;
			
				cout<<"Horario: a las 11:00 AM,1:15 PM,3:30 PM,5:45 PM,8:00 PM,10:15 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE FAVOURITE"<<endl ; 
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a Las 6:25PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GREEN BOOK"<<endl ;
				cout<<"Sala: 7"<<endl ;
			
				cout<<"Horario: a Las 10:00 AM,11:00 AM,11:50 AM,1:30 PM,4:00 PM,6:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BOHEMIAN RHAPSODY"<<endl ; 
				cout<<"Sala: 8"<<endl ;
				
				cout<<"Horario: a Las 2:20 PM,4:40 PM,7:00 PM,9:20 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"THE WIFE "<<endl ; 
				cout<<"Sala: 9"<<endl ;
				
				cout<<"Horario: a las 1:00 PM,3:40 PM,6:20 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		     system("pause");
				break;

				  case 3:
			   system("cls");
			   cout<<"t\t\tEn Village East Cinema las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"Alita: Battle Angel"<<endl ;
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE FAVOURITE"<<endl ; 
				cout<<"Sala: 2"<<endl ;
			
				cout<<"Horario: a las 12:00 PM,2:00 PM,4:00 PM,5:45 PM,8:00 PM,10:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"VICE "<<endl ;
				cout<<"Sala: 3"<<endl ;
			
				cout<<"Horario: a las 12:30 PM,3:20 PM,6:15 PM,9:05PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD WAR"<<endl ;
				cout<<"Sala: 4"<<endl ;
			
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"STAN & OLLIE"<<endl ;  
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:15 PM,3:30 PM,5:45 PM,8:00 PM,10:15 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ARCTIC"<<endl ;
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a Las 6:25PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"FREE SOLO "<<endl ;
				cout<<"Sala: 7"<<endl ;
				
				cout<<"Horario: a Las 10:00 AM,11:00 AM,11:50 AM,1:30 PM,4:00 PM,6:30 PM,9:00 PM\n"<<endl;
				
				cout<<"TO DUST"<<endl ;  
				cout<<"Sala: 8"<<endl ;
				
				cout<<"Horario: a Las 2:20PM,4:40PM,7:00PM,9:20PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"A TUBA TO CUBA"<<endl ; 
				cout<<"Sala: 9"<<endl ;
				
				cout<<"Horario: a las 1:00 PM,3:40 PM,6:20 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		     system("pause");
				break;
				
				  case 4:
			   system("cls");
			   cout<<"t\t\tEn City Cinemas las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"FALL IN LOVE AT FIRTS KISS"<<endl ;
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 12:00 PM,2:00 PM,4:00 PM,5:45 PM,8:00 PM,10:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				
				cout<<"INTEGRITY "<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 12:30 PM,3:20 PM,6:15 PM,9:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART "<<endl ; 
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"A JOURNEY OF HAPPINESS "<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:15 PM,3:30 PM,5:45 PM,8:00 PM,10:15 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"A LIFETIME TREASURE "<<endl ;
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a Las 6:25PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita: Battle Angel "<<endl ;
				cout<<"Sala: 6"<<endl ;
			
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"AMAZING SPRING "<<endl ;
				cout<<"Sala: 7"<<endl ;
			
				cout<<"Horario: a Las 10:00 AM,11:00 AM,11:50 AM,1:30 PM,4:00 PM,6:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE KNIGHT OF SHADOWS:BETWEEEN YIN AND YANG "<<endl ; 
				cout<<"Sala: 8"<<endl ;
		
				cout<<"Horario: a Las 2:20PM,4:40PM,7:00PM,9:20PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE NEW KING OF COMEDY "<<endl ; 
				cout<<"Sala: 9"<<endl ;
			
				cout<<"Horario: a las 1:00PM,3:40PM,6:20PM,9:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"HOW TO TRAIN YOUR DRAGON:THE HIDDEN WORLD "<<endl ;
				cout<<"Sala: 10"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ESCAPE ROOM "<<endl ;
				cout<<"Sala: 11"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		       system("pause");
				break;
				
				  case 5:
			   system("cls");
			   cout<<"t\t\tEn Roxy Cinema las peliculas que estan son: "<<endl <<endl;
			   cout<<endl;
			    cout<<"THE LAST EMPEROR"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 7:10 PM,9:40 PM\n"<<endl;
				
			    cout<<"A STAR IS BORN "<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 5:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"LA COMMARE SECCA "<<endl ;
				cout<<"Sala: 3"<<endl ;
			
				cout<<"Horario: a Las 7:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BOHEMIAN RKAPSODY "<<endl ;
				cout<<"Sala: 4"<<endl ;
		
				cout<<"Horario: a las 9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"FIRST MAN "<<endl ;
				cout<<"Sala: 5"<<endl ;
		
				cout<<"Horario: a Las 7:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;



				  case 6:
			   system("cls");
			   cout<<"t\t\tEn East 86th St. Cinema las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
				cout<<"Alita: Battle Angel"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2:THE SECOND PART "<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a Las 10:00 AM,11:00 AM,11:50 AM,1:30 PM,4:00 PM,6:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"VICE "<<endl ;
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a Las 2:20PM,4:40PM,7:00PM,9:20PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"COLD WAR "<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 1:00PM,3:40PM,6:20PM,9:00PM\n"<<endl;
				 cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BOHEMIAN RHAPSODY "<<endl ; 
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:35 PM,4:10 PM,6:45 PM,9:20 PM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;


				  case 7:
			   system("cls");
			   cout<<"t\t\tEn Regal Cinemas Battery Park 11 las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"ALITA: BATTLE ANGEL"<<endl ;
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario:  a las 12:35 PM,3:30 PM,6:30 PM,9:30 PM,12:20 AM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"HAPPY DEATH DAY 2U"<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 11:30 AM,1:30 PM,1:00PM,2:00 PM,3:30 PM,4:35 PM,6:35 PM,7:10 PM,\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ISN´T IT ROMANTIC"<<endl ; 
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a las 11:20 AM,1:45 PM,4:15 PM,6:45 PM,9:15 PM,11:45 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD PURSUIT"<<endl ;
				cout<<"Sala: 4"<<endl ;
			
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl ; 
				cout<<"Sala: 5"<<endl ;
			
				cout<<"Horario: a Las 11:15 AM,11:50 AM,1:55 PM,2:25 PM,4:30 PM,5:00PM,7:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE PRODIGY "<<endl ; 
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a Las 10:20 AM,12:45 PM,3:10 PM,5:30 PM,7:50 PM,10:15 PM,12:35 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"WHAT MEN WANT"<<endl ;
				cout<<"Sala: 7"<<endl ;
			
				cout<<"Horario: a las 10:05 AM,11:55 AM,12:55 PM,2:50 PM,3:45 PM,6:10 PM,6:40 PM,9:00 PM,9:35 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GLASS"<<endl ;
				cout<<"Sala: 8"<<endl ;
			
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"SPIDER-MAN: INTO THE SPIDER VERSE"<<endl ;	
				cout<<"Sala: 9"<<endl ;
				
				cout<<"Horario: a Las 11:05 AM,1:40 PM,4:15 PM,6:50 PM,9:25 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE FAVOURITE "<<endl ;
				cout<<"Sala: 10"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:30 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"GREEN BOOK"<<endl ;
				cout<<"Sala: 11"<<endl ;
				
				cout<<"Horario: a las 12:00AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"A STAR IS BORN "<<endl ;
				cout<<"Sala: 12"<<endl ;
			
				cout<<"Horario: a las 10:15 AM,12:40 PM,3:05 PM,5:30 PM,7:55 PM,10:20 PM,12:45 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BLACKKLANSMAN "<<endl ; 
				cout<<"Sala: 13"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BLACK PANTHER "<<endl ; 
				cout<<"Sala: 14"<<endl ;
				
				cout<<"Horario: a las 12:25 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

				  case 8:
			   system("cls");
			   cout<<"t\t\tEn AMC Lincoln Square 13 las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"FIGHTING WITH MY FAMILY"<<endl ;
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 11:30 AM,1:30 PM,1:00PM,2:00 PM,3:30 PM,4:35PM,6:35PM,7:10PM,\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"ALITA: BATTLE ANGEL"<<endl ; 
				cout<<"Sala: 2"<<endl ;
			
				cout<<"Horario: a las 12:35 PM,3:30 PM,6:30 PM,9:30 PM,12:20 AM\n "<<endl ;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ISN´T IT ROMANTIC"<<endl ;
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a las 11:20 AM,1:45 PM,4:15 PM,6:45 PM,9:15 PM,11:45PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD PURSUIT "<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl ;
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a Las 11:15 AM,11:50 AM,1:55 PM,2:25 PM,4:30 PM,5:00PM,7:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE PRODIGY "<<endl ;
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a Las 10:20 AM,12:45 PM,3:10 PM,5:30 PM,7:50 PM,10:15 PM,12:35 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"WHAT MEN WANT "<<endl ;
				cout<<"Sala: 7"<<endl ;
				
				cout<<"Horario: a las 10:05 AM,11:55 AM,12:55 PM,2:50 PM,3:45 PM,6:10 PM,6:40 PM,9:00 PM,9:35 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THEY SHALL NOT GROW"<<endl ; 
				cout<<"Sala: 8"<<endl ;
			
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ON THE BASIS OF SEX "<<endl ;
				cout<<"Sala: 9"<<endl ;
				
				cout<<"Horario: a Las 11:05 AM,1:40 PM,4:15 PM,6:50 PM,9:25 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"VICE "<<endl ;
				cout<<"Sala: 10"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:30 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"SPIDER-MAN: INTO THE SPIDER VERSE"<<endl ; 
				cout<<"Sala: 11"<<endl ; 
				
				cout<<"Horario: a las 12:25 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE FAVOURITE"<<endl ;
				cout<<"Sala: 12"<<endl ;
				
				cout<<"Horario: a las 12:25 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"GREEN BOOK"<<endl ; 
				cout<<"Sala: 11"<<endl ;
				
				cout<<"Horario: a las 12:00AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BOHEMIAN RHAPSODY"<<endl ;
				cout<<"Sala: 11"<<endl ;
				
				cout<<"Horario: a las 10:15 AM,12:40 PM,3:05 PM,5:30 PM,7:55 PM,10:20 PM,12:45 PM\n"<<endl;
	cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

				  case 9:
			   system("cls");
			   cout<<"t\t\tEn Regal Cinemas 1,2 & 3 las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"EVERYBODY KNOWS"<<endl ;
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 7:10 PM,9:40 PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"THEY SHALL NOT GROW OLD"<<endl ; 
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 5:00 PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"COLD WAR "<<endl ;
				cout<<"Sala: 3"<<endl ;
				

				cout<<"Horario: a las 7:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

				  case 10:
			   system("cls");
			   cout<<"t\t\tEn Regal Cinemas E-Walk 13 & RPX las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"ALITA: BATTLE ANGEL "<<endl ;
				cout<<"Sala: 1"<<endl ;
			
				cout<<"Horario: a las 12:35 PM,3:30 PM,6:30 PM,9:30 PM,12:20 AM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"HAPPY DEATH DAY 2U"<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario:  a las 11:30 AM,1:30 PM,1:00PM,2:00 PM,3:30 PM,4:35 PM,6:35 PM,7:10 PM,\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ISN´T IT ROMANTIC"<<endl ;
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a las 11:20 AM,1:45 PM,4:15 PM,6:45 PM,9:15 PM,11:45 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD PURSUIT"<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30 PM,9:20 PM,12:10 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl ;
				cout<<"Sala: 5"<<endl ;
		
				cout<<"Horario: a Las 11:15 AM,11:50 AM,1:55 PM,2:25 PM,4:30 PM,5:00PM,7:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"WHAT MEN WANT"<<endl ;
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a las 10:05 AM,11:55 AM,12:55 PM,2:50 PM,3:45 PM,6:10 PM,6:40 PM,9:00 PM,9:35 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"QUE LEON"<<endl ;
				cout<<"Sala: 7"<<endl ;
				
				cout<<"Horario: a Las 10:20 AM,12:45 PM,3:10 PM,5:30 PM,7:50 PM,10:15 PM,12:35 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GLASS"<<endl ;
				cout<<"Sala: 8"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE UPSIDE"<<endl ;	
				cout<<"Sala: 9"<<endl ;
			
				cout<<"Horario: a Las 11:05 AM,1:40 PM,4:15 PM,6:50 PM,9:25 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"SPIDER-MAN: INTO THE SPIDER VERSE"<<endl ;
				cout<<"Sala: 10"<<endl ;
				


				cout<<"Horario: a las 11:00 AM,1:30 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

				  case 11:
			   system("cls");
			   cout<<"t\t\tEn Cinema Village las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"A STAR IS BORN"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 7:10 PM,9:40 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"THE HEIRESSES"<<endl ; 
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 5:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"PARKLAND:INSIDE BUILDING 12 "<<endl ; 
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a Las 9:05 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

				  case 12:
			   system("cls");
			   cout<<"t\t\tEn IPic Theaters las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"ALITA: BATTLE ANGEL"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 12:35 PM,3:30 PM,6:30 PM,9:30 PM,12:20 AM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"HAPPY DEATH DAY 2U"<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario:  a las 11:30 AM,1:30 PM,1:00PM,2:00 PM,3:30 PM,4:35PM,6:35PM,7:10PM,\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ISN´T IT ROMANTIC"<<endl ;  
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a las 11:20 AM,1:45 PM,4:15 PM,6:45 PM,9:15 PM,11:45PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD PURSUIT"<<endl ;  
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl ;
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a Las 11:15 AM,11:50 AM,1:55 PM,2:25 PM,4:30 PM,5:00PM,7:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"WHAT MEN WANT"<<endl ;
				cout<<"Sala: 6"<<endl ;
				
				cout<<"Horario: a las 10:05 AM,11:55 AM,12:55 PM,2:50 PM,3:45 PM,6:10 PM,6:40 PM,9:00 PM,9:35 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GLASS "<<endl ;
				cout<<"Sala: 7"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

				case 13:
			   system("cls");
			   cout<<"t\t\tEn Angelika Film Center & Café las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"FIGHTING WITH MY FAMILY"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 7:10 PM,9:40 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"EVERYBODY KNOWS"<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 5:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"IF BEALE STREET COULD TALK"<<endl ; 
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a Las 7:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"NEVER LOOK AWAY"<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 9:00PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"RUBEN BRANDT COLLECTOR "<<endl ;
				cout<<"Sala: 5"<<endl ;
			
				cout<<"Horario:  a Las 7:00PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

					case 14:
			   system("cls");
			   cout<<"t\t\tEn AMC Empire 25 las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"ALITA: BATTLE ANGEL"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 12:35 PM,3:30 PM,6:30 PM,9:30 PM,12:20 AM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"FALL IN LOVE AT FIRTS KISS "<<endl ;
				cout<<"Sala: 2"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GULLY BOY"<<endl ;
				cout<<"Sala: 3"<<endl ;
			
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"HAPPY DEATH DAY 2U "<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 11:30 AM,1:30 PM,1:00PM,2:00 PM,3:30 PM,4:35PM,6:35PM,7:10PM,\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ISN´T IT ROMANTIC"<<endl ;
				cout<<"Sala: 5"<<endl ;
				
				cout<<"Horario: a las 11:20 AM,1:45 PM,4:15 PM,6:45 PM,9:15 PM,11:45PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD PURSUIT"<<endl ; 
				cout<<"Sala: 6"<<endl ;
			
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl ;
				cout<<"Sala: 7"<<endl ;
				
				cout<<"Horario: a Las 11:15 AM,11:50 AM,1:55 PM,2:25 PM,4:30 PM,5:00PM,7:05PM\n"<<endl;
				
				cout<<"THE PRODIGY "<<endl ;
				cout<<"Sala: 8"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE WANDERING EARTH"<<endl ;
				cout<<"Sala: 9"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"WHAT MEN WANT"<<endl ;
				cout<<"Sala: 10"<<endl ;
				
				cout<<"Horario: a las 10:05 AM,11:55 AM,12:55 PM,2:50 PM,3:45 PM,6:10 PM,6:40 PM,9:00 PM,9:35 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"PEGASUS"<<endl ;
				cout<<"Sala: 11"<<endl ;
			

				cout<<"Horario: a Las 10:20 AM,12:45 PM,3:10 PM,5:30 PM,7:50 PM,10:15 PM,12:35 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"EN LADKI KO DEKHA TOH AISA LAGA"<<endl ;
				cout<<"Sala: 12"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"MISS BALA"<<endl ;
				cout<<"Sala: 13"<<endl ;
			
				cout<<"Horario:  a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THEY SHALL NOT GROW OLD"<<endl ;
				cout<<"Sala: 14"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GLASS"<<endl ;
				cout<<"Sala: 15"<<endl ;
			
				cout<<"Horario: a Las 11:05 AM,1:40 PM,4:15 PM,6:50 PM,9:25 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE UPSIDE"<<endl ;
				cout<<"Sala: 16"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
			cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ESCAPE ROOM "<<endl ;
				cout<<"Sala: 17"<<endl ;
			
				cout<<"Horario:  a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"AQUAMAN "<<endl ;
				cout<<"Sala: 18"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BUMBLEBEE"<<endl ;
				cout<<"Sala: 19"<<endl ;
			
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"SPIDER-MAN: INTO THE SPIDER VERSE"<<endl ;
				cout<<"Sala: 20"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:30 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE FAVOURITE"<<endl ; 
				cout<<"Sala: 21"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"AQUAMAN"<<endl ;
				cout<<"Sala: 22"<<endl ;
				cout<<"Genero:"<<endl ;
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"RALPH BREAKS THE INTERNET"<<endl ;
				cout<<"Sala: 23"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GREEN BOOK"<<endl ;
				cout<<"Sala: 24"<<endl ;
				
				cout<<"Horario: a las 11:00 AM,1:30 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BOHEMIAN RHAPSODY"<<endl ;
				cout<<"Sala: 25"<<endl ;
			
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"EXTREME JOB "<<endl ;
				cout<<"Sala: 26"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;

					case 15:
			   system("cls");
			   cout<<"t\t\t En El Teatro Beekman las peliculas que estan son: \n"<<endl <<endl;
			   cout<<endl;
			    cout<<"ALITA: BATTLE ANGEL"<<endl ; 
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 7:10 PM,9:40 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"ON THE BASIS OF SEX"<<endl ;
				cout<<"Sala: 2"<<endl ;
			
				cout<<"Horario:  a las 5:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
			    cout<<"IF BEALE STREET COULD TALK"<<endl ;
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a Las 7:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"BREAKFAST AT TIFFANY´S "<<endl ;
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<endl;
		      system("pause");
				break;
			  
				}
					switch (cuart)
						
					{
			case 1:
				system("cls");
				//cartelera del brox

				cout<<" En Concourse Plaza Multiplex Cinemas Se esta Exbiendo :"<<endl<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Como Entrenar a tu dragon 2 el mundo oculto\nSala 2 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita Angel de Batalla \nSala  3\nViernes 23/2/2019 Horarios 1:00, 3:50, 6:35, 9:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Que Leon\nSala 1\nViernes 22/2/2019 Horarios 10:15"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					cout<<endl;
		system("pause");
				break;
			case 2:
				system("cls");
					cout<<" En AMC Plaza Cinema 13 Se esta Exibiendo :"<<endl<<endl;
					
			    cout<<"Alita Angel de Batalla \nSala 4\nViernes 23/2/2019 Horarios 1:20, 4:25, 7:30, 10:35"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Como Entrenar a tu dragon 2 el mundo oculto\nSala 2 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz dia de La Muerte 2\nSala 7\nViernes 23/2/2019 Horarios 1:00, 3:20, 5:40, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No es Romantico\nSala \nViernes 23/2/19 10:15a A 12:25p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Persecucion en Frio\nSala 8 \nViernes 23/2/19 2:20, 5:20, 8:10, 11:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						cout<<endl;
		system("pause");
						break;
						
 
   
					}

					switch (quin)
						
					{
					case 1:
						//state ailan cartelera
						system("cls");
						cout<<" En Atrium Stadium Cinemas  Se esta Exibiendo :"<<endl<<endl;
						cout<<"Como Entrenar a tu dragon 2 el mundo oculto\nSala 2 \nViernes 23/2/2019 Horarios 1:00, 3:30, 6:00, 8:30"<<endl;
						cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Alita Angel de Batalla \nSala  3\nViernes 23/2/2019 Horarios 1:00, 3:50, 6:35, 9:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Feliz dia de La Muerte 2\nSala 7\nViernes 23/2/2019 Horarios 1:00, 3:20, 5:40, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;

				cout<<"No es Romantico\nSala \nViernes 23/2/19 10:15a A 12:25p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
						
				cout<<"Persecucion en Frio\nSala 8 \nViernes 23/2/19 2:20, 5:20, 8:10, 11:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
							cout<<endl;
		system("pause");
						break;
					case 2:
					    system("cls");
						cout<<" En United Artist Staten Island 16 & RPX Se esta EXhibiendo :"<<endl<<endl;
						cout<<"ALITA: BATTLE ANGEL "<<endl ;
				cout<<"Sala: 1"<<endl ;
				
				cout<<"Horario: a las 12:35 PM,3:30 PM,6:30 PM,9:30 PM,12:20 AM\n "<<endl ;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"HAPPY DEATH DAY 2U "<<endl ; 
				cout<<"Sala: 2"<<endl ;
			
				cout<<"Horario: a las 11:30 AM,1:30 PM,1:00PM,2:00 PM,3:30 PM,4:35PM,6:35PM,7:10PM,\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"ISN´T IT ROMANTIC"<<endl ;
				cout<<"Sala: 3"<<endl ;
				
				cout<<"Horario: a las 11:20 AM,1:45 PM,4:15 PM,6:45 PM,9:15 PM,11:45PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"COLD PURSUIT"<<endl ; 
				cout<<"Sala: 4"<<endl ;
				
				cout<<"Horario: a las 10:00 AM,12:50 AM,3:40 PM,6:30PM,9:20PM,12:10PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl ;
				cout<<"Sala: 5"<<endl ;
			
				cout<<"Horario: a Las 11:15 AM,11:50 AM,1:55 PM,2:25 PM,4:30 PM,5:00PM,7:05PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE PRODIGY "<<endl ;
				cout<<"Sala: 6"<<endl ;
			
				cout<<"Horario: a Las 10:20 AM,12:45 PM,3:10 PM,5:30 PM,7:50 PM,10:15 PM,12:35 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"THE WANDERING EARTH"<<endl ;
				cout<<"Sala: 7"<<endl ;
				
				cout<<"Horario: a las 12:00AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"WHAT MEN WANT"<<endl ;
				cout<<"Sala: 8"<<endl ;
				
				cout<<"Horario: a las 10:15 AM,12:40 PM,3:05 PM,5:30 PM,7:55 PM,10:20 PM,12:45 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Green Book "<<endl ;
				cout<<"Sala: 9"<<endl ;
				
				cout<<"Horario: a las 12:45 PM,3:30 PM,9:00 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"GLASS"<<endl ;
				cout<<"Sala: 10"<<endl ;
			
				cout<<"Horario: a las 12:25 AM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"SPIDER-MAN: INTO THE SPIDER VERSE"<<endl ;	
				cout<<"Sala: 11"<<endl ;
			
				cout<<"Horario: a Las 11:05 AM,1:40 PM,4:15 PM,6:50 PM,9:25 PM\n"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
					    cout<<endl;
		                system("pause");
						break;
					case 3:
						system("cls");
						cout<<" En United Artist Hylan Plaza 5 Se esta Exibiendo :"<<endl<<endl;
						cout<<"Alita Angel de Batalla \nSala  3\nViernes 23/2/2019 Horarios 1:00, 3:50, 6:35, 9:20"<<endl;
						cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;

				cout<<"F0.eliz dia de La Muerte 2\nSala 7\nViernes 23/2/2019 Horarios 1:00, 3:20, 5:40, 8:00, 10:20"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"No es Romantico\nSala \nViernes 23/2/19 10:15a A 12:25p"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
				cout<<"Persecucion en Frio\nSala 8 \nViernes 23/2/19 2:20, 5:20, 8:10, 11:00"<<endl;
				cout<<"Duracion: 1h40"<<endl;
						cout<<"*************************************************************************************"<<endl;
		                system("pause");
						break;
					
  
					}

						char toma;
						

						cout<<"Si Desea Salir Digite (s), Si Desea Regresar Digite (n)";
						cin>>toma;

						if (toma=='s')
						{
							(isdigit(toma));
							return 0;
						}else if (toma=='n')
						{
							(isdigit(toma));
							system ("cls");
							return main();
						}else if(toma!='s')
						{
							cout<<"Si Desea Salir Digite (s), Si Desea Regresar Digite (n)";
						cin>>toma;
						}else if (toma!='n')
						{
							cout<<"Si Desea Salir Digite (s), Si Desea Regresar Digite (n)";
						cin>>toma;
						}else
						{
							return main();
						}
						
   
system("pause");
	return 0;
	}
	
	
	