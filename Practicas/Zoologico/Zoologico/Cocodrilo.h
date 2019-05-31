#pragma once


class cocodrilo : public reptil, public Animal
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	cocodrilo(string);
};


void cocodrilo::comer()
{
	cout << "Son reptiles carnivoros, se alimentan de peces, otros reptiles, aves, bufalos, antilopes, cebras y demas animales.\n";
}
void cocodrilo::movimiento()
{
	cout << "Son reptiles que se desplazan por agua y tierra. En el agua se apoyan principalmente en su cola para moverse y en la tierra usan sus cortas patas.\n";
}
void cocodrilo::sonido()
{
	cout << "El sonido producido por un cocodrilo se considera un especie se lloro, con el cual pueden pedir ayuda si se encuentran amenazados entre otros sonidos para comunicarse.\n";
}
void cocodrilo::caracteristicas()
{
	cout << "Reptiles de gran tamaño, de cuerpo alargado, patas cortas, mandibulas enormes con grandes y afilados dientes, de piel sumamente gruesa y cubierta por resistentes escamas que le sirven como proteccion.\n";
}
cocodrilo::cocodrilo(string name)
{
	name = nombre;
}