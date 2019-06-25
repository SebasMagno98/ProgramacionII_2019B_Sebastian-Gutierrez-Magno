#pragma once
//-----------------------CREACION DE LA CLASE PILA
class Pila: public Nodo
{
	

public:
	//--------------------------
	//MIEMBROS

	Nodo *m_First = nullptr;
	Nodo *m_Temp = new Nodo();

	//---------------------------
	//METODOS
	void Push_P(Nodo* &N);

	Nodo Pull_P(Nodo* &N);

	void Print_P(Nodo *&N);

	Pila();

	~Pila();
};

