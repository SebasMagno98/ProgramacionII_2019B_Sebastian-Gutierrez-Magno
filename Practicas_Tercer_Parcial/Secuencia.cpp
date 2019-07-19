#include <iostream>

int secuencia(int inicio, int final, int incremento)
{
	if (inicio < 0 and final > 0 and incremento < 0)
	{
		std::cout << "Esta secuencia no se podra realizar.\nPrueba con otra.\n";
		return -1;
	}
	else if (inicio >= 0 and final < 0 and incremento > 0)
	{
		std::cout << "Esta secuencia no se podra realizar.\nPrueba con otra.\n";
		return -1;
	}
	else if (inicio > final and incremento > 0)
	{
		std::cout << "Esta secuencia no se podra realizar.\nPrueba con otra.\n";
		return -1;
	}
	else if (inicio < final and incremento < 0)
	{
		std::cout << "Esta secuencia no se podra realizar.\nPrueba con otra.\n";
		return -1;
	}
	else
	{
		int Iterador = (final - inicio) / incremento;
		int secuenciaR = (incremento * ((Iterador *(Iterador + 1)) / 2)) + (inicio * (Iterador + 1));
		std::cout << "\nEl resultado de la secuencia es: " << secuenciaR;
		return 1;
	}
	
}

int main()
{
	int inicio;
	int final;
	int incremento;

	std::cout << "Ingresa un numero inicial:\n";
	std::cin >> inicio;
	std::cout << "\nIngresa un numero final: \n";
	std::cin >> final;
	std::cout << "\nIngresa un numero que sera el incremento de la secuencia.\n";
	std::cin >> incremento;

	secuencia(inicio, final, incremento);



	std::cin.ignore();
	std::cin.get();
	return 0;
}