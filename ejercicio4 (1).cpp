//ejercicio 1 de la hoja 2 semana 2
#include<iostream>
#include<conio.h>


using namespace std;

int main()

{
	int nobjetos;
	int paq50, paq30, paq12;
	cout << "ingrese numero de objetos a empaquetar:"; cin >> nobjetos;
	
	paq50 = nobjetos / 50;
	paq30 = (nobjetos % 50) / 30;
	paq12 = ((nobjetos % 50) % 30) / 12;
	paq12 = ((((nobjetos % 50) % 30) % 12) != 0) ? paq12 + 1 : paq12;

		cout << "paquete de 50:" << paq50 << endl;
		cout << "paquete de 30:" << paq30 << endl;
		cout << "paquete de 12:" << paq12;
		
	_getch();
	
	
