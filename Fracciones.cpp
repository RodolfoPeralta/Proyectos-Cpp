/* Definir una clase Racional que represente a números racionales (fracciones). Los miembros
privados serán el numerador y el denominador de la fracción, y en la parte pública se debe
disponer al menos de las siguientes funciones miembros: asignar, convertir, invertir,
imprimir, que realizarán las funciones de: asignar los valores de los parámetros a numerador
y denominador respectivamente (por ejemplo, 22/7); convertir a decimal el número
racional (por ejemplo, 3.14286); calcular el inverso de la fración (por ejemplo, 7/22) y por
último, visualizar la fracción (por ejemplo, se ha de ver 22/7, 6/15, etc.). */

#include <iostream>
using namespace std;

class Racional {
	public:
		Racional(); //Constructor
		void asignar();
		void convertir();
		void invertir();
		void imprimir();
	private:
		int num, den;
};

/**Funciones miembro**/

Racional::Racional() {	//inicializo los atributos en cero sino empiezan con valores por defecto
	num = 0;
	den = 0;
}

void Racional::asignar() {		//metodo asignar: asigna el valor del numerador y denominador de la fraccion
	cout<<"Ingrese numerador: ";
	cin>>num;
	cout<<"\nIngrese denominador: ";
	cin>>den;
}

void Racional::convertir() {	//muestra el resultado decimal de la fraccion
	
	cout<<"\n"<<num<<"/"<<den<<" en numero decimal es: "<<float(num)/den;
	
}

void Racional::invertir() {	//invierte la fraccion
	
	if (num != 1)	//si la fraccion es 1/x muestra como inversion a x, sino mostraría x/1
		cout<<"\nLa fraccion invertida es: "<<den<<"/"<<num;
	else
		cout<<"\nLa fraccion invertida es: "<<den;	
	
}

void Racional::imprimir() {	//muestra la fraccion ingresada por teclado
	cout<<"\nLa fraccion ingresada fue: "<<num<<"/"<<den;
}


int main() {
	
	Racional n1;	//creo objeto de la clase Racional
	int x, y;
	
	//pruebas
	n1.asignar();
	n1.convertir();
	n1.invertir();
	n1.imprimir();
	
	return 0;
}
