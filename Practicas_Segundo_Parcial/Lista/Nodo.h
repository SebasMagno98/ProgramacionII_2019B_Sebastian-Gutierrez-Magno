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
	
	Nodo * m_Next;
	Nodo * m_Previous;
	//-----------------
	// METODOS

	void Add(Nodo * &N);

	Nodo * Get_Next();

	Nodo * Get_Previous(Nodo *&N);

	void Print_N();

	Nodo();

	Nodo(std::string Name, unsigned char Age);

	~Nodo();
};


