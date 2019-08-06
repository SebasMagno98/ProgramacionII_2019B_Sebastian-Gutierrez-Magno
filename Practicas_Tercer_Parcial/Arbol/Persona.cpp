#include "Persona.h"


// Constructor de clase Elementos, el cual toma los datos dados y los asigna a los miembros de la clase.
Persona::Persona(std::string _Apellido, std::string _Nombre, int _Edad)
{
	m_Apellido = _Apellido;
	m_Nombre = _Nombre;
	m_Edad = _Edad;
}

Persona::Persona()
{
}


Persona::~Persona()
{
}

// Sobrecarga de operador >, el cual devolvera un booleano determinado por la comparacion entre los elementos.
bool Persona::operator>(Persona & _Datos)
{
	if (_Datos.m_Apellido != m_Apellido)
	{
		return m_Apellido > _Datos.m_Apellido;
	}
	else if (_Datos.m_Nombre != m_Nombre)
	{
		return m_Nombre > _Datos.m_Nombre;
	}
	else if (_Datos.m_Edad != m_Edad)
	{
		return m_Edad > _Datos.m_Edad;
	}
}

// Sobrecarga de operador <, el cual devolvera un booleano determinado por la comparacion entre los elementos.
bool Persona::operator<(Persona & _Datos)
{
	if (_Datos.m_Apellido != m_Apellido)
	{
		return m_Apellido < _Datos.m_Apellido;
	}
	else if (_Datos.m_Nombre != m_Nombre)
	{
		return m_Nombre < _Datos.m_Nombre;
	}
	else if (_Datos.m_Edad != m_Edad)
	{
		return m_Edad < _Datos.m_Edad;
	}
}

//Sobrecarga de operador ==, el cual devolvera un true en caso de que todos los elementos de un elemento sea iguales al parametro recibido, caso contrario devolvera false.
bool Persona::operator==(Persona & _Datos)
{
	if (_Datos.m_Apellido == m_Apellido && _Datos.m_Nombre == m_Nombre && _Datos.m_Edad == m_Edad)
	{
		return true;
	}
	else
	{
		return false;
	}
}

std::ostream & operator <<(std::ostream & out, Persona & _Datos)
{
	out << "Apellido: " << _Datos.m_Apellido << "\nNombre: " << _Datos.m_Nombre << "\nEdad: " << _Datos.m_Edad << ".\n";
	return out;
}
