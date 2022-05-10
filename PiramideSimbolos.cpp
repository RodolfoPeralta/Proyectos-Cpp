/* Crea una aplicación que dibuje una escalera de asteriscos. Nosotros le pasamos 
la altura de la escalera por teclado. Este es un ejemplo si insertaras un 5 de altura:
*
**
***
****
*****
*/

#include <iostream>
using namespace std;

int main() {
	
	int altura;
	
	cout<<"Indique la altura de la escalera: ";
	cin>>altura;
	
	for(int i=1; i<=altura; i++) {
		for(int j=1; j<=i; j++) {
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}


