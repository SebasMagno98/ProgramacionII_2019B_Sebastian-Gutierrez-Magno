#pragma once
#include "Persona.h"

template <class A>
class Elementos
{
public:
	//-------Miembros de la clase.------------------

	
	A Datos;
	Elementos<A> * Derecha;
	Elementos<A> * Izquierda;

	//----------Metodos, constructores y destructores de la clase.------------
	Elementos();
	Elementos(A);
	~Elementos();

	bool operator > (Elementos<A> &);
	void Agregar(Elementos<A> * &);
	void Eliminar(Elementos<A> *);

	void In_Orden();
	void Pre_Orden();
	void Post_Orden();
};



