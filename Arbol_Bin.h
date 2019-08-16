#pragma once
#include "Nodes.h"
#include "Arboles.h"
#include <string> 
#include <iostream>

template<class T>
class Arbol_Bin : Arboles<T>
{
	protected:
		//Miembros
		Nodos<T>*Raiz = nullptr;

	public:
		//Metodos

		Arbol_Bin(Nodos<T>*);
		Arbol_Bin();

		//Destructor
		~Arbol_Bin();
	
		//Funci�n para ingresar nodos al �rbol
		int ingresar(Nodos<T>*&);
	
		//Funci�n para eliminar nodos del �rbol
		void eliminar(Nodos<T>*);
	
		//Funciones de impresi�n
		void in_orden();
		void pre_orden();
		void post_orden();
};

