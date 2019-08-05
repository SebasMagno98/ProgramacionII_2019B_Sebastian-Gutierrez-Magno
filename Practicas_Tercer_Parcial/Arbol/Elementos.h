#pragma once
#include "Persona.h"

template <class A>
class Elementos
{
public:
	//-------Miembros de la clase.------------------

	
	Elementos<A> * Derecha;
	Elementos<A> * Izquierda;

	//----------Metodos de la clase.------------
	Elementos();
	
	~Elementos();

	std::ostream & operator <<(std::ostream & out);
	void Agregar(Elementos<A> * &);
	void Eliminar(Elementos<A> *);

	void In_Orden();
	void Pre_Orden();
	void Post_Orden();
};



