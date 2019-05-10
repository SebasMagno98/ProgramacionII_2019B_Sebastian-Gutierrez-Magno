#include "lib.h"

void multiplicacion(int x)
{
	int num = x << 1;
	int num2 = x << 3;
	cout << "El resultado es: " << num + num2;
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