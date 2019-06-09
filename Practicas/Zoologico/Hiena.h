#pragma once

//-------CREACION CLASE HIENA-----------------

class hiena : public canino
{
public:
	//METODOS.
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	hiena(std::string,unsigned char,Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void hiena::comer()
{
	cout << "Las hienas son carnivoras carronieras, se alimentan de animales muertos abandonados por otros depredadores.\n";
}
void hiena::movimiento()
{
	cout << "Sen animales terrestres Cuadrupedos. \n";
}
void hiena::sonido()
{
	cout << "El sonido que producen las hienas, se les ha categorizado como una risa, este particular sonido \n" 
		<< "dependiendo de la variacion en la frecuencia que se utilice puede dar a entender, entre muchas cosas, le ¡use social en la manada.\n";
}

void hiena::caracteristicas()
{
	cout << "Son de aspecto mas reducido en comparacion a los lobos, siendo de cuellos anchos y cortos, su craneo es mas grande y pesado que el de los lobos, "
		<< "aun siendo estos de mayor tamanio. \n";
}

//CONSTRUCTOR DE LA CLASE.
hiena::hiena(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;

}