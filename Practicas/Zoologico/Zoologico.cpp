#include "lib.h"
#include <vector>

void Cambio(Animal* &x, Animal* &y)
{
	Animal * temp = x;
	x = y;
	y = temp;
}

//------------------------------------------------------------------------------------------
void Quicksort_Nombres(vector<Animal*>&vec, int primero, int ultimo) // Algoritmo Quicksort para los nombres.
{
	int izq = primero;
	int pivote = 2;
	int der = ultimo;
	
	

	while (primero <= ultimo)
	{
		while ((*vec[izq]).Give_Name() < (*vec[pivote]).Give_Name())
		{
			izq++;
		}
		while ((*vec[der]).Give_Name() > (*vec[izq]).Give_Name())
		{
			der--;
		}
		if (izq <= der)
		{
			Cambio(vec[izq], vec[pivote]);
			izq++;
			der--;
		}
	}
	if (primero < der)
	{
		Quicksort_Nombres(vec, primero, der);
	}
	if (izq < ultimo)
	{
		Quicksort_Nombres(vec, izq, ultimo);
	}
}

//-----------------------------------------------------------------------------------------------
void Quicksort_Edades(vector<Animal*>&vec, int primero, int ultimo) // Algoritmo Quicksort para las edades.
{
	int izq = primero;
	int der = ultimo;
	int pivote = 2;


	while (izq <= der)
	{
		while (vec[izq]->Give_Age() < vec[der]->Give_Age())
		{
			izq++;
		}
		while (vec[der]->Give_Age() > vec[izq]->Give_Age())
		{
			der--;
		}
		if (izq <= der)
		{
			Cambio(vec[izq], vec[pivote]);
			izq++;
			der--;
		}
	}
	if (primero < der)
	{
		Quicksort_Edades(vec, primero, der);
	}
	if (izq < ultimo)
	{
		Quicksort_Edades(vec, izq, ultimo);
	}
}
//---------------------------------------------------------------------------------------------------

void Quicksort_Salud(vector<Animal*>&vec, int primero, int ultimo)//Algoritmo Quicksort para la Salud.
{
	int izq = primero;
	int der = ultimo;
	int pivote = 2;


	while (izq <= der)
	{
		while (vec[izq]->Give_Health() < vec[der]->Give_Health())
		{
			izq++;
		}
		while (vec[der]->Give_Health() > vec[izq]->Give_Health())
		{
			der--;
		}
		if (izq <= der)
		{
			Cambio(vec[izq], vec[pivote]);
			izq++;
			der--;
		}
	}
	if (primero < der)
	{
		Quicksort_Salud(vec, primero, der);
	}
	if (izq < ultimo)
	{
		Quicksort_Salud(vec, izq, ultimo);
	}
}
//-------------------------------------------------------------------------------------------------
void Imprimir_Vector(vector<Animal*>&vec)	//Funcion para imprimir los animales en pantalla.
{
	
	for (int i = 0; i < vec.size(); i++)
	{
		cout << (*vec[i]).Give_Name() << "\n"
			<< (*vec[i]).Give_Age() << "\n"
			<< (*vec[i]).Give_Health() << "\n"
			<< "\n\n";
	}

}

//------------------------------------------------------------------------------------------------
void Busqueda_Binaria(vector<Animal*>&vec)  //Algortimo de busqueda binaria.
{
	int inicio = 0;
	int final = vec.size()-1;
	int mitad;
	string Buscar;
	bool encontrado = false;
	cout << "Ingresa el nombre del animal que quieres buscar: \n";
	cin >> Buscar;
	

	while (inicio <= final) 
	{
		mitad = (inicio + final) / 2; 
		if (vec[mitad]->Give_Name() == Buscar)		//Se toma el elemento del medio y se compara con el nombre dado por el usuario.
		{
			encontrado = true;		//De coincidir ambos elementos, el booleano se vuelve verdadero y termina el algoritmo.
			break;
		}
		if (vec[mitad]->Give_Name() > Buscar)  //De no ser iguales la mitad y el nombre dado, se compara si este es mayor que el elemento dado, se divide y se vuelve a comparar con los elementos del lado izquierdo, tomando otra vez el elemento del medio.
		{
			final = mitad;
			mitad = (inicio + final) / 2;
		}
		if (vec[mitad]->Give_Name() < Buscar) // Del mismo modo, de no ser iguales, la mitad y el nombre dado, se compara con si es menor el elemento del medio con el elemento dado, de ser así se comparará con los elementos del lado derecha, volviendo a comparar con el elemento del medio.
		{
			inicio = mitad;
			mitad = (inicio + final) / 2;
		}

	}
	
	if (encontrado == true) // De haber encontrado el elemento, el booleano cambiara a verdadero y devolvera un mensaje indicando que el elemento ha sido encontrado.
	{
		cout << "El nombre del animal si existe, fue encontrado en la posicion: " << mitad << ".\n";
	}
	if (encontrado == false) // De no haber encontrado el elemento, el booleano se quedara en falso y devolvera un mensaje indicando que el elemento no fue encontrado.
	{
		cout << "El nombre del animal no existe.\n";
	}
}
//--------------------------------------------------------------------------------------

int main()
{
	//Animales
	tiburon A1("Gerardo", 12, Good);
	loro A2("Bob", 2, Bad);
	iguana A3("Larry", 5, Good);
	lobo A4("Jimmy", 8, Good);
	tigre A5("Carlos", 10, Critical);
	puma A6("Oscar", 3, Bad);

	// Creacion del vector y los animales que seran agregados.
	vector<Animal*>zoo;
	zoo.push_back(&A1);
	zoo.push_back(&A2);
	zoo.push_back(&A3);
	zoo.push_back(&A4);
	zoo.push_back(&A5);
	zoo.push_back(&A6);
	
	//Menu para ver organizados a los animales de la manera en que quiera el usuario.

	cout << "Para ver a los animales organizados por orden alfabetico, presiona 1. \n"
		<< "Para ver a los animales organizados por su edad, presiona 2.\n"
		<< "Para ver a los animales organizados por su salud, presiona 3.\n\n";
	unsigned char eleccion;
	cin >> eleccion;
	cout << '\n';
	unsigned char x;
	if (eleccion == '1')
	{
		Quicksort_Nombres(zoo, 0, zoo.size()-1);
		Imprimir_Vector(zoo);
		

	}
	else if (eleccion == '2')
	{
		Quicksort_Edades(zoo, 0, zoo.size()-1);
		Imprimir_Vector(zoo);
		
	}
	else if (eleccion == '3')
	{
		Quicksort_Salud(zoo, 0, zoo.size() - 1);
		Imprimir_Vector(zoo);
		
	}
	cout << "Presiona 1, para usar la busqueda binaria.\n"
		<< "presiona 2, para salir del programa.\n";
	cin >> x;
	if (x == '1')
	{
		Busqueda_Binaria(zoo);
	}
	else
	{
		cout << "Adios.\n";
		exit(-1);
	}
	
	cin.get();
	return 0;
}