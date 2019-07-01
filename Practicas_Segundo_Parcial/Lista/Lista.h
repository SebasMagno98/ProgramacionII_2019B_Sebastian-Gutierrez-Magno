#pragma once
#include "Nodo.h"

//---------CREACION DE LA CLASE LISTA----------------------
class Lista : public Nodo
{
public:
	//---------------------------
	// MIEMBROS

	Nodo * m_Temp = new Nodo();
	Nodo * m_Temp2 = new Nodo();
	Nodo * m_Temp3 = new Nodo();
	//----------------------------
	//METODOS

	void Push_L(Nodo *& N);

	void Print_L(Nodo *N);

	void Pull_L(Nodo * &N);


	Lista();
	~Lista();
};

