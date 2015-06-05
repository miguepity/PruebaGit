//Incluir cosas de C++
#include <string>
#include <cstdlib>
#include <iostream>

//Incluir cosas de nuestro programa de prueba
#include "Persona.hpp"

using namespace std;

int main (int argc, char** argv) {
	string nombreFulano = "Fulanito";
	string apellidoFulano = "Perencejo";

	Persona* fulano = new Persona(nombreFulano, apellidoFulano);

	cout << "Nombre: " << (fulano->getNombre()) << endl;
	cout << "Apellido: " << (fulano->getApellido()) << endl;
	return EXIT_SUCCESS;
}
