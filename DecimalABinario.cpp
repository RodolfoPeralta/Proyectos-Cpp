/* Crea una aplicaci�n que nos convierta un n�mero en base decimal a binario. 
Esto lo realizara una funci�n a la que le pasaremos el numero como par�metro, 
devolver� un String con el numero convertido a binario. Para convertir un 
numero decimal a binario, debemos dividir entre 2 el numero y el resultado de esa 
divisi�n se divide entre 2 de nuevo hasta que no se pueda dividir mas, el resto 
que obtengamos de cada divisi�n formara el numero binario, de abajo a arriba. */

#include <iostream>
using namespace std;

/**Prototipo de funcion**/
string numBinario(int);

int main() {
	
	int numero;
	
	cout<<"Ingrese un numero entero: ";
	cin>>numero;
	cout<<"\nEl numero "<<numero<<" en binario es: "<<numBinario(numero);
	
	
	return 0;
}

/**funcion**/
string numBinario(int numero) {
	
	string binario = "";
	string digito;
	
	for(int i=numero; i>0; i/=2) {
		if(i%2 == 1) {
			digito = "1";
		}
		else {
			digito = "0";
		}
		//concateno la cadena vacia binario con el digito 0 o 1 correspondiente.
		binario = digito + binario; 
	}
	
	return binario;	
}
