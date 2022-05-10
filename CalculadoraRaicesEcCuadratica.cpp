#include <iostream>
#include <math.h>
using namespace std;

class Raices {
	private:
		//Atributos
		float a;
		float b;
		float c;
	public:
		Raices(float, float, float); //Constructor
		//Metodos
		void calcular(); //Metodo publico, unico al que puede acceder el usuario.
	private:
		//Metodos privados, no pueden ser vistos o usados por el usuario.
		void obtenerRaices();
		void obtenerRaiz();
		float getDiscriminante();
		bool tieneRaices();
		bool tieneRaiz();
		
};

//Constructor
Raices::Raices(float _a, float _b, float _c) {
	a = _a;
	b = _b;
	c = _c;
	
	//Lamo al metodo que calcula el discriminante.
	getDiscriminante();
}

//Metodos
float Raices::getDiscriminante() {
	
	//Calculo del discriminante
	float discriminante;
	
	discriminante = pow(b,2) - (4*a*c);
	
	return discriminante;
}

bool Raices::tieneRaiz() {
	
	//Devuelvo true si el discriminante es igual a cero --> raices reales dobles.
	if(Raices::getDiscriminante() == 0) {
		return true;
	}
	return false;
}

bool Raices::tieneRaices() {
	
	//discriminante=0 es mayor a 0, raices reales, si es menor a 0 las raices son complejas.
	if(Raices::getDiscriminante() > 0) {
		return true;
	}
	else if(Raices::getDiscriminante() < 0) {
		return false;
	}
}

void Raices::obtenerRaiz() {
	
	//Calculo de las raices dobles.
	float x;
	
	if(Raices::tieneRaiz()) {
		x = -b/(2*a); 
		cout<<"\nLa raiz doble es -> x12 = "<<x;
	}
}

void Raices::obtenerRaices() {
	
	
	//Calculo de las raices reales y distintas o de las complejas conjugadas.
	float x1, x2, deter, real, imaginario;
	
	if(Raices::tieneRaices()) { //Si discriminante es mayor a cero
		x1 = (-b/(2*a)) + (sqrt(Raices::getDiscriminante())/(2*a));
		x2 = (-b/(2*a)) - (sqrt(Raices::getDiscriminante())/(2*a));
		cout<<"\nLas raices reales y distintas son: ";
		cout<<"\nx1: "<<x1;
		cout<<"\nx2: "<<x2;
	}
	else { //Si el discriminante es menor a cero
		deter = Raices::getDiscriminante()*(-1);
		
		real = -b/(2*a);
		imaginario = (sqrt(deter))/(2*a);
		
		cout<<"\nLas raices complejas conjugadas son: ";
		cout<<"\nx12 = "<<real<<" +- j("<<imaginario<<")";
	}
}

void Raices::calcular() {
	if(tieneRaiz()) {
		cout<<"\nEl determinante es igual a cero -> raices reales e iguales.";
		obtenerRaiz();
	}
	else if(tieneRaices()) {
		cout<<"\nDeterminante = "<<Raices::getDiscriminante()<<". -> Raices reales y distintas.";
		obtenerRaices();
	}
	else {
		cout<<"\nDeterminante = "<<Raices::getDiscriminante()<<". -> Raices complejas conjugadas.";
		obtenerRaices();
	}
}

int main() {
	
	float a,b,c;
	
	//Pido los datos al usuario.
	cout<<"\n\t**Calculo raices polinomio de 2do orden**";
	cout<<"\n\nIngrese valor de a: ";
	cin>>a;
	cout<<"\n\nIngrese valor de b: ";
	cin>>b;
	cout<<"\n\nIngrese valor de c: ";
	cin>>c;
	
	Raices objeto1(a,b,c); //Instanciación de la clase Raices.
	system("cls"); //Limpio la pantalla para mostrar los resultados.
	objeto1.calcular();
	
	
	return 0;
}
