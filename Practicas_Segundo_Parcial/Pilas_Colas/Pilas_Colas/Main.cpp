#include "Lib.h"


//-----------------------------------------------------------------------
// Metodos de Clase Nodo

void Nodo::Add(Nodo * &N) //Funcion para añadir Nodos.
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

void Nodo::Get_Last(Nodo *&N) // Funcion para obtener el ultimo Nodo.
{
	if (N->m_Next == nullptr)
	{
		
	}
}

Nodo * Nodo::Get_Next(Nodo * &N) // Funcion para obtener el Nodo siguiente.
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

Nodo::Nodo(std::string Name, unsigned char Age) // Constructor.
{
	m_Name = Name;
	m_Age = Age;
	m_Next = nullptr;
}

Nodo::Nodo() // Constructor Default
{}

Nodo::~Nodo() // Destructor.
{
	if (m_Next != nullptr)
	{
		delete m_Next;
	}
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Metodos de Clase Cola

void Cola::Push_C(Nodo* &F, Nodo* &L) // Funcion para agregar Nodos a la Cola.
{
	
	
	m_Temp = F;
	m_Temp->m_Next = nullptr;

	if (Empty_Queue(F))
	{
		F = m_Temp;
	}
	else
	{
		L->m_Next = m_Temp;
	}

	L = m_Temp;

	cout << "El Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << " ha sido ingresado a la Cola.\n";
	
	
}

Nodo Cola::Pull_C(Nodo* &F, Nodo* &L) // Funcion para sacar el ultimo dato de la cola.
{
	
	m_Temp = F;

	if (F == L)
	{
		F = nullptr;
		L == nullptr;
	}
	else
	{
		F = F->m_Next;
	}

	cout << "El Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << " ha sido eliminado de la Cola.\n";
	return *m_Temp;

}

void Cola::Print_C(Nodo* &F, Nodo* &L) // Funcion para imprimir los nodos dentro de la cola.
{
	
	while (m_First != nullptr)
	{
		m_Temp = F;
		F = m_Temp->m_Next;
		if (F != nullptr)
		{
			cout << m_Name << " , " << m_Age << ".\n";
		}

	}
}

Cola::Cola() // Constructor Cola
{}

Cola::~Cola() // Destructor.
{
	if (m_Next != nullptr)
	{
		delete m_Next;
	}
}

bool Cola:: Empty_Queue(Nodo *N)		//Metodo que sirve para saber si la cola esta vacia.
{
	if (N == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Metodos de Clase Pila

void Pila::Push_P(Nodo* &N) // Funcion para agregar Nodos a la Pila.
{
	m_Temp->m_Next = N;
	N = m_Temp;
	cout << "El Nodo con los valores: " << m_Temp->m_Name << " y " << m_Temp->m_Age << " ha sido ingresado a la Pila.\n";
}

Nodo Pila::Pull_P(Nodo* &N) // Funcion para sacar Nodos de la Pila.
{
	m_Temp = N;
	
	N = m_Temp->m_Next;

	cout << "El Nodo con los valores: " <<m_Temp->m_Name << " y " << m_Temp->m_Age <<  " ha sido eliminado de la Pila.\n";
	return *m_Temp;
	

}

void Pila::Print_P(Nodo *&N) // Funcion para imprimir los Nodos de la Pila.
{
	while (m_First != nullptr)		
	{
		m_Temp = m_First;
		m_First = m_First->m_Next;
		if (N != nullptr)
		{
			cout << m_Name << " , " << m_Age << ".\n";
		}

	}
}
Pila::Pila()
{}
Pila::~Pila()
{
	if (m_Next == nullptr)
	{
		delete m_Next;
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//Funcion Main

int main()
{
	system("cls");
	Pila Stack;							//Instancias de las clases: 1 Pila, 1 Cola y 3 Nodos que Seran usados en los metodos de las clases.
	Cola Queue;
	Nodo *Temp = nullptr;
	Nodo *N1 = nullptr;
	Nodo *N2 = nullptr;
	//---------------------------------------------INICIO DEL MENU---------------------------------------------------

	cout << "En este programa vamos a utilizar las Colas y las Pilas.\n"
		<< "Ingresa 1. Si quieres utilizar las colas.\n"
		<< "Ingresa 2. Si quieres utilizar las Pilas.\n"
		<< "Ingresa 3. Si quieres salir del programa.\n\n";
	
	unsigned char eleccion;
	unsigned char eleccion_2;
	string  Name;
	unsigned char Age;
	unsigned char respuesta;
	cin >> eleccion;
	//------------------------------------------------------SUB MENU DE COLAS----------------------------------------
	if (eleccion == '1')
	{
		system("cls");
		cout << "Esta es la seccion de la cola.\n"
			<< "Presiona 1. Para ingresar Nodos en la Cola.\n"
			<< "Presiona 2. Para sacar un Nodo de la Cola.\n"
			<< "Presiona 3. Para imprimir los elementos de la Cola."
			<< "Presiona 4. Para volver al menu principal.\n";
		cin >> eleccion_2;
		if (eleccion_2 == '1')
		{
			system("cls");
			do
			{
				cout << "Ingresa un nombre:\n";
				cin >> Name;
				cout << "Ingresa una edad: \n";
				cin >> Age;
				N1->m_Name = Name;
				N1->m_Age = Age;
				Queue.Push_C(N1,N2);
				delete N1;
				cout << "Presiona 1. Para agregar para ingresar otro nodo.\n"
					<< "Presiona 2. volver al menu.\n";
				cin >> respuesta;
			} while (respuesta == '1');
			main();
		}
		else if (eleccion_2 == '2')
		{
			while (N1 != nullptr)
			{
				Queue.Pull_C(N1, N2);
				
			}
			cout << "Los Nodos de la cola han sido eliminados.\n\n";
			cout << "Presiona 1. Para Volver al menu.\n"
				<< "Presiona 2. Para salir del Prograna.\n";
			cin >> respuesta;
			if (respuesta == '1')
			{
				main();
			}
			else
			{
				exit(-1);
			}

			system("cls");
		}
		else if (eleccion_2 == '3')
		{
			Queue.Print_C(N1, N2);
			system("cls");
		}
		else if (eleccion_2 == '4')
		{
			main();
	
		}
		

	}
	//-------------------------------------------SUB MENU DE PILAS ---------------------------------------------------------
	else if (eleccion == '2')
	{
		cout << "Esta es la seccion de la Pila.\n"
			<< "Presiona 1. Para ingresar Nodos en la Pila.\n"
			<< "Presiona 2. Para sacar un Nodo de la Pila.\n"
			<< "Presiona 3. Para imprimir los elementos de la Pila."
			<< "Presiona 4. Para volver al menu principal.\n";
		cin >> eleccion_2;
		if (eleccion_2 == '1')
		{
			system("cls");
			do
			{
				cout << "Ingresa un nombre:\n";
				cin >> Name;
				cout << "Ingresa una edad: \n";
				cin >> Age;
				N1->m_Name = Name;
				N1->m_Age = Age;
				Stack.Push_P(N1);
				delete N1;
				cout << "Presiona 1. Para agregar para ingresar otro nodo.\n";
				cout << "Presiona 2. volver al menu.\n";
			} while (respuesta == '1');
		}
		else if (eleccion_2 == '2')
		{
			Stack.Pull_P(N1);
			system("cls");
		}
		else if (eleccion_2 == '3')
		{
			Stack.Print_P(N1);
			system("cls");
		}
		else if (eleccion_2 == '4')
		{
			main();
		}
		
	}
	else
	{
		cout << "Hasta Luego.\n";
		exit(-1);
	}

	cin.ignore();
	cin.get();
	return 0;
}