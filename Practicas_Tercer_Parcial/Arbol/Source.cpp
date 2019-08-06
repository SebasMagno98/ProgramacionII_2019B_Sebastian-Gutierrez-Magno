#include "Arbol.h"

#include <Windows.h>

int main()
{
	bool Vueltas = true;
	unsigned char Opcion;

	//Elementos que conformaran el arbol, así como tambien sus ramas y hojas.

	Arbol<Persona> *Nuevo_Arbol = new Arbol<Persona>();
	Elementos<Persona> *Personas = new Elementos<Persona>(Persona("Son", "Goku", 40));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Kuai", "Liang", 36));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Spartan", "John", 117));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Ornstein", "Smough", 20));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Astora", "Oscar", 50));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Jameson", "Locke", 37));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Catsup", "Ash", 10));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Santiago", "Dominic", 35));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Damon", "Baird", 29));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Carmine", "Benjamin", 22));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Carmine", "Anthony", 24));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Carmine", "Clayton", 28));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Kaliso", "Tai", 40));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Carmine", "Gary", 20));
	Nuevo_Arbol->Ordenar(Personas);
	Personas = new Elementos<Persona>(Persona("Augustus", "Cole", 32));
	Nuevo_Arbol->Ordenar(Personas);
	

	// Menu para elegir la forma en como se quiere ordenar el arbol.


	while (Vueltas)
	{
		std::cout << "Ingresa 1. Para ver el arbol ordenado de forma Pre-Orden.\n"
			<< "Ingresa 2. Para ver el arbol ordenado de forma In-Orden.\n"
			<< "Ingresa 3. Para ver el arbol ordenado de forma Post Orden.\n"
			<< "Ingresa 4. Para salir del programa.\n";
		std::cin >> Opcion;
		switch (Opcion)
		{
		case '1':
			system("cls");
			std::cout << "Arbol en orden Pre-Orden: \n";
			Nuevo_Arbol->Arbol_PreOrden();
			std::cin.ignore();
			break;
		case '2':
			system("cls");
			std::cout << "Arbol en orden In-Orden: \n";
			Nuevo_Arbol->Arbol_InOrden();
			std::cin.ignore();
			break;
		case '3':
			system("cls");
			std::cout << "Arbol en Orden Post-Orden: \n";
			Nuevo_Arbol->Arbol_PostOrden();
			std::cin.ignore();
			break;
		case '4':
			system("cls");
			std::cout << "Hasta Luego.\n";
			delete Nuevo_Arbol;
			exit(-1);
		default:
			std::cout << "Opcion invalida.\n";
			std::cin.ignore();
			break;
		}
	}
	return 0;
}