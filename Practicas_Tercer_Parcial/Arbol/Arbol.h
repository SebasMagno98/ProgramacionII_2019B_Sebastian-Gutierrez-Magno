#pragma once
#include "Elementos.h"
template <class A>
class Arbol: public Elementos
{
public:

	//-------Miembros de la clase---------
	Elementos <A> * m_Raiz;


	//-------Metodos de la clase---------
	
	void Ordenar(Elementos <A> * &);
	void Eliminar(std::string);
	void Arbol_PreOrden();
	void Arbol_InOrden();
	void Arbol_PostOrden();
	Arbol();
	Arbol(Elementos<A> * &);
	Arbol(std::string, std::string, unsigned int);
	~Arbol();


};

