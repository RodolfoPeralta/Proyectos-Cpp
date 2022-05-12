/* Desarrolla una clase Cafetera con atributos _capacidadMaxima (la cantidad m�xima
de caf� que puede contener la cafetera) y _cantidadActual (la cantidad actual de caf�
que hay en la cafetera). Implementa, al menos, los siguientes m�todos:
* Constructor predeterminado: establece la capacidad m�xima en 1000 (c.c.)
y la actual en cero (cafetera vac�a).
* Constructor con la capacidad m�xima de la cafetera; inicializa la cantidad actual de
caf� igual a la capacidad m�xima.
* Constructor con la capacidad m�xima y la cantidad actual. Si la cantidad actual es
mayor que la capacidad m�xima de la cafetera, la ajustar� al m�ximo.
* Getters y Setters.
* llenarCafetera(): pues eso, hace que la cantidad actual sea igual a la capacidad.
* servirTaza(int): simula la acci�n de servir una taza con la capacidad indicada.
Si la cantidad actual de caf� �no alcanza� para llenar la taza, se sirve lo que quede.
* vaciarCafetera(): pone la cantidad de caf� actual en cero.
* agregarCafe(int): a�ade a la cafetera la cantidad de caf� indicada.*/

#include <iostream>
#include "Cafetera.h"
using namespace std;


int main() {
	
	//Instancio la clase usando los diferentes constructores
	Cafetera cafe1; Cafetera cafe2(500), cafe3(1000, 500), cafe4(1000, 1400);
	
	//Casos de prueba
	cout<<"\n\tC A F E T E R A 1";
	cout<<"\nCapacidad maxima: "<<cafe1.getCapacidadMaxima();
	cout<<"\nCantidad actual: "<<cafe1.getCantidadActual();
	cafe1.servirTaza(100);
	cafe1.vaciarCafetera();
	cafe1.agregarCafe(400);
	
	cout<<"\n\n";
	
	cout<<"\n\tC A F E T E R A 2";
	cout<<"\nCapacidad maxima: "<<cafe2.getCapacidadMaxima();
	cout<<"\nCantidad actual: "<<cafe2.getCantidadActual();
	cafe2.servirTaza(200);
	cafe2.vaciarCafetera();
	cafe2.agregarCafe(500);
	
	cout<<"\n\n";
	
	cout<<"\n\tC A F E T E R A 3";
	cout<<"\nCapacidad maxima: "<<cafe3.getCapacidadMaxima();
	cout<<"\nCantidad actual: "<<cafe3.getCantidadActual();
	cafe3.servirTaza(300);
	cafe3.vaciarCafetera();
	cafe3.agregarCafe(600);
	
	cout<<"\n\n";
	
	cout<<"\n\tC A F E T E R A 4";
	cout<<"\nCapacidad maxima: "<<cafe4.getCapacidadMaxima();
	cout<<"\nCantidad actual: "<<cafe4.getCantidadActual();
	cafe4.servirTaza(400);
	cafe4.vaciarCafetera();
	cafe4.agregarCafe(700);
	
	cout<<"\n\n";
	
	system("pause");
	
	return 0;
}
