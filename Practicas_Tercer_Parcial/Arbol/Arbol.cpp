#include "Arbol.h"

template<class A>
void Arbol<A>::Ordenar(Elementos<A> *& _Persona)  //Metodo para agregar el primer elemento al arbol, el cual ser� la raiz.
{
	if (m_Raiz != nullptr)					//En caso de ya existir raiz, los elementos siguientes seran asigandos a las ramas u hojas.
	{
		m_Raiz->Agregar(_Persona);
	}
	else
	{
		m_Raiz = _Persona;
	}
}

//--------------------------------------------------------------------------------------------------------------------------------------
/*template<class A>
void Arbol<A>::Eliminar(std::string Apellido) //Metodo para eliminar el elemento que se haya recibido.
{
	Elementos * Temp;
	Elementos *Temp_2 = new Elementos();
	Temp = m_Raiz;

	while (Temp != nullptr) // Comenzara mientras la raiz no sea igual a nulo.
	{
		if (Apellido == Temp->m_Apellido) //Revisa si el elemento buscado tiene el mismo dato que el elemento temporal.
		{
			if (Temp->Izquierda == nullptr && Temp->Derecha == nullptr) //Revisa si no hay elementos a la derecha e izquierda.
			{
				if (Temp_2 != nullptr)
				{
					if (Temp_2->Izquierda == Temp)
					{
						Temp_2->Izquierda = nullptr;
					}
					else if (Temp_2->Derecha == Temp)
					{
						Temp_2->Derecha = nullptr;
					}
				}
				delete Temp; // Al no haber elementos a los lados, se elimina el temporal, el cual era el elemento buscado.
				break;
			}
			else if (Temp->Izquierda == nullptr && Temp->Derecha != nullptr) //Revisa si hay un elemento del lado derecho.
			{
				if (Temp_2 != nullptr)
				{
					if (Temp_2->Izquierda == Temp)
					{
						Temp_2->Izquierda = Temp->Derecha;
					}
					else if (Temp_2->Derecha == Temp)
					{
						Temp_2->Derecha = Temp->Derecha;
					}
					Temp->Derecha = nullptr; //Se iguala el elemento de la derecha a nulo para poder eliminarlo despues.
					delete Temp;
				}
			}
			else if (Temp->Izquierda != nullptr && Temp->Derecha == nullptr) //Revisa si hay un elemento del lado izquierdo.
			{
				if (Temp_2 != nullptr)
				{
					if (Temp_2->Izquierda == Temp)
					{
						Temp_2->Izquierda == Temp->Izquierda;
					}
					else if (Temp_2->Derecha == Temp)
					{
						Temp_2->Derecha = Temp->Izquierda;
					}
					Temp->Izquierda = nullptr; //Se iguala el elemento de la derecha a nulo para poder ser eliminado.
					delete Temp;
				}
			}
		}
		else if (Apellido > Temp->m_Apellido)//Revisa si el elemento recibido es mayor.
		{
			if (Temp->Derecha != nullptr)
			{
				Temp_2 = Temp;//Se iguala al valor de la derecha.
				Temp = Temp->Derecha;
			}
		}
		else //Lo mismo que el paso anterior, solo que aqui, se revisa el lado izquierdo.
		{
			if (Temp->Izquierda != nullptr)
			{
				Temp_2 = Temp;
				Temp = Temp->Izquierda;
			}
		}

		
	}
}

*/
//-------------------------------------------------------------------------------------------------------------------------------------------------
template<class A>
void Arbol<A>::RotacionIzq(Elementos<A>*& _Datos) //Rotaci�n de los elementos del �rbol hacia la derecha.
{
	Elementos<A> *Temp;
	Elementos<A> * Temp_2 = m_Raiz;

	if (_Datos->Derecha != nullptr)
	{
		Temp = _Datos->Derecha;
		if (Temp->Izquierda != nullptr)
		{
			_Datos->Derecha = Temp->Izquierda;
		}
		Temp->Izquierda = _Datos;

		if (_Datos != m_Raiz)
		{
			
			while (Temp_2 != nullptr)
			{
				if (Temp_2 > _Datos)
				{
					if (Temp_2->Izquierda == _Datos)
					{
						Temp_2->Izquierda = Temp;
					}
					else
					{
						Temp_2 = Temp_2->Izquierda;
					}
				}
				else
				{
					if (Temp_2->Derecha == _Datos)
					{
						Temp_2->Derecha = Temp;
					}
					else
					{
						Temp_2 = Temp_2->Derecha;
					}
						 
				}
			}
		}
	}
	

}

//---------------------------------------------------------------------------------------------------------------------------------------------
template<class A>
void Arbol<A>::RotacionDer(Elementos<A>*& _Datos) //Rotacion de los elementos del �rbol hacia la izquierda.
{
	Elementos<A> *Temp;
	Elementos<A> * Temp_2 = m_Raiz;

	if (_Datos->Izquierda != nullptr)
	{
		Temp = _Datos->Izquierda;
		if (Temp->Derecha != nullptr)
		{
			_Datos->Izquierda = Temp->Derecha;
		}
		Temp->Derecha = _Datos;

		if (_Datos != m_Raiz)
		{
			
			while (Temp_2 != nullptr)
			{
				if (Temp_2 > _Datos)
				{
					
					if (Temp_2->Izquierda == _Datos)
					{
						Temp_2->Izquierda = Temp;
					}
					else
					{
						Temp_2 = Temp_2->Izquierda;
					}
				}
				else
				{
					if (Temp_2->Derecha == _Datos)
					{
						Temp_2->Derecha = Temp;
					}
					else
					{

						Temp_2 = Temp_2->Derecha;
					}
				}
			}
		}
	}

}
//--------------------------------------------------------------------------------------------------------------------------------------
template<class A>
void Arbol<A>::Arbol_PreOrden() //Metodo que se realizara siempre y cuando haya mas elementos en el arbol ademas de la raiz.
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Pre_Orden();
	}
}

//----------------------------------------------------------------------------------------------------------------------------------------
template<class A>
void Arbol<A>::Arbol_InOrden()	//Metodo que se realizara siempre y cuando haya mas elementos en el arbol ademas de la raiz.
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->In_Orden();
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------
template<class A>
void Arbol<A>::Arbol_PostOrden()	//Metodo que se realizara siempre y cuando haya mas elementos en el arbol ademas de la raiz.
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Post_Orden();
	}
}

//--------------------------------------------------------------------------------------------------------------------------------------------
template<class A>
Arbol<A>::Arbol() //Constructor de clase arbol, el cual solo crea una raiz.
{
	m_Raiz = nullptr;
}

//---------------------------------------------------------------------------------------------------------------------------------------------
template<class A>
Arbol<A>::Arbol(Elementos<A> * _Raiz) // Constructor de clase arbol, el cual iguala los datos del elemento recibido a la raiz del arbol.
{
	m_Raiz = _Raiz;
}


//---------------------------------------------------------------------------------------------------------------------------------------------
template<class A>
Arbol<A>::~Arbol()
{
	if (m_Raiz != nullptr)
	{
		delete m_Raiz;
	}
}

template class Arbol<Persona>;
