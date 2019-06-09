#pragma once

//-------CREACION CLASE CABALLITO DE MAR-----------------

class caballito_mar : public pez
{
public:
	//METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	caballito_mar(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void caballito_mar::comer()
{
	cout << "Son carnivoros, se alimentan principalmente de pequenios crustaceos o de larvas de peces.\n";
}
void caballito_mar::movimiento()
{
	cout << "Al ser un animal marino se desplaza por el agua, es un nadador muy lento, se mueve gracias a las vibraciones que producen con sus aletas dorsales.\n";
}
void caballito_mar::sonido()
{
	cout << "El sonido que producen los caballitos de mar es un leve y apenas perceptible rugido, el cual es provocado cuando el caballito aspira a su presa con su boca.\n";
}
void caballito_mar::caracteristicas()
{
	cout << "Es una criatura marina muy pequenia, tamanio oscila entre 18 mm a 30 cm, tienen una cola prensada la cual le sirve para recoger objetos, son de un colo amarillo verdoso, "
		<< "de ojos pequenios, y una boca alargada y angosta.\n";
}

//CONSTRUCTOR DE LA CLASE.
caballito_mar::caballito_mar(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}