#include "Elementos.h"


//Constructor de clase Elementos, el cual asigna el lado izquierdo y derecho del elemento como vacios.

template<class A>
Elementos<A>::Elementos()
{
	Izquierda = nullptr;
	Derecha = nullptr;
}

template<class A>
Elementos<A>::Elementos(A _Datos) : Datos(_Datos)
{
	Izquierda = nullptr;
	Derecha = nullptr;
}

//Destructor De la clase Elementos
template<class A>
Elementos<A>::~Elementos()
{
	if (Izquierda != nullptr)
	{
		delete Izquierda;
	}
	if (Derecha != nullptr)
	{
		delete Derecha;
	}
}


// Metodo para ordenar, el cual, conforme va moviendose por el arbol, irá imprimiendo los elementos.
template<class A>
void Elementos<A>::In_Orden()
{
	if (Izquierda != nullptr)
	{
		Izquierda->In_Orden();
	}
	std::cout << Datos << "\n";
	if (Derecha != nullptr)
	{
		Derecha->In_Orden();
	}

}


// Metodo para ordenar, el cual, imprimirá primero el elemento y después va a moverse.
template<class A>
void Elementos<A>::Pre_Orden()
{
	std::cout << Datos << "\n";
	if (Izquierda != nullptr)
	{
		Izquierda->Pre_Orden();
	}
	if (Derecha != nullptr)
	{
		Derecha->Pre_Orden();
	}
}

// Metodo para ordenar, el cual, llegara hasta el último elemento, lo imprimirá y despues recorrerá el árbol hacia arriba, imprimiendo los elementos.
// Si entra en una rama que consta de varios elementos, nuevamente llegará hasta el último.
template<class A>
void Elementos<A>::Post_Orden()
{
	if (Izquierda != nullptr)
	{
		Izquierda->Post_Orden();
	}
	if (Derecha != nullptr)
	{
		Derecha->Post_Orden();
	}
	std::cout << Datos << "\n";
}

//---------------------------------------------------------------------------------------
template<class A>
bool Elementos<A>::operator>(Elementos<A>& E)
{
	return Datos > E.Datos;
}


//Metodo para agregar elementos al arbol.
template<class A>
void Elementos<A>::Agregar(Elementos<A> * &_Datos)
{
	if (*this > *_Datos)	//Verificará si el dato recibido es menor al elemento, en caso de serlo se revisará si el espacio donde posiblemente irá esta ocupado.
	{										 //De no estar ocupado, se asignara el elemento a dicha posicion, caso contrario se volvera a realizar la operacion de forma recursiva.
		if (Izquierda != nullptr )
		{
			Izquierda->Agregar(_Datos);
		}
		else
		{
			Izquierda = _Datos;
		}
	}
	else  //Misma operacion que en el paso anterior, solo que aqui se revisa si el puntero de la derecha esta ocupado o no, de no estarlo, se le asignará el dato.
	{
		if (Derecha != nullptr)
		{
			Derecha->Agregar(_Datos);
		}
		else
		{
			Derecha = _Datos;
		}

	}
	
}

template<class A>
void Elementos<A>::Eliminar(Elementos<A> * _Datos)
{

}

template class Elementos<Persona>;



