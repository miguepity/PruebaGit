#pragma once

#include <string>
using namespace std;

class Persona
{
private:
	string nombre;
	string apellido;
public:
	Persona(string nombre, string apellido);
	~Persona();
	string getNombre() const;
	string getApellido() const;
};