#pragma once

//-------CREACION CLASE LOBO-----------------
class lobo : public canino
{
public:
	//METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	lobo(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.
void lobo::comer()
{
	cout << "Es un animal carnivoro, se alimentan generalmente de ciervos.\n";
}
void lobo::movimiento()
{
	cout << "Es un animal terrestre RIESAS de gran agilidad.\n";
}
void lobo::sonido()
{
	cout << "El lobo tiene la capacidad de producir un poderoso aullido que puede ser escuchado a varios pre SitOS a la redonda \n";
}
void lobo::caracteristicas()
{
	cout << "EL lobo, al ser un animal tan distribuido a lo largo del mundo, sus caracteristicas varian dependiendo de la region \n"
		<< "En terminos generales, su peso oscila entre los 32 a 70 kg.1n Cuentan con una gruesa capa de pelaje, el cual esta compuesto por dos capas.in"
		<< "Su primera capa esta para repeler el agua y suciedad y la segunda le sirve de aislante, su coloracion varia del gris al gris marron, "
		<< "pasando por colores como paa rojo, marron y negro.\n";
}

//CONSTRUCTOR DE LA CLASE.
lobo::lobo(std::string name, unsigned char edad, Health salud)
{

	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}