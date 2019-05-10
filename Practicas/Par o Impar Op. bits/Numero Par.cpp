#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool numero_par(int x)
{
	int num = x & 1;
	if (num == 1)
	{
		cout << "Numero impar.\n";
		return false;
	}
	else
	{
		cout << "Numero Par.\n";
		return true;
	}
}

int main()
{
	cout << "Ingresa un numero, el programa determinara si es un numero par o impar\n";
	int numero;
	cin >> numero;
	numero_par(numero);
	cin.ignore();
	cin.get();
	return 0;
}