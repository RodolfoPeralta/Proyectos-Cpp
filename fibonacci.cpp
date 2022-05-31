/*Funcion que genera la serie de Fibonacci*/

#include <iostream>
using namespace std;

/**Prototipo de funcion**/
void fibonacci(int);

int main() {
	
	//Casos de prueba
	fibonacci(5);
	fibonacci(10);
	fibonacci(15);
	
	return 0;
}

/**Funciones**/
void fibonacci(int numero) {
	
	//Creo un array con "numero" posiciones
	int serie[numero];
	
	//Establezco los primeros dos valores
	serie[0] = 0;
	serie[1] = 1;
	
	//Calculo los elementos de la serie
	for(int i=2; i<=numero; i++) {
		serie[i] = serie[i-1] + serie[i-2];
	}
	
	
	//Muestro en pantalla
	cout<<"\nLa serie de Fibonacci para los primeros "<<numero<<" numeros es";
	cout<<"\n";
	
	for(int i=0; i<numero; i++) {
		cout<<serie[i];
		if(i != (numero-1))
			cout<<", ";
		else
			cout<<".";
	}
	
	cout<<"\n\n";
	
}

