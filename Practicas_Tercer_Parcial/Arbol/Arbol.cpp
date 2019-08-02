#include "Arbol.h"


void Arbol::Ordenar(Elementos *& _Persona)  //Metodo para agregar el primer elemento al arbol, el cual será la raiz.
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

void Arbol::Eliminar(std::string Apellido) //Metodo para eliminar el elemento que se haya recibido.
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

void Arbol::Arbol_PreOrden() //Metodo que se realizara siempre y cuando haya mas elementos en el arbol ademas de la raiz.
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Pre_Orden();
	}
}

void Arbol::Arbol_InOrden()	//Metodo que se realizara siempre y cuando haya mas elementos en el arbol ademas de la raiz.
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->In_Orden();
	}
}

void Arbol::Arbol_PostOrden()	//Metodo que se realizara siempre y cuando haya mas elementos en el arbol ademas de la raiz.
{
	if (m_Raiz != nullptr)
	{
		m_Raiz->Post_Orden();
	}
}

Arbol::Arbol() //Constructor de clase arbol, el cual solo crea una raiz.
{
	m_Raiz = nullptr;
}

Arbol::Arbol(Elementos *& _Raiz) // Constructor de clase arbol, el cual iguala los datos del elemento recibido a la raiz del arbol.
{
	m_Raiz = _Raiz;
}

Arbol::Arbol(std::string _Apellido, std::string _Nombre, unsigned int _Edad) // Constructor de clase arbol, el cual recibe los datos que se asignaran al lemento de la raiz.
{
	m_Raiz = new Elementos(_Apellido, _Nombre,_Edad);
}


Arbol::~Arbol()
{
}
