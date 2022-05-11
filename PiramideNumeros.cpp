/* Diseñar e implementar un programa que solicite
a su usuario un valor no negativo n y visualice la
siguiente salida (n = 6):
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1 */

#include <iostream>
using namespace std;

int main () {
	
	int num, aux;
	
	//mientras num no sea positivo, se pide su ingreso
	do { 
		cout<<"Ingrese un numero positivo: ";
		cin>>num;
	} while (num <= 0);
	
	aux = num;
	cout<<"\n";
	
	for(int i=0; i<num; i++) { //para lograr las num filas
		for(int j=0; j<aux; j++) { //en cada iteración, aux llega como maximo a un elemento menos -> aux--
			cout<<(j+1)<<" ";
		}
		aux--;
		cout<<"\n";
	}
	
	return 0;
}
