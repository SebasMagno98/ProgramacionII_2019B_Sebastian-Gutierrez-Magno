#include "Nodo.h"
#include <iostream>
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


Nodo * Nodo::Get_Next() //---------------METODO PARA OBTENER EL SIGUIENTE NODO.
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

void Nodo::Print_N()
{
	std::cout << "Nodo con valores:\n " << m_Name << " \n " << m_Age << ".\n";
	if (m_Next != nullptr)
	{
		m_Next->Print_N();
	}
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
