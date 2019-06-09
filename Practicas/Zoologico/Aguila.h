#pragma once

//-------CREACION CLASE AGUILA-----------------

class aguila : public ave
{
public:
	//METODOS
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	aguila(std::string,unsigned char, Health);
};

//DECLARACION DE LOS METODOS DE LA CLASE.

void aguila::comer()
{
	cout << "Son aves carnivoras, se alimentan mayormente de mamiferos pequenios, aunque tambien se les ha visto adoptar comportamientos de un carroniero.\n";
}
void aguila::movimiento()
{
	cout << "Al ser aves, su metodo de desplazamiento convencional es a traves del vuelo, aunque tambien pueden desplazarse usando sus patas.\n";
}
void aguila::sonido()
{
	cout << "El sonido de un aguila se cataloga como un poderoso chirrido o tambien llamado grito de un tono muy agudo.\n";
}
void aguila::caracteristicas()
{
	cout << "Aguila es el nombre que se les da a las mayores aves depredadoras, se caracterizan principalmente por su gran tamaño en comparacion con otras aves similares, "
		<< "constitucion robusta, cabeza y picos pesados, alas muy largas y puntiagudas.\n";
}

//COPNSTRUCTOR DE LA CLASE.
aguila::aguila(std::string name, unsigned char edad, Health salud)
{
	m_name = name;
	m_Age = edad;
	m_HEALTH = salud;
}