#include "Elementos.h"


//Constructor de clase Elementos, el cual asigna el lado izquierdo y derecho del elemento como vacios.

template<class A>
Elementos<A>::Elementos()
{
	Izquierda = nullptr;
	Derecha = nullptr;
}




// Metodo para ordenar, el cual, conforme va moviendose por el arbol, irá imprimiendo los elementos.
template<class A>
void Elementos<A>::In_Orden()
{
	if (Izquierda != nullptr)
	{
		std::cout << "\nApellido: " << m_Apellido << '.'
			<< "\nNombre: " << m_Nombre << '.'
			<< "\nEdad: " << m_Edad << "."
			<< '\n';
	}
	if (Derecha != nullptr)
	{
		Derecha->In_Orden();
	}

}

// Metodo para ordenar, el cual, imprimirá primero el elemento y después va a moverse.
template<class A>
void Elementos<A>::Pre_Orden()
{
	std::cout << "\nApellido: " << m_Apellido << '.'
		<< "\nNombre: " << m_Nombre << '.'
		<< "\nEdad: " << m_Edad << "."
		<< '\n';
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
	std::cout << "\nApellido: " << m_Apellido << '.'
		<< "\nNombre: " << m_Nombre << '.'
		<< "\nEdad: " << m_Edad << "."
		<< '\n';
}

template<class A>
Elementos<A>::~Elementos()
{
}

// Sobrecarga de Operador <<  que permite imprimir los elementos en pantalla.
template<class A>
std::ostream & Elementos<A>::operator<<(std::ostream & out)
{
	out << "Apellido: " << m_Apellido << ".\nNombre: " << m_Nombre << ".\nEdad: " << m_Edad << ".\n";
	return out;
}


//Metodo para agregar elementos al arbol.
template<class A>
void Elementos<A>::Agregar(Elementos * &_Datos)
{
	if (_Datos->m_Apellido < m_Apellido)	//Verificará si el apellido del dato recibido es menor al del elemento, en caso de serlo se revisará si el espacio donde posiblemente irá esta ocupado.
	{										 //De no estar ocupado, se asignara el elemento a dicha posisicon, caso contrario se volvera a realizar la operacion de forma recursiva.
		if (Izquierda != nullptr )
		{
			Izquierda->Agregar(_Datos);
		}
		else
		{
			Izquierda = _Datos;
		}
	}
	else if (_Datos->m_Apellido > m_Apellido) //Misma operacion que en el paso anterior, solo que aqui se revisa si es mayor el apellido del dato recibido al que ya se encuentra, en caso de serlo se realiza la operacion.
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
	if (_Datos->m_Nombre < m_Nombre) //Misma operacion que en el primer paso, solo que aqui, se compararán los nombres.
	{
		if (Izquierda != nullptr)
		{
			Izquierda->Agregar(_Datos);
		}
		else
		{
			Izquierda = _Datos;
		}
	}
	else if (_Datos->m_Nombre > m_Nombre)
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
	else
	{
		if (_Datos->m_Edad < m_Edad) // Misma operacion que la realizada anteriormente, solo que aqui, se compararán las edades.
		{
			if (Izquierda != nullptr)
			{
				Izquierda->Agregar(_Datos);
			}
			else
			{
				Izquierda = _Datos;
			}
		}
		else if (_Datos->m_Edad > m_Edad)
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
		else                                                           //En caso de que exista un elemento con los mismos datos que el que se recibe como parametro, mandara un mensaje indicando que ya existe.
		{                                                              // No se pueden repetir, ya que cada elemento debe ser único.
			std::cout << "Los datos de esta persona ya existen.\n";
		}
	}
}

template<class A>
void Elementos<A>::Eliminar(Elementos<A> * _Datos)
{

}

template class Elementos<Persona>;



