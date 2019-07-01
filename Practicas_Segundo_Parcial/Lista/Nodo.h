#pragma once
#include <string>
//-----------CREACION DE LA CLASE NODO--------------------

class Nodo
{
public:
	//----------------
	// MIEMBROS
	std::string m_Name;
	unsigned char m_Age;
	Nodo *m_Next;
	Nodo * m_Previous;

	//-----------------
	// mETODOS

	void Add(Nodo * &N);

	Nodo * Get_Next(Nodo * &N);

	

	Nodo * Get_Previous(Nodo *&N);

	Nodo();
	Nodo(std::string Name, unsigned char Age);

	~Nodo();
};


