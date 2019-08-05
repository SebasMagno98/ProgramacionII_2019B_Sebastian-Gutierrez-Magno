#pragma once
#include <iostream>
#include <string>
class Persona
{
public:

	//-------Miembros de la clase.------------------
	std::string m_Nombre;
	std::string m_Apellido;
	unsigned char m_Edad;

	Persona(std::string, std::string, int);
	Persona();
	~Persona();

	bool operator > (Persona &);
	bool operator == (Persona &);
	friend std::ostream & operator >> (std::ostream &, Persona &);
};

