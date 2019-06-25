#pragma once
//-------------------------------CREACION DE LA CLASE COLA
class Cola : public Nodo
{
public:
	//---------------------
	//MIEMBROS

	Nodo *m_First = nullptr;
	Nodo *m_Temp = new Nodo();

	//---------------------
	//METODOS
	void Push_C(Nodo* &F, Nodo* &L);

	Nodo Pull_C(Nodo* &F, Nodo* &L);

	void Print_C(Nodo* &F, Nodo* &L);

	bool Empty_Queue(Nodo *N);

	Cola();

	~Cola();

};

