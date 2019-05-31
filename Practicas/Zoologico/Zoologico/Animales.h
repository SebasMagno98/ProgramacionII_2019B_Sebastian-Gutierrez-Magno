#pragma once
#include "lib.h"

enum Health //Enum que determinara la salud del animal.
{
	Good, Bad, Critical
};
//----------------------CREACION DE LA CLASE PADRE-------------------------------
class Animal
{
//Miembros de la clase.
protected:
	std::string nombre;
	char Age;
	Health HEALTH;
//Metodos de la clase.
public:

	virtual void comer() = 0;
	virtual void movimiento() = 0;
	virtual void sonido() = 0;
	virtual void caracteristicas() = 0;
//------------------------------------------------------------------------------	
//Sobrecarga de operadores
	bool operator<(std::string &a)
	{
		return nombre < a;
	}
	bool operator>(std::string &a)
	{
		return nombre > a;
	}
	bool operator==(std::string &a)
	{
		return nombre == a;
	}
//------------------------------------------------------------------------------
//Funciones para imprimir los miembros de la clase, aunque estos esten protegidos.
	std::string Give_Name()
	{
		return nombre;
	}
	char Give_Age()
	{
		return Age;
	}
};
//--------------------------------------------------------------------------
//DEFINICION DE LOS METODOS DE LA CLASE.
void Animal::comer()
{}
void Animal::movimiento()
{}
void Animal::sonido()
{}
void Animal::caracteristicas()
{}

