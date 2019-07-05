#include "Lib.h"

void swap(Nodo *N1, Nodo *N2)
{

}

/*Nodo BubbleSort(Lista  &L, int tamanio) //-------------------------Algoritmo Bubble Sort
{
	int size = tamanio;
	Lista  Temp = L;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			Nodo  Valores = Temp[j];
			Temp[j] = Temp[j + 1];
			Temp[j + 1] = Valores;
		}
	}
	return Temp;
}

/*Nodo Busqueda(Lista &L, int tamanio)
{
	int size = tamanio;
	Lista Temp = L;
	string Name;
	unsigned char Age;
	cout << "ingresa un nombre a buscar: \n";
	cin >> Name;
	cout << "\nIngresa una edad a buscar: \n";
	cin >> Age;

	for (int i = 0; i < tamanio; i++)
	{
		Nodo Valores = Temp[i];
	
	}
}*/

void menu()  //------------------------------FUNCION DE MENU------------------------------
{
	system("cls");
	Lista * Linked_List = new Lista();
	string Nombre;
	unsigned char Edad;
	unsigned char Opcion;
	unsigned char Respuesta;
	int counter = 0;
	Nodo *N1 = nullptr;
	do
	{
		cout << "En este programa usaremos una Lista Doblemente Enlazada.\n\n"
			<< "Presiona 1. Para ingresar Nodos a la Lista.\n"
			<< "Presiona 2. Para sacar un nodo de la Lista.\n"
			<< "Presiona 3. Para sacar imprimir los nodos de la Lista.\n"
			<< "Presiona 4. Para salir del programa.";
		cin >> Opcion;

		switch (Opcion)
		{
		case '1':
			system("cls");
			do
			{
				cout << "Ingresa un Nombre\n.";
				cin >> Nombre;
				cout << "Ingresa una edad.\n";
				cin >> Edad;
				Linked_List->Push_L(Nombre, Edad);
				cout << "Tamanio de la lista: " << counter + 1 << ".\n";
				cout << "Presiona 1. Para ingresar otro nodo.\n"
					<< "Presiona 2. Para volver al menu.\n";
				cin >> Respuesta;
			} while (Respuesta == '1');
			menu();

		case '2':
			system("cls");
			Linked_List->Pull_L();
			cout << "\nSeras devuelto al menu.\n";
			menu();


		case '3':
			system("cls");
			Linked_List->Print_L(N1);
			cout << "\nSeras devuelto al menu.\n";
			menu();
		}

	} while (Opcion != '4');
	cout << "Hasta Luego.\n ";
	delete Linked_List;
	exit(-1);
}

int main()
{
	menu();


	cin.ignore();
	cin.get();
	return 0;
}

/*Nodo BubbleSort(Lista  &L, int tamanio)
{
	int size = tamanio;
	Lista  Temp = L;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			Nodo  Valores = Temp[j];
			Temp[j] = Temp[j + 1];
			Temp[j + 1] = Valores;
		}
	}
	return Temp;
}*/