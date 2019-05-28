#include "lib.h"
#include <vector>
void Quicksort(vector<Animal*>vec, int primero, int ultimo)
{
	int izq = primero;
	int der = ultimo;
	int cambio;
	

	while (izq <= der)
	{
		while (vec[izq] < vec[der])
		{
			izq++;
		}
		while (vec[der] > vec[izq])
		{
			der--;
		}
		if (izq <= der)
		{
			cambio = der;
			izq = der;
			der = cambio;
			izq++;
			der--;
		}
	}
	if (primero < der)
	{
		Quicksort(vec, primero, der);
	}
	if (izq < ultimo)
	{
		Quicksort(vec, izq, ultimo);
	}
}
void imprimir(vector<Animal*>&vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << *vec[i]->nombre << " ";
	}
}
void Busqueda_Binaria(vector<Animal*>vec)  //Algortimo de busqueda binaria
{
	int inicio = 0;
	int final = vec.size();
	int mitad;
	string name;
	bool encontrado = false;
	cout << "Ingresa el nombre del animal que quieres buscar: \n";
	cin >> name;
	

	while (inicio <= final) 
	{
		mitad = (inicio + final) / 2; 
		if (vec[mitad]->nombre == name)		//Se toma el elemento del medio y se compara con el nombre dado por el usuario.
		{
			encontrado = true;		//De coincidir ambos elementos, el booleano se vuelve verdadero y termina el algoritmo.
			break;
		}
		if (vec[mitad]->nombre > name)  //De no ser iguales la mitad y el nombre dado, se compara si este es mayor que el elemento dado, se divide y se vuelve a comparar con los elementos del lado izquierdo, tomando otra vez el elemento del medio.
		{
			final = mitad;
			mitad = (inicio + final) / 2;
		}
		if (vec[mitad]->nombre < name) // Del mismo modo, de no ser iguales, la mitad y el nombre dado, se compara con si es menor el elemento del medio con el elemento dado, de ser así se comparará con los elementos del lado derecha, volviendo a comparar con el elemento del medio.
		{
			inicio = mitad;
			mitad = (inicio + final) / 2;
		}

	}
	
	if (encontrado == true) // De haber encontrado el elemento, el booleano cambiara a verdadero y devolvera un mensaje indicando que el elemento ha sido encontrado.
	{
		cout << "El nombre del animal si existe, fue encontrado en la posicion: " << mitad << "\n";
	}
	if (encontrado == false) // De no haber encontrado el elemento, el booleano se quedara en falso y devolvera un mensaje indicando que el elemento no fue encontrado.
	{
		cout << "El nombre del animal no existe.\n";
	}
}

int main()
{
	//Animales
	tiburon A1("Gerardo");
	loro A2("Bob");
	iguana A3("Larry");
	lobo A4("Jimmy");
	tigre A5("Carlos");
	puma A6("Oscar");

	// Vector y los elementos que seran ingresados.
	vector<Animal*>zoo;
	zoo.push_back(&A1);
	zoo.push_back(&A2);
	zoo.push_back(&A3);
	zoo.push_back(&A4);
	zoo.push_back(&A5);
	zoo.push_back(&A6);

	Quicksort(zoo, 0, zoo.size()-1);
	cout << "Ingresa el nombre del animal que quieres buscar: \n";
	
	return 0;
}