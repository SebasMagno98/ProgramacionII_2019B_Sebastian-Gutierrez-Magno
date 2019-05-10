#include <iostream>
using namespace std;

void Quicksort(int x[], int primero, int ultimo)
{
	int izq = primero;
	int der = ultimo;
	int cambio;
	int pivote = x[(izq + der) / 2];				// Se toma como Pivote el elemento que esta en el medio del arreglo.
	
	while (izq <= der)
	{
		while (x[izq] < pivote)
			izq++;								//Incrementa en uno para posteriormente ser comparada en la condicional cuando el arreglo ya haya sido ordenado.
		while (x[der] > pivote)
		{
			der--;
		}
		if (izq <= der)						//Mientras el valor de la variable izq sea menor a der, se iran realizando los cambios dentro del arreglo hasta que este esté ordenado.
		{										
			cambio = x[izq];
			x[izq] = x[der];
			x[der] = cambio;
			izq++;
			der--;
		}
	}
	if (primero < der)			//Estas condicional sirven para segmentar los arrays de la derecha e izquierda del pivote.
	{
		Quicksort(x, primero, der);
	}
	if (izq < ultimo)
	{
		Quicksort(x, izq, ultimo);
	}
	
}
int main()
{
	const int size = 7;
	int num[size] = { 12,14,13,8,10,9,11 };
	cout << "Ordenamiento Quicksort.\n\n";
	cout << "La lista original es: ";
	for (int i = 0; i < size; i++)
	{
		cout << num[i] << " ";
	}
	cout << "\n\nLa lista ordenada es: ";
	Quicksort(num, 0, 6);
	for (int i = 0; i < 7; i++)
	{
		cout << num[i] << " ";
	}

	cin.get();
	return 0;
}