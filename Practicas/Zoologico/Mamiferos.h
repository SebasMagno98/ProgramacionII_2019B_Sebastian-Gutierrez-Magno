#pragma once
#include <iostream>
using namespace std;
class mamifero : public Animales
{
public:
	
};
//------------------------------------ Felinos
class felino : public mamifero 
{
};
class tigre : public felino , public Animales
{
public:

	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	tigre(string);
};
class leon : public felino, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	leon(string);

};
class puma : public felino, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	puma(string);
};

//-------------------------------------- Caninos

class canino : public mamifero
{
};
class lobo : public canino, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	lobo(string);
};
class hiena : public canino, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	hiena(string);
};
class mamifero_acuatico : public mamifero
{
};
class delfin : public mamifero_acuatico, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	delfin(string);
};
void tigre::comer()
{
	cout << "Es un animal carnivoro, el cual comunmente se alimenta de ciervos, bufalos y algunos bovinos.\n";
}
void tigre::movimiento()
{
	cout << "Es un animal terrestre cuadrupedo muy veloz.\n";
}
void tigre::sonido()
{
	cout << "Su sonido caracteristico es un poderoso rugido.\n";
}
void tigre::caracteristicas()
{
	cout << "El tigre es un felino de gran tamanio, con un peso que oscila entre los 47 y los 258 kg.\n"
		<< "Cuentan con un pelaje naranja, un area intermedia y ventral blanquecina, sus rayas varian entre negro a marron.";
}
tigre::tigre(string name)
{
	nombre = name;
}
//---------------------

void leon::comer()
{
	cout << "Es un animal carnivoro, se alimenta mayormente de cebras, impalas, bufalos y ciervos.\n";
}
void leon::movimiento()
{
	cout << "Es un animal terrestre cuadrupedo muy veloz.\n";
}
void leon::sonido()
{
	cout << "Su sonido caracteristico es un poderoso rugido.\n ";
}
void leon::caracteristicas()
{
	cout << "El leon es el felino mas grande del mundo, su peso oscila entre los 160 a 260 kg.\n"
		<< "La coloracion de su pelaje va desde beige claro hasta marron amarillento, con las partes inferiores mas claras.\n"
		<< "Los machos cuentan con una frondosa melena.\n";
}
leon::leon(string name)
{
	nombre = name;
}
//----------------------

void puma::comer()
{
	cout << "Es un animal carnivoro, se alimentan comunmente de ciervos, alces, venados, caribues y demas animales pequeños.\n";
}
void puma::movimiento()
{
	cout << "Es un animal terrestre cuadrupedo de gran velocidad.\n";
}
void puma::sonido()
{
	cout << "A diferencia del tigre y el leon que constan de un poderoso rugido,\n"
		<< "El puma consta de diversos sonidos para comunicarse, sonidos como:\n"
		<< "silbidos, grunidos, cantos y ronroneos.\n";
}
void puma::caracteristicas()
{
	cout << "El puma es un felino de gran tamaño, su peso oscila entre los 53 a 42 kg.\n"
		<< "Cuenta con un pelaje de coloracion uniforme, de color generalmente dorado, pero puede llegar a ser plateado,\n"
		<< "gris o rojizo.\n";
}
puma::puma(string name)
{
	name = nombre;
}
//-----------------------

void lobo::comer()
{
	cout << "Es un animal carnivoro, se alimentan generalmente de ciervos y alces.\n";
}
void lobo::movimiento()
{
	cout << "Es un animal terrestre cuadrupedo de gran agilidad.\n";
}
void lobo::sonido()
{
	cout << "El lobo tiene la capacidad de producir un poderoso aullido que puede ser escuchado a varios kilometros a la redonda.\n";
}
void lobo::caracteristicas()
{
	cout << "EL lobo, al ser un animal tan distribuido a lo largo del mundo, sus caracteristicas varian dependiendo de la region.\n"
		<< "En terminos generales, su peso oscila entre los 32 a 70 kg.\n Cuentan con una gruesa capa de pelaje, el cual esta compuesto por dos capas.\n"
		<< "Su primera capa esta para repeler el agua y suciedad y la segunda le sirve de aislante, su coloracion varia del gris al gris marron, "
		<< "pasando por colores como blanco, rojo, marron y negro.\n";
}
lobo::lobo(string name)
{
	name = nombre;
}
//-----------------------

void hiena::comer()
{
	cout << "Las hienas son carnivoras carronieras, se alimentan de animales muertos abandonados por otros depredadores.\n";
}
void hiena::movimiento()
{
	cout << "Son animales terrestres cuadrupedos.\n";
}
void hiena::sonido()
{
	cout << "El sonido que producen las hienas, se les ha categorizado como una risa, este particular sonido,\n"
		<< "dependiendo de la variacion en la frecuencia que se utilice puede dar a entender, entre muchas cosas, le rango social en la manada.\n";
}
void hiena::caracteristicas()
{
	cout << "Son de aspecto mas reducido en comparacion a los lobos,  siendo de cuellos anchos y cortos, su craneo es mas grande y pesado que el de los lobos, "
		<< "aun siendo estos de mayor tamanio.\n";
}
hiena::hiena(string name)
{
	name = nombre;
}
//-----------------------
void delfin::comer()
{
	cout << "Son animales carnivoros, su alimentacion consta principalmente de peces, moluscos, pulpos y otros invertebrados.\n";
}
void delfin::movimiento()
{
	cout << "Al ser un animal marino, se desplaza por el agua, pero a diferencia de los demas peces, los delfines no nadan con movimientos ondulatorios de izquierda a derecha, se mueven de arriba y abajo para desplazarse.\n";
}
void delfin::sonido()
{
	cout << "Los delfines son capaces de producir un gran numero de sonidos, tales como silbidos y chirridos, los cuales usan para comunicarse y para la ecolocalizacion.\n";
}
void delfin::caracteristicas()
{
	cout << "Los delgines son de los pocos animales acuaticos que son mamiferos, poseen un par de aletas a cada lado de su cuerpo y una aleta trasera. De cuerpo sin escamas y totalmente liso, "
		<< "\n este presenta coloracion que va desde el azul al gris, dependiendo de la especie.\n";
}
delfin::delfin(string name)
{
	name = nombre;
}