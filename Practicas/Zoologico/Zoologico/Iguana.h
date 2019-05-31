#pragma once


class iguana : public reptil, public Animal
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	iguana(string);
};

void iguana::comer()
{
	cout << "Son reptiles herbivoros, su alimentacion consta principalmente de hojas verdes y rabanos.\n";
}
void iguana::movimiento()
{
	cout << "Son reptiles terrestres cuadrupedos, se mueven por su entorno con sus cortas patas.\n";
}
void iguana::sonido()
{
	cout << "Las iguanas son reptiles que no emiten sonidos , se comunican principalmente a traves del lenguaje corporal.\n";
}
void iguana::caracteristicas()
{
	cout << "Las iguanas son reptiles pequenios, de color verde brillante con bandas transversales oscuras en la cola, de patas cortas, con dedos que cuentan con garras afiladas.\n";
}
iguana::iguana(string name)
{
	name = nombre;
}
