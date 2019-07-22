#include "Arbol.h"



void Arbol::Arbol_PreOrden()
{
}

void Arbol::Arbol_InOrden()
{
}

void Arbol::Arbol_PostOrden()
{
}

Arbol::Arbol()
{
	m_Raiz = nullptr;
}

Arbol::Arbol(Elementos *& _Raiz)
{
	m_Raiz = _Raiz;
}

Arbol::Arbol(std::string _Apellido, std::string _Nombre, unsigned char _Edad)
{
	m_Raiz = new Elementos(_Apellido, _Nombre,_Edad);
}


Arbol::~Arbol()
{
}
