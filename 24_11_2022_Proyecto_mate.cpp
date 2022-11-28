// 24_11_2022_Proyecto_mate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Probabilidad
//Daniel Medina

#include <iostream>
#include<cstdlib>

using namespace std;

int main() 
{
	srand(time(0));
	int Probabilidaddevariables;
	int accion, ATK, DEF, opc;
	float x, y, r;
	int vida = 100;

	cout<<"Bienvenido a tu nuevo gimnasio\n Entrenmos, ten a un squartle para que inices\n";
	cout << "Rival: No venceras a mi mojonix\n";
	
	while(vida>1)
	{
		cout << "Tienes dos opcines;  1 ATK o  0 DEF\n";
		cin >> accion;
		if (accion == 1) 
		{
			cout<<"Quieres un ATK debil1, medio2 o fuerte3;\n";     
			cin >> opc;
			switch (opc) {
			case 1:
				cout << "Seleccionaste ATK debil\n";
				Probabilidaddevariables = 1 + rand() % 10;
				if (Probabilidaddevariables > 0 && Probabilidaddevariables < 9)
				{
					cout << "El enemigo perdio -10 de vida\n";
					vida = vida - 10;
				}
				else
				{
					cout << "Fallaste bro\n";
				}
					break;
			case 2:
				cout << "Seleccionaste ATK medio\n";
				Probabilidaddevariables = 1 + rand() % 10;
				if (Probabilidaddevariables > 0 && Probabilidaddevariables < 6)
				{
					cout << "El enemigo perdido 25 de vida\n";
					vida = vida - 25;
				}
				else 
				{
					cout << "Fallaste bro\n";
				}
				break;
			case 3:
				cout << "Seleccionaste ATK Fuerte\n";
				Probabilidaddevariables = 1 + rand() % 10;
				if (Probabilidaddevariables > 0 && Probabilidaddevariables < 3)
				{
					cout << "El enemigo perdio 50 de vida\n";
					vida = vida - 50;
				}
				else
				{
					cout << "Fallaste bro\n";
				}
			break;

				
			}
		}
		else if(accion == 0)
		{
			cout << "Te defendiste ";
			
		}
	} 
	cout << "Ganaste " << endl;
	return 0;
}