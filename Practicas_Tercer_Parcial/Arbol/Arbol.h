#pragma once
#include "Elementos.h"
class Arbol: public Elementos
{
public:

	//-------Miembros de la clase---------
	Elementos * m_Raiz;


	//-------Metodos de la clase---------
	void Ordenar(Elementos * &);
	void Arbol_PreOrden();
	void Arbol_InOrden();
	void Arbol_PostOrden();
	Arbol();
	Arbol(Elementos * &);
	Arbol(std::string, std::string, unsigned int);
	~Arbol();


};

