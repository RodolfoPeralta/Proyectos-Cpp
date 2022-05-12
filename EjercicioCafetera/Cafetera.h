#include <iostream>
using namespace std;

class Cafetera {
	private:
		//Atributos
		int capacidadMaxima;
		int cantidadActual;
	public:
		//Constructores
		Cafetera();
		Cafetera(int);
		Cafetera(int, int);
		//Setters
		void setCapacidadMaxima(int);
		void setCantidadActual(int);
		//Getters
		int getCapacidadMaxima();
		int getCantidadActual();
		//Metodos
		void llenarCafetera();
		void servirTaza(int);
		void vaciarCafetera();
		void agregarCafe(int);	
};

//Constructores
Cafetera::Cafetera() {
	capacidadMaxima = 1000;
	cantidadActual = 0;
}

Cafetera::Cafetera(int _capacidadMaxima) {
	capacidadMaxima = cantidadActual = _capacidadMaxima;
}

Cafetera::Cafetera(int _capacidadMaxima, int _cantidadActual) {
	capacidadMaxima = _capacidadMaxima;
	if(_cantidadActual > _capacidadMaxima) 
		cantidadActual = _capacidadMaxima;
	else
		cantidadActual = _cantidadActual;	
}

//Setters
void Cafetera::setCapacidadMaxima(int _capacidadMaxima) {
	capacidadMaxima = _capacidadMaxima;
}

void Cafetera::setCantidadActual(int _cantidadActual) {
	cantidadActual = _cantidadActual;
}

//Getters
int Cafetera::getCapacidadMaxima() {
	return capacidadMaxima;
}

int Cafetera::getCantidadActual() {
	return cantidadActual;
}

//Metodos
void Cafetera::llenarCafetera() {
	cantidadActual = capacidadMaxima;
	cout<<"\nCafetera llena.";
}

void Cafetera::servirTaza(int cantidadTaza) {
	if(cantidadActual == 0) {
		cout<<"\nLa cafetera esta vacia, no te puedo servir :(";
	}
	else if(cantidadTaza >= cantidadActual){
		cantidadActual = 0;
		cout<<"\nNo quedaba suficiente para llenar la taza.";
		cout<<"\nSe sirvio lo que quedaba, cafetera ahora vacia.";
	}
	else {
		cantidadActual -= cantidadTaza;
		cout<<"\nDisfruta tu taza de cafe.";
		cout<<"\n\t -> Cantidad actual en cafetera: "<<cantidadActual;
	}
}

void Cafetera::vaciarCafetera() {
	if(cantidadActual == 0) {
		cout<<"\nLa cafetera ya esta vacia.";
	}
	else {
		cantidadActual = 0;
		cout<<"\nSe vacio la cafetera.";	
	}
	
}

void Cafetera::agregarCafe(int cantidad) {
	if(cantidadActual == capacidadMaxima) {
		cout<<"\nLa cafetera ya esta llena.";
	}
	else if((cantidadActual+cantidad) >= capacidadMaxima) {
		cantidadActual = capacidadMaxima;
		cout<<"\nLLenaste la cafetera! gracias.";
	}
	else {
		cantidadActual += cantidad;
		cout<<"\nAhora la cantidad en la cafetera es: "<<cantidadActual;
	}
}




