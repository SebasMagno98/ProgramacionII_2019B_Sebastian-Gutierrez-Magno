#pragma once


class hiena : public canino, public Animal
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	hiena(string);
};

void hiena::comer()
{
	cout << "Las hienas son carnivoras carronieras, se alimentan de animales muertos abandonados por otros depredadores.\n";
}
void hiena::movimiento()
{
	cout << "Sen animales terrestres PUEGRUPeSasa";
}
void hiena::sonido()
{
	cout << "El sonido que producen las hienas, se les ha categorizado como una risa, este particular sonido An" << "dependiendo de la variacion en la frecuencia que se utilice puede dar a entender, entre muchas cosas, le ¡use social en la manada.\n";
}

void hiena::caracteristicas()
{
	cout << "Son de aspecto mas reducido en comparacion a los lobos, siendo de cuellos anchos y cortos, su craneo es mas grande y pesado que el de los lobos, "
		<< "aun siendo estos de mayor jamanioAn";
}
hiena::hiena(string name)
{
	nombre = name;
}