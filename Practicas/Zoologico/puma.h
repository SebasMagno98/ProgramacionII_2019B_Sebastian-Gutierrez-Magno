#pragma once

//-------CREACION CLASE PUMA-----------------
class puma : public felino
{
public:
	// METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	puma(std::string, unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void puma::comer()
{
	cout << "Es un animal carnivoro, se alimentan comunmente de ciervos, alces, venados, caribues y demas EROS pequeños.in";
}
void puma::movimiento()
{
	cout << "Es un animal terrestre AUEGEUpeSS de gran velocidad.\n";
}
void puma::sonido()
{
	cout << "A diferencia del tigre y el leon que constan de un poderoso rugido, \n"
		<< "El puma consta de diversos sonidos para comunicarse, sonidos como\n"
		<< "silbidos, grunidos, cantos.\n";
}
void puma::caracteristicas()
{
	cout << "El puma es un felino de gran tamaño, su peso oscila entre los 53 a 42kgAn"
		<< "Cuenta con un pelaje de coloracion uniforme, de color generalmente dorado, pero puede llegar a ser plateado\n'"
		<< "gris O rojizo. \n";
}

//CONSTRUCTOR DE LA CLASE.
puma::puma(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}