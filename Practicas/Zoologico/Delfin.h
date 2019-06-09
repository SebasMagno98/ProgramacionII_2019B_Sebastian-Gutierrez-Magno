#pragma once

//-------CREACION CLASE DELFIN-----------------

class delfin : public mamifero_acuatico
{
public:
	//METODOS

	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	delfin(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void delfin::comer()
{
	cout << "Son animales carnivoros, su alimentacion consta principalmente de peces, moluscos, pulpos";
}
void delfin::movimiento()
{
	cout << "Al ser un animal marino, se desplaza por el agua, pero a diferencia de los demas peces, los delfines no nadan con movimientos ondulatorios de izquierda a derecha, se mueven de arriba y abajo para desplazarse.n";
}
void delfin::sonido()
{
	cout << "Los delfines son capaces de producir un gran numero de sonidos, tales como silbidos y chirridos, los cuales usan para comunicarse y para P ecolocalizacionAn";
}
void delfin::caracteristicas()
{
	cout << "Los delgines son de los pocos animales acuaticos que son mamiferos, poseen un par de aletas a cada lado de su cuerpo y una aleta trasera. De cuerpo sin escamas y totalmente liso,"
		<< "\n este presenta coloracion que va desde el azul al gris, dependiendo pa la especie \n";
}

//CONSTRUCTOR DE LA CLASE.

delfin::delfin(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}