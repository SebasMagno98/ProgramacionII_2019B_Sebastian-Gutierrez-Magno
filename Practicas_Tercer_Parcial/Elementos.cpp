#include "Elementos.h"



Elementos::Elementos()
{
	Izquierda = nullptr;
	Derecha = nullptr;
}

Elementos::Elementos(std::string _Apellido, std::string _Nombre, unsigned char _Edad)
{
	m_Apellido = _Apellido;
	m_Nombre = _Nombre;
	m_Edad = _Edad;
}


Elementos::~Elementos()
{
}

std::ostream & Elementos::operator<<(std::ostream & out)
{
	out << "Apellido: " << m_Apellido << ".\nNombre: " << m_Nombre << ".\nEdad: " << m_Edad << ".\n";
	return out;
}

void Elementos::In_Orden()
{
}

void Elementos::Pre_Orden()
{
}

void Elementos::Post_Orden()
{
}
