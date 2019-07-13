#include "List.h"
#include <Windows.h>

void MenuListasD()
{
	system("cls");
	DoubleList Lista_Doble;
	unsigned char opcion;
	std::cout << "Esta es la seccion de la lista simplemente enlazada.\n"
		<< "Ingresa 1. Para crear un nodo e ingresarlo.\n"
		<< "Ingresa 2. Para ingresar un nodo en una posicion especifica.\n"
		<< "Ingresa 3. Para sacar el ultimo nodo de la lista.\n"
		<< "Ingresa 4. Para sacar un nodo en especifico de la lista.\n"
		<< "Ingresa 5. Para eliminar el ultimo nodo de la lista.\n"
		<< "Ingresa 6. Para eliminar un nodo en especifico de la lista. \n"
		<< "Ingresa 7. Para limpiar toda la lista. \n"
		<< "Ingresa 8. Para salir del programa. \n";
	std::cin >> opcion;

	switch (opcion)
	{
	case '1':
	{
		DoubleNode *N = new DoubleNode();
		std::cin >> *N;
		Lista_Doble.push(N);
		MenuListasD();
		break;
	}
	case '2':
	{
		unsigned int pos;
		DoubleNode *N = new DoubleNode();
		std::cout << "Ingresa la posicion en donde quieres ingresar el nuevo nodo: \n";
		std::cin >> pos;
		std::cin >> *N;
		Lista_Doble.push(N, pos);
		MenuListasD();
		break;
	}
	case '3':
	{
		DoubleNode * Temp = Lista_Doble.pull();
		if (Temp == nullptr)
		{
			std::cout << "la lista esta vacia, no hay un nodo que eliminar. \n ";
		}
		else
		{
			std::cout << *Temp;
		}
		delete Temp;
		MenuListasD();
		break;
	}
	case '4':
	{
		unsigned int pos;
		std::cout << "Ingresa la posicion en la cual quieres eliminar el nodo.\n";
		std::cin >> pos;
		DoubleNode *Temp = Lista_Doble.pull(pos);
		if (Temp == nullptr)
		{
			std::cout << "La lista esta vacia, no hay un nodo que eliminar.\n";
		}
		else 
		{
			std::cout << *Temp;
		}
		delete Temp;
		MenuListasD();
		break;
	}
	case '5':
	{
		
		Lista_Doble.remove();
		MenuListasD();
		break;
	}
	case '6':
	{
		unsigned int pos;
		std::cout << "Ingresa la posicion en la cual quieres eliminar el nodo. \n";
		std::cin >> pos;
		Lista_Doble.remove(pos);
		MenuListasD();
		break;
	}
	case '7':
	{
		Lista_Doble.clear();
		MenuListasD();
		break;
	}
	case '8':
	{
		std::cout << "Hasta Luego.\n";
		exit(-1);
		break;
	}
	default:
	{
		std::cout << "Seras devuelto al menu.\n";
		MenuListasD();
		break;
	}
	}
}

void MenuListaS()
{
	system("cls");
	SingleList Lista_Simple;
	unsigned char opcion;
	std::cout << "Esta es la seccion de la lista simplemente enlazada.\n"
		<< "Ingresa 1. Para crear un nodo e ingresarlo.\n"
		<< "Ingresa 2. Para ingresar un nodo en una posicion especifica.\n"
		<< "Ingresa 3. Para sacar el ultimo nodo de la lista.\n"
		<< "Ingresa 4. Para sacar un nodo en especifico de la lista.\n"
		<< "Ingresa 5. Para eliminar el ultimo nodo de la lista.\n"
		<< "Ingresa 6. Para eliminar un nodo en especifico de la lista. \n"
		<< "Ingresa 7. Para limpiar toda la lista. \n"
		<< "Ingresa 8. Para volver al menu. \n";

	std::cin >> opcion;
	switch (opcion)
	{
	case '1':
	{
		SingleNode *N = new SingleNode();
		std::cin >> *N;
		Lista_Simple.push(N);
		MenuListaS();
	}
	case '2':
	{
		unsigned int Pos;
		SingleNode *N = new SingleNode();
		std::cout << "Ingresa en que posicion quieres ingresar el nodo: \n";
		std::cin >> Pos;
		std::cin >> *N;
		Lista_Simple.push(N, Pos);

		std::cout << "\n\n Seras devuelto al menu.\n";
		MenuListaS();
	}
	case '3':
	{

		SingleNode * Temp = Lista_Simple.pull();
		if (Temp == nullptr)
		{
			std::cout << "No hay ningun nodo en la lista. \n ";
		}
		else
		{
			std::cout << *Temp;
		}
		delete Temp;

		std::cout << "Seras devuelto al menu. \n";

		MenuListaS();
	}
	case '4':
	{
		unsigned int pos;
		std::cout << "Ingresa la posicion en la cual quieres eliminar el nodo.\n ";
		std::cin >> pos;
		SingleNode *Temp = Lista_Simple.pull(pos);
		if (Temp == nullptr)
		{
			std::cout << "No hay ningun nodo en la lista. \n ";
		}
		else
		{
			std::cout << *Temp;
		}
		delete Temp;

		std::cout << "Seras devuelto al menu.\n"; 

		MenuListaS();
	}
	case '5':
	{
		
		Lista_Simple.remove();

		MenuListaS();
	}
	case '6':
	{
		unsigned int pos;
		std::cout << "Ingresa la posicion en la cual quieres eliminar el nodo.\n";
		std::cin >> pos;
		Lista_Simple.remove(pos);
		MenuListaS();
	}
	case '7':
	{
		Lista_Simple.clear();
		MenuListaS();
	}
	case '8':
	{
		std::cout << "Hasta Luego.\n";
		exit(-1);
		break;
	}
	default:
	{
		std::cout << "Seras devuelto al menu.\n";
		MenuListaS();
		break;
	}
	}
}

void menu()
{
	system("cls");
	unsigned char eleccion;
	std::cout << "Bienvenido al programa.\n"
		<< "Ingresa 1. Para usar las listas simplemente enlazada.\n "
		<< "Ingresa 2. Para usar las listas doblemente enlazada. \n "
		<< "Ingresa 3. Para salir del programa.";
	std::cin >> eleccion;
	switch (eleccion)
	{
	case '1':
		MenuListaS();
	case '2':
		MenuListasD();
	case '3':
		std::cout << "Hasta luego.\n";
		exit(-1);
	default:
		menu();
	}
		

}

int main()
{
	menu();

	return 0;
}