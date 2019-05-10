#include <iostream>
#include <vector>
using namespace std;

void Burbuja(int x[], int y)
{
	int cambio;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (x[j] > x[j + 1])
			{
				cambio = x[j];
				x[j] = x[j + 1];
				x[j + 1] = cambio;
			}
		}
	}
	cout << "La lista ordenada es: ";
	for (int i = 0; i < y; i++)
	{
		cout << x[i] << " ";
	}
}

int main()
{
	const int size = 7;
	int num[size] = { 2,5,4,7,1,3,6 };
	cout << "La lista original es: ";
	for (int i = 0; i < size; i++)
	{
		cout << num[i] << " ";
	}
	cout << "\n";
	Burbuja(num, size);
	cin.get();
	return 0;
	
}