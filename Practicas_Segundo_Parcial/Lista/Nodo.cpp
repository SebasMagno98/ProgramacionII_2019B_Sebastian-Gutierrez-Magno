#include "Nodo.h"

//-----------------------METODOS DE NODOS

void Nodo::Add(Nodo * &N)//------------METODO DE CREACION DE NODOS.
{
	if (m_Next == nullptr)
	{
		m_Next = N;
	}
	else
	{
		m_Next->Add(N);
	}
}

//-----------------------------------------


Nodo * Nodo::Get_Next(Nodo * &N) //---------------METODO PARA OBTENER EL SIGUIENTE NODO.
{
	if (m_Next == nullptr)
	{
		return nullptr;
	}
	else
	{
		return m_Next;
	}
}

//--------------------------------------------------
Nodo * Nodo::Get_Previous(Nodo *&N)// ------------------ METODO PARA OBTENER EL NODO ANTERIOR.
{
	if (m_Next != nullptr)
	{
		return nullptr;
	}
	else
	{
		return m_Next;
	}
}

//-------------------------------------------------
Nodo::Nodo(std::string Name, unsigned char Age) //--------------CONSTRUCTOR
{
	m_Name = Name;
	m_Age = Age;
	m_Next = nullptr;
	m_Previous = nullptr;
}


Nodo::Nodo()
{
}

//------------------------------------
Nodo::~Nodo() //-----------------DESTRUCTOR
{
	if (m_Next != nullptr)
	{
		delete m_Next;
	}
}
