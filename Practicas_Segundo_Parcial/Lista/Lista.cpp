#include "Lista.h"
#include <iostream>
using namespace std;

//------------------------------------METODOS--------------------------


void Lista::Push_L(Nodo * &N) //---------------METOODO PARA INGRESAR LOS NODOS EN LA LISTA.
{
	m_Temp = N;
	m_Temp2;
	m_Temp3;
	
	while ((m_Temp2 != nullptr) && (m_Temp2->m_Age < N->m_Age) && (m_Temp2->m_Name < N->m_Name))
	{
		m_Temp3 = m_Temp2;
		m_Temp2 = m_Temp2->m_Next;
	}
	if (N == m_Temp2)
	{
		N = m_Temp;
	}
	else
	{
		m_Temp3->m_Next = m_Temp;
	}
	m_Temp->m_Next = m_Temp2;

	cout << "El Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << " ha sido agregado a la lista.\n";
}

//---------------------------------------------------------------------------



void Lista::Print_L(Nodo *N) //------------------METODO PARA IMPRIMIR LOS NODOS DE LA LISTA.
{
	m_Temp = N;

	while (m_Temp->m_Next != nullptr)
	{
		cout << "Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << ".\n\n";
		m_Temp = m_Temp->m_Next;
	}
}

//---------------------------------------------------------------------------


void Lista::Pull_L(Nodo *&N) //---------------------------METODO PARA SACAR NODOS DE LA LISTA.
{
	m_Temp = N;

	N = m_Temp->m_Next;

	cout << "El Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << " ha sido eliminado de la Pila.\n";
	delete m_Temp;
}
//------------------------------------------------------------------------

Lista::Lista()
{
}


Lista::~Lista()
{
}
