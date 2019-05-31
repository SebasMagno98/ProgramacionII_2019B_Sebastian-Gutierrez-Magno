#pragma once

class caballito_mar : public pez, public Animal
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	caballito_mar(string);
};
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
caballito_mar::caballito_mar(string name)
{
	name = nombre;
}