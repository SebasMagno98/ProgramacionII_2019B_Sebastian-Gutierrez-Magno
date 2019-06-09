#pragma once

//-------CREACION CLASE LORO-----------------
class loro : public ave
{
public:
	// METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	loro(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void loro::comer()
{
	cout << "Son animales omnivoros, aunque mayormente se les ve consumiendo semillas y vegetales, tambien gustan de comer pescado y carne.\n";
}
void loro::movimiento()
{
	cout << "Al ser aves, su metodo de desplazamiento convencional es a traves del vuelo, aunque tambien pueden desplazarse usando sus patas.\n"
		<< "Hay especies de loros que han perdido su capacidad para volar.\n";
}
void loro::sonido()
{
	cout << "El sonido de un loro principalmente son varios cantos, aunque al ser aves que pueden imitar sonidos, tambien pueden a llegar a vocalizar palabras humanas.\n";
}
void loro::caracteristicas()
{
	cout << "Aves caracterizadas por tener un pico corto, muy fuerte, de alas cortas y redondeadas, poseen un llamativo de pelaje que consta de multiples colores.\n";
}

//CONSTRUCTOR DE LA CLASE.
loro::loro(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}