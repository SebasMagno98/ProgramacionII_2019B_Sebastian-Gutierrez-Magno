#include "Arbol.h"



void Arbol::Ordenar(Elementos *& _Persona)
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Agregar(_Persona);
	}
	else
	{
		m_Raiz = _Persona;
	}
}

void Arbol::Arbol_PreOrden()
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Pre_Orden();
	}
}

void Arbol::Arbol_InOrden()
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->In_Orden();
	}
}

void Arbol::Arbol_PostOrden()
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Post_Orden();
	}
}

Arbol::Arbol()
{
	m_Raiz = nullptr;
}

Arbol::Arbol(Elementos *& _Raiz)
{
	m_Raiz = _Raiz;
}

Arbol::Arbol(std::string _Apellido, std::string _Nombre, unsigned int _Edad)
{
	m_Raiz = new Elementos(_Apellido, _Nombre,_Edad);
}


Arbol::~Arbol()
{
}
