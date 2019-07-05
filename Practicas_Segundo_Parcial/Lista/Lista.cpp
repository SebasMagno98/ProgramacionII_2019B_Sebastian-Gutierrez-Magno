#include "Lista.h"
#include <iostream>
using namespace std;

//------------------------------------METODOS--------------------------


void Lista::Push_L(string _Name, unsigned char _Age) //---------------METOODO PARA INGRESAR LOS NODOS EN LA LISTA.
{
	Nodo * m_Temp = new Nodo(_Name, _Age);
	
	if (&m_Next == nullptr)
	{
		m_Next = m_Temp;

	}
	else
	{
		m_Next->Add(m_Temp);
		cout << "El Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << " ha sido agregado a la lista.\n";
	}

	
}

//---------------------------------------------------------------------------



void Lista::Print_L(Nodo *N) //------------------METODO PARA IMPRIMIR LOS NODOS DE LA LISTA.
{
	if (m_FirstN != nullptr)
	{
		m_FirstN->Print_N();
	}
	else
	{
		cout << "No hay Nodos que imprimir.\n";
	}
}

//---------------------------------------------------------------------------


Nodo Lista::Pull_L() //---------------------------METODO PARA SACAR NODOS DE LA LISTA.
{
	if (m_Next != nullptr)
	{
		Nodo * m_Temp = m_FirstN;
		return *m_Temp;
	}
	
}
//------------------------------------------------------------------------

Lista::Lista()
{
}


Lista::~Lista()
{
}
