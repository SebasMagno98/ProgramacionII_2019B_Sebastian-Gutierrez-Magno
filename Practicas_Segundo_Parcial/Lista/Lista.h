#pragma once
#include "Nodo.h"
using namespace std;

//---------CREACION DE LA CLASE LISTA----------------------
class Lista : public Nodo
{
public:
	//---------------------------
	// MIEMBROS
	Nodo * m_FirstN = nullptr;
	Nodo * m_TempN = nullptr;
	//----------------------------
	//METODOS

	void Push_L(string a , unsigned char b);

	void Print_L(Nodo *N);

	Nodo Pull_L();


	Lista();
	~Lista();
};

