#pragma once
#include <iostream>
class Animal
{
public:
	
	virtual void comer() = 0;
	virtual void movimiento() = 0;
	virtual void sonido() = 0;
	virtual void caracteristicas() = 0;
	std::string nombre;
	//Sobrecarga de operadores
	bool operator<(Animal &a)
	{
		
	}
};

void Animal::comer()
{}
void Animal::movimiento()
{}
void Animal::sonido()
{}
void Animal::caracteristicas()
{}

