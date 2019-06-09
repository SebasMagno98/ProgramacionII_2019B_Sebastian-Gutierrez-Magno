#pragma once

//-------CREACION CLASE IGUANA-----------------

class iguana : public reptil
{
public:
	
	// METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	iguana(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

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

//CONSTRUCTOR DE LA CLASE.
iguana::iguana(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}
