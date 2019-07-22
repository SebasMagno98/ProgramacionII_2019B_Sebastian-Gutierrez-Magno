#pragma once
#include <iostream>
#include <string>
class Elementos
{
public:
	//-------Miembros de la clase.------------------
	std::string m_Nombre;
	std::string m_Apellido;
	unsigned char m_Edad;

	
	Elementos * Derecha;
	Elementos * Izquierda;

	//----------Metodos de la clase.------------
	Elementos();
	Elementos(std::string, std::string, unsigned char);
	~Elementos();

	std::ostream & operator <<(std::ostream & out);

	void In_Orden();
	void Pre_Orden();
	void Post_Orden();
};



