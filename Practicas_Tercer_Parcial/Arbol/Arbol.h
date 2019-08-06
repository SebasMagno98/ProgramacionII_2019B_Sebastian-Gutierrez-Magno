#pragma once
#include "Elementos.h"
template <class A>
class Arbol
{
public:

	//-------Miembros de la clase---------
	Elementos<A> * m_Raiz;


	//-------Metodos y Constructores de la clase---------
	
	void Ordenar(Elementos <A> * &);
	/*void Eliminar(std::string);*/
	void RotacionIzq(Elementos<A> *&);
	void RotacionDer(Elementos<A> *&);
	void Arbol_PreOrden();
	void Arbol_InOrden();
	void Arbol_PostOrden();


	Arbol();
	Arbol(Elementos<A> * );
	~Arbol();


};

