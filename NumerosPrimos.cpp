/* Crea un array de números de un tamaño pasado por teclado, el array contendrá 
números aleatorios primos entre los números deseados, por último nos indica 
cual es el mayor de todos. Haz una funcion para comprobar que el número aleatorio 
es primo, puedes hacer todas las funciones que necesites.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/**Prototipo de funciones**/
bool esPrimo(int);
void vectorPrimos(int);

int main() {
	
	int tamanio;
	srand(time(NULL));
	
	cout<<"Indique el tamanio del vector: ";
	cin>>tamanio;
	
	vectorPrimos(tamanio);

	return 0;
}

/**Funciones**/

void vectorPrimos(int tamanio) {
	
	int num;
	int vector[tamanio];
	
	//Inicializo numeros aleatorios.
	
	
	//Genero y almaceno en el vector, numeros aleatorios entre 1-50
	//Formula: variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
	for(int i=0; i<tamanio; i++) {
		do { 
			num=1+rand()%(51-1);
			esPrimo(num);
		} while(esPrimo(num) == false || num ==1);
		vector[i] = num;
	}
	
	cout<<"\nEl vector de numeros primos es: ";
	for(int i=0; i<tamanio; i++) {
		cout<<vector[i]<<" ";
	}
}

bool esPrimo(int numero) {
	
	int cont=0;
	
	for(int i=numero; i>0; i--) {
		if(numero%i == 0) {
			cont++;
		}
	}
	
	if(cont>2) {
		return false;
	}
	else {
		return true;
	}	
}
