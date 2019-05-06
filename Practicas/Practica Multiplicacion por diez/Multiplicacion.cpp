#include "lib.h"

void multiplicacion(int x)
{
	cout << x + x + x + x + x + x + x + x + x + x;
}
int main()
{
	cout << "ingresa un numero que sera multiplicado por diez.\n";
	int numero;
	cin >> numero;
	multiplicacion(numero);
	cin.ignore();
	cin.get();
	return 0;
}