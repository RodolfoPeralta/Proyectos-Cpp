/* Vamos a crear una clase llamada Persona. Sus atributos son: nombre, edad y DNI. Construye los siguientes métodos para la clase:
- Un constructor, donde los datos pueden estar vacíos.
- Los setters y getters para cada uno de los atributos. 
- mostrar(): Muestra los datos de la persona.
- esMayorDeEdad(): Devuelve un valor lógico indicando si es mayor de edad. */

#include<iostream>
using namespace std;

class Persona {
	private:
		string nombre;
		int edad;
		string dni;
	public: 
		Persona();
		void setNombre(string);
		void setEdad(int);
		void setDni(string);
		void mostrar();
		bool esMayor();
	
};

/*constructor*/
Persona::Persona() {	
}

/**Setters**/
void Persona::setNombre(string _nombre) {
	nombre = _nombre;
}

void Persona::setEdad(int _edad) {
	edad = _edad;
}

void Persona::setDni(string _dni) {
	dni = _dni;
}

/**Metodos**/
void Persona::mostrar() {
	//muestro los atributos en pantalla
	cout<<"\nNombre: "<<nombre;
	cout<<"\nEdad: "<<edad;
	cout<<"\nDNI: "<<dni;
}

bool Persona::esMayor() {
	
	//Devuelve un booleano indicando si la persona es mayor de edad (true) o no (false).
	
	bool opcion;
	
	if (edad >= 18) 
		opcion = true;
	else
		opcion = false;
	
	return opcion;
}

int main() {
	
	string nom, dnii; int edadd;
	
	//creo un objeto del tipo persona
	Persona p1;	
	
	//Pido datos al usuario	
	cout<<"\nIngrese el nombre de una persona: ";
	getline(cin,nom);
	p1.setNombre(nom);
	
	cout<<"\nIndique su edad: ";
	fflush(stdin);
	cin>>edadd;
	p1.setEdad(edadd);
	
	fflush(stdin);
	
	cout<<"\nDNI: ";
	getline(cin,dnii);
	p1.setDni(dnii);
	
	p1.mostrar();
	
	if(p1.esMayor()) 
		cout<<"\nEs mayor de edad.";
	else 
		cout<<"\nEs menor de edad.";
	
	
	return 0;
}
