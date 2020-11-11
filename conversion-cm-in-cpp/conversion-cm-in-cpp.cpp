// conversion-cm-in-cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Autor: Cristian Antonio Escalante Hernandez
// Github: crisanto-dev
// Fecha: 11/10/2020
// Problema
/* Escriba un programa que convierta de centímetros a pulgadas. 
Una pulgada es igual a 2.54 centímetros. */

#include <iostream>

using namespace std;

#define PULGADA 2.54;

int main()
{
	cout << "Autor: Cristian Antonio Escalante Hernandez\n";
	cout << "Github: crisanto-dev\n";
	cout << "Problema: Escriba un programa que convierta de centímetros a pulgadas. Una pulgada es igual a 2.54 centímetros.\n";
	cout << "\n";

	cout << "Convertir: ";

	// Declaracion de variables
	bool bandera = true;
	float entrada, resultado;

	do
	{
		cin >> entrada;
		if (entrada > 0)
		{
			bandera = false;
			cout << "Estamos procesando\n";
			system("PAUSE");
		}
		else
		{
			cout << "Por favor ingrese los centimetros que desea convertir a pulgadas: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (bandera);

	resultado = entrada / PULGADA; // Por equivalencias 1 pulgada = 2.54 centimetros -> 1 cm * (1 pulg / 2.54 cm)

	cout << entrada << " cm es igual a " << resultado << " pulg \n";

	cout << "Fin del programa!";

	system("PAUSE");

	return 0;
}
