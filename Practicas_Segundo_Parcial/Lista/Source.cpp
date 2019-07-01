#include "Lib.h"

void menu()  //------------------------------FUNCION DE MENU------------------------------
{
	system("cls");
	Lista Linked_List;
	string Nombre;
	unsigned char Edad;
	unsigned char Opcion;
	unsigned char Respuesta;
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
				N1->m_Name = Nombre;
				N1->m_Age = Edad;
				N1->m_Previous = nullptr;
				N1->m_Next = nullptr;
				Linked_List.Push_L(N1);
				cout << "Presiona 1. Para ingresar otro nodo.\n"
					<< "Presiona 2. Para volver al menu.\n";
				cin >> Respuesta;
			} while (Respuesta == '1');
			menu();

		case '2':
			system("cls");
			Linked_List.Pull_L(N1);
			cout << "\nSeras devuelto al menu.\n";
			menu();

		case '3':
			system("cls");
			Linked_List.Print_L(N1);
			cout << "\nSeras devuelto al menu.\n";
			menu();
		}

	} while (Opcion != '4');
	cout << "Hasta Luego.\n ";
	exit(-1);
}

int main()
{
	menu();


	cin.ignore();
	cin.get();
	return 0;
}