#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool numero_par(int x)
{
	string num;
	string str = to_string(x);
	if (str[str.size() - 1] == '1' || str[str.size() - 1] == '3' || str[str.size() - 1] == '5' || str[str.size() - 1] == '7' || str[str.size() - 1] == '9')
	{
		
		cout << "\nEl numero es impar.\n";
		return false;
	}
	if (str[str.size() - 1] == '0' || str[str.size() - 1] == '2' || str[str.size() - 1] == '4' || str[str.size() - 1] == '6' || str[str.size() - 1] == '8')
	{
		
		cout << "\nEl numero es par.\n";
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