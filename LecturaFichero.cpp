/* Realice un programa que pida al usuario el nombre o ubicación de un fichero de texto y, 
a continuación de lectura a todo el fichero. */

#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

void pedirDatos();


string nombre, texto;

int main() {
	
	ifstream archivo;		//inicializo en modo lectura del archivo
	pedirDatos();
	archivo.open(nombre.c_str(),ios::in);
	if (archivo.fail()) {
		cout<<"\nNo es posible abrir el archivo";
		exit(1);
	}
	while (!archivo.eof()) {
		getline(archivo,texto);
	}
	archivo.close();
	cout<<"\n"<<texto;
	
	return 0;
}

void pedirDatos() {
	cout<<"\nIndique el nombre del archivo de texto: ";
	getline(cin,nombre);
}
