#include <iostream>

int secuencia(int inicio, int final, int incremento) //Funcion que imprime un numero generado por una secuencia de numeros.
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
		//Con esto se obtendra el numero de veces que se sumara el incremento, pero, no toma el primer digito.
		int Iterador = (final - inicio) / incremento;

		//El resultado de la secuencia se obtendra en base al iterador, el cual es el numero de veces que se sumara el incremento.

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