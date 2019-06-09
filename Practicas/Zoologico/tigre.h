#pragma once

//-------CREACION CLASE TIGRE-----------------
class tigre : public felino
{
public:
	// METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	tigre(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void tigre::comer()
{
	cout << "Es un animal carnivoro, el cual comunmente se alimenta de bufalos y algunos bovinos. \n";
};
void tigre::movimiento()
{
	cout << "Es un animal terrestre cuadrupedo muy veloz.\n ";
}
void tigre::sonido()
{
	cout << "Su sonido caracteristico es un poderoso rugido. \n";
}
void tigre::caracteristicas()
{
	cout << "El tigre es un felino de gran tamanio, con un peso que oscila entre los 47 y los 258 kg."
		<< "Cuentan con un pelaje naranja, un area intermedia y ventral blanquecina, sus rayas varian entre negro a gris. \n";
}

//CONSTRUCTOR DE LA CLASE.
tigre::tigre(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}