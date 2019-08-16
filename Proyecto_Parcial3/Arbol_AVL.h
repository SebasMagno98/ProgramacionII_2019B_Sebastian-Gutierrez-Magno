#pragma once
#include <string> 
#include <iostream>
#include "Arboles.h"
#include "Nodes.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

template<class T>
class Arbol_AVL : Arboles<T>
{
	protected:
		//Miembros
		Nodos<T>*Raiz = nullptr;
		int Cont = 0;

	public:
		//Metodos
		Arbol_AVL();
		Arbol_AVL(Nodos<T>*);

		//Destructor
		~Arbol_AVL();
	
		//Funci�n para ingresar nodos al �rbol
		int ingresar(Nodos<T>*&);

		//Funciones de impresi�n
		void in_orden();
		void pre_orden();
		void post_orden();

		//void balanceado();
		void balancear();

		//Funci�n para eliminar nodos del �rbol
		void eliminar(Nodos<T>*);

		//Funci�n para poder rotar
		void rotacion();
};

