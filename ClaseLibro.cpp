/* Crear una clase Libro que contenga los siguientes atributos:
– Titulo
– Autor
– Número de páginas
Crear sus respectivos métodos get y set correspondientes para cada atributo. 
Crear el método mostrarDatos() para mostrar la información relativa al libro con el siguiente formato:
“El libro creado por el autor tiene páginas”
En el fichero main, crear 2 objetos Libro (los valores que se quieran) y mostrarlos por pantalla.
Por último, indicar cuál de los 2 tiene más páginas.
*/

#include <iostream>
using namespace std;

class Libro {
	private:
		string titulo;
		string autor;
		int numPaginas;
	public:
		Libro();
		void setTitulo(string);
		void setAutor(string);
		void setNumPaginas(int);
		string getTitulo();
		string getAutor();
		int getNumPaginas();
		void mostrarDatos();
};

//Constructor 
Libro::Libro() {
}

//Setters
void Libro::setTitulo(string _titulo) {
	titulo = _titulo;
}

void Libro::setAutor(string _autor) {
	autor = _autor;
}

void Libro::setNumPaginas(int _numPaginas) {
	numPaginas = _numPaginas;
}

//Getters
string Libro::getTitulo() {
	return titulo;
}

string Libro::getAutor() {
	return autor;
}

int Libro::getNumPaginas() {
	return numPaginas;
}

//Metodos

void Libro::mostrarDatos() {
	cout<<"\nEl libro "<<titulo<<" creado por "<<autor<<" tiene "<<numPaginas<<" paginas.";
}


int main() {
	
	//Creo dos objetos de la clase Libro
	Libro libro1, libro2;
	
	libro1.setTitulo("Harry Potter 2");
	libro1.setAutor("JK Rowling");
	libro1.setNumPaginas(307);
	libro1.mostrarDatos();
	
	libro2.setTitulo("Harry Potter 7");
	libro2.setAutor("JK Rowling");
	libro2.setNumPaginas(968);
	libro2.mostrarDatos();
	
	//Analizo cual de ellos tiene mas paginas y lo indico por pantalla
	if(libro1.getNumPaginas() > libro2.getNumPaginas()) {
		cout<<"\n\n\t"<<libro1.getTitulo()<<" tiene mas paginas.";
	}
	else {
		cout<<"\n\n\t"<<libro2.getTitulo()<<" tiene mas paginas.";
	}
	
	return(0);
}
