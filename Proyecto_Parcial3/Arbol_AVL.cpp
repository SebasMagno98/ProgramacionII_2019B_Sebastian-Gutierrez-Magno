#include "Arbol_AVL.h"
#include "Persona.h"

//----------------------------------------------------------------------------------------------
//Constructor para inicializar el primer nodo del �rbol
template<class T>
Arbol_AVL<T>::Arbol_AVL()
{
	Raiz = nullptr;
}

//----------------------------------------------------------------------------------------------
//Constructor
template<class T>
Arbol_AVL<T>::Arbol_AVL(Nodos<T>* U)
{
	Raiz = U;
}

//----------------------------------------------------------------------------------------------
//Destructor
template<class T>
Arbol_AVL<T>::~Arbol_AVL()
{
	//Se checa si la raiz es nula.
	if (Raiz != nullptr)
	{
		//De serlo, se elimina.
		delete Raiz;
	}
}

//----------------------------------------------------------------------------------------------
//Funci�n para poder ingresar un nodo al �rbol
template<class T>
int Arbol_AVL<T>::ingresar(Nodos<T> * &U)
{
	//Primero checamos si la ra�z es nula
	if (Raiz == nullptr)
	{
		//De ser as�, ese nodo, ser� nuestra ra�z
		Raiz = U;
	}
	//Si no
	else
	{
		//Checamos si los datos del nodo son mayores que el de la ra�z
		if (*U > *Raiz)
		{
			//Si lo es, checamos si el puntero derecho de la ra�z es nula
			if (Raiz->Derecha == nullptr)
			{
				//De ser as�, ingresamos el nuevo nodo en ese puntero
				Raiz->Derecha = U;
				Raiz->Derecha->Ant = Raiz;
			}
			//Si no
			else
			{
				//Avanzamos un nivel hacia la Derecha
				Raiz->ingresar(U, Raiz);
			}
		}
		//Checamos si los datos del nodo ingresado son menores al de la ra�z
		if (*U < *Raiz)
		{
			//Si lo es, checamos si el puntero izquierdo est� vacio
			if (Raiz->Izquierda == nullptr)
			{
				//De ser as�, ingresamos el nodo en ese nivel 
				Raiz->Izquierda = U;
				Raiz->Izquierda->Ant = Raiz;
			}
			//Si no
			else
			{
				//Avanzamos de nivel hacia la izquierda
				Raiz->ingresar(U, Raiz);
			}
		}
	}
	balancear();
	return 0;
}

//----------------------------------------------------------------------------------------------
//Funci�nes para imprimir
template<class T>
void Arbol_AVL<T>::in_orden()
{
	//Se checa si la raiz es nula
	if (Raiz != nullptr)
	{
		//De ser asi, se entra en la funcion.
		Raiz->in_orden();
	}
	else
	{
		//Caso contario, manda un mensaje indicando que el arbol esta vacio.
		cout << "Arbol_AVL vacio" << endl;
	}
}

//----------------------------------------------------------------------------------------------
template<class T>
void Arbol_AVL<T>::pre_orden()
{
	//Se checa si la raiz es nula
	if (Raiz != nullptr)
	{
		//De ser asi, se entra en la funcion.
		Raiz->pre_orden();
	}
	else
	{
		//Caso contario, manda un mensaje indicando que el arbol esta vacio.
		cout << "Arbol_AVL vacio" << endl;
	}
}

//----------------------------------------------------------------------------------------------
template<class T>
void Arbol_AVL<T>::post_orden()
{
	//Se checa si la raiz es nula
	if (Raiz != nullptr)
	{
		//De ser asi, se entra en la funcion.
		Raiz->post_orden();
	}
	else
	{
		//Caso contario, manda un mensaje indicando que el arbol esta vacio.
		cout << "Arbol_AVL vacio" << endl;
	}
}

//----------------------------------------------------------------------------------------------
//Funcion para llamar la rotacion
template<class T>
void Arbol_AVL<T>::balancear()
{
	rotacion();
}

//----------------------------------------------------------------------------------------------
//Funci�n de rotaci�n
template<class T>
void Arbol_AVL<T>::rotacion()
{
	Raiz->balanceado(Raiz->contador);
	//Se checa si el puntero izquierdo no esta vacio.
	if (Raiz->Izquierda != nullptr)
	{
		//De no estar vacio se avanza a la izquierda.
		Raiz->Izquierda->rotacion();
		
	}

	//Se checa si el puntero derecho no esta vacio.
	if (Raiz->Derecha != nullptr)
	{
		//De no estar vacio se avanza a la derecho.
		Raiz->Derecha->rotacion();
		
	}

	//Condici�n para rotar a la izq en caso de que el nivel de la ra�z sea mayor igual a 2
	if (Raiz->Nivel >= 2)
	{
		//se rota a la derecha
		//el nodo derecho se vuelve raiz
		Nodos<T>*Temp = Raiz->Derecha->Izquierda;

		//En caso de que nuestro temp no este vacio
		if (Temp != nullptr)
		{
			//Re apuntamos el nodo temp
			Temp->Ant = Raiz;
		}

		//Movemos punteros para rotar
		Raiz->Ant = Raiz->Derecha;
		Raiz->Derecha->Izquierda = Raiz;
		Raiz->Derecha = Temp;
		//se define una nueva raiz
		Raiz = Raiz->Ant;
	}

	//Condici�n para rotar a la derecha en caso de que el nivel de la ra�z sea mayor igual a -2
	if (Raiz->Nivel <= -2)
	{
		//El nodo izquierdo se vulve la raiz
		Nodos<T>*Temp = Raiz->Izquierda->Derecha;

		//En caso de que nuestro temp no este vacio
		if (Temp != nullptr)
		{
			//Re apuntamos el nodo temp
			Temp->Ant = Raiz;
		}

		//Movemos punteros para rotar
		Raiz->Ant = Raiz->Izquierda;
		Raiz->Izquierda->Derecha = Raiz;
		Raiz->Izquierda = Temp;
		//se define una nueva raiz
		Raiz = Raiz->Ant;
	}
}

//----------------------------------------------------------------------------------------------
//Funci�n para eliminar un nodo espec�fico
template<class T>
void Arbol_AVL<T>::eliminar(Nodos<T>* U)
{
	//Checamos si la ra�z est� vacia
	if (Raiz == nullptr)
	{
		cout << "Abol vacio" << endl;
	}
	//Si no lo est�
	else
	{
		//Creamos un puntero temporal que servir� como recipiente
		Nodos<T> * Temp;// = new Nodos<T>();

		//Checamos, si los datos ingresados son mayores a la ra�z
		if (*U > *Raiz)
		{
			//El recipiente almacenar� el dato de la izquierda
			Temp = Raiz->Izquierda;
			//Finalmente avanzamos un nivel
			Raiz->Izquierda->eliminar(U, Temp);
		}
		//Checamos, si los datos ingresados son menores a la ra�z
		if (*U < *Raiz)
		{
			//El recipiente almacenar� el dato de la Derecha
			Temp = Raiz->Derecha;
			//Finalmente avanzamos un nivel
			Raiz->Derecha->eliminar(U, Temp);
		}
	}
}


//IMPORTANTE
template class Arbol_AVL<Persona>;
template class Arbol_AVL<int>;