#include "Elementos.h"



Elementos::Elementos()
{
	Izquierda = nullptr;
	Derecha = nullptr;
}

Elementos::Elementos(std::string _Apellido, std::string _Nombre, unsigned int _Edad)
{
	m_Apellido = _Apellido;
	m_Nombre = _Nombre;
	m_Edad = _Edad;
}

void Elementos::In_Orden()
{
	if (Izquierda != nullptr)
	{
		std::cout << "\nApellido: " << m_Apellido << '.'
			<< "\nNombre: " << m_Nombre << '.'
			<< "\nEdad: " << m_Edad << "."
			<< '\n';
	}
	if (Derecha != nullptr)
	{
		Derecha->In_Orden();
	}

}

void Elementos::Pre_Orden()
{
	std::cout << "\nApellido: " << m_Apellido << '.'
		<< "\nNombre: " << m_Nombre << '.'
		<< "\nEdad: " << m_Edad << "."
		<< '\n';
	if (Izquierda != nullptr)
	{
		Izquierda->Pre_Orden();
	}
	if (Derecha != nullptr)
	{
		Derecha->Pre_Orden();
	}
}

void Elementos::Post_Orden()
{
	if (Izquierda != nullptr)
	{
		Izquierda->Post_Orden();
	}
	if (Derecha != nullptr)
	{
		Derecha->Post_Orden();
	}
	std::cout << "\nApellido: " << m_Apellido << '.'
		<< "\nNombre: " << m_Nombre << '.'
		<< "\nEdad: " << m_Edad << "."
		<< '\n';
}


Elementos::~Elementos()
{
}

std::ostream & Elementos::operator<<(std::ostream & out)
{
	out << "Apellido: " << m_Apellido << ".\nNombre: " << m_Nombre << ".\nEdad: " << m_Edad << ".\n";
	return out;
}

void Elementos::Agregar(Elementos * _Datos)
{
	if (_Datos->m_Apellido < m_Apellido)
	{
		if (Izquierda != nullptr )
		{
			Izquierda->Agregar(_Datos);
		}
		else
		{
			Izquierda = _Datos;
		}
	}
	else if (_Datos->m_Apellido > m_Apellido)
	{
		if (Derecha != nullptr)
		{
			Derecha->Agregar(_Datos);
		}
		else 
		{
			Derecha = _Datos;
		}
	
	}
	if (_Datos->m_Nombre < m_Nombre)
	{
		if (Izquierda != nullptr)
		{
			Izquierda->Agregar(_Datos);
		}
		else
		{
			Izquierda = _Datos;
		}
	}
	else if (_Datos->m_Nombre > m_Nombre)
	{
		if (Derecha != nullptr)
		{
			Derecha->Agregar(_Datos);
		}
		else
		{
			Derecha = _Datos;
		}
	}
	else
	{
		if (_Datos->m_Edad < m_Edad)
		{
			if (Izquierda != nullptr)
			{
				Izquierda->Agregar(_Datos);
			}
			else
			{
				Izquierda = _Datos;
			}
		}
		else if (_Datos->m_Edad > m_Edad)
		{
			if (Derecha != nullptr)
			{
				Derecha->Agregar(_Datos);
			}
			else
			{
				Derecha = _Datos;
			}
		}
		else
		{
			std::cout << "Los datos de esta persona ya existen.\n";
		}
	}
}




