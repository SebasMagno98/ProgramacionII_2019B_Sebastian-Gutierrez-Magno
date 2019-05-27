#pragma once
#include <iostream>
using namespace std;
class oviparo : public Animales
{
public:
	string tipo;
};
class ave : public oviparo
{
};
class aguila : public ave, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	aguila(string);
};
class loro : public ave, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	loro(string);
};

//------------------------------------ Reptiles

class reptil : public oviparo
{
};
class cocodrilo : public reptil, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	cocodrilo(string);
};
class iguana : public reptil, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	iguana(string);
};

//----------------------------------- Peces

class pez : public oviparo
{
};
class caballito_mar : public pez, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	caballito_mar(string);
};
class tiburon : public pez, public Animales
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	tiburon(string);
};
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
aguila::aguila(string name)
{
	name = nombre;
}
//-------------------------

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
loro::loro(string name)
{
	name = nombre;
}
//----------------------------

void cocodrilo::comer()
{
	cout << "Son reptiles carnivoros, se alimentan de peces, otros reptiles, aves, bufalos, antilopes, cebras y demas animales.\n";
}
void cocodrilo::movimiento()
{
	cout << "Son reptiles que se desplazan por agua y tierra. En el agua se apoyan principalmente en su cola para moverse y en la tierra usan sus cortas patas.\n";
}
void cocodrilo::sonido()
{
	cout << "El sonido producido por un cocodrilo se considera un especie se lloro, con el cual pueden pedir ayuda si se encuentran amenazados entre otros sonidos para comunicarse.\n";
}
void cocodrilo::caracteristicas()
{
	cout << "Reptiles de gran tamaño, de cuerpo alargado, patas cortas, mandibulas enormes con grandes y afilados dientes, de piel sumamente gruesa y cubierta por resistentes escamas que le sirven como proteccion.\n";
}
cocodrilo::cocodrilo(string name)
{
	name = nombre;
}
//----------------------------

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
iguana::iguana(string name)
{
	name = nombre;
}
//--------------------------

void caballito_mar::comer()
{
	cout << "Son carnivoros, se alimentan principalmente de pequenios crustaceos o de larvas de peces.\n";
}
void caballito_mar::movimiento()
{
	cout << "Al ser un animal marino se desplaza por el agua, es un nadador muy lento, se mueve gracias a las vibraciones que producen con sus aletas dorsales.\n";
}
void caballito_mar::sonido()
{
	cout << "El sonido que producen los caballitos de mar es un leve y apenas perceptible rugido, el cual es provocado cuando el caballito aspira a su presa con su boca.\n";
}
void caballito_mar::caracteristicas()
{
	cout << "Es una criatura marina muy pequenia, tamanio oscila entre 18 mm a 30 cm, tienen una cola prensada la cual le sirve para recoger objetos, son de un colo amarillo verdoso, "
		<< "de ojos pequenios, y una boca alargada y angosta.\n";
}
caballito_mar::caballito_mar(string name)
{
	name = nombre;
}
//---------------------------

void tiburon::comer()
{
	cout << "Es un animal carnivoro, se alimenta principalmente de peces, calamares, pulpos, placton, cangrejos y crustaceos.\n";
}
void tiburon::movimiento()
{
	cout << "Al ser un animal marino, se deplaza por el agua. Los tiburones no pueden quedarse quietos, ya que esto puede llegar a matarlos, siempre estan en movimiento\n "
		<< "su desplazamiento consta de movimientos ondulatorios que les permite mantenerse constantemente en movimiento.\n";
}
void tiburon::sonido()
{
	cout << "Los tiburones son depredadores silenciosos, no producen ningun tipo de sonido al carecer de cuerdas vocales.\n";
}
void tiburon::caracteristicas()
{
	cout << "Es un pez de gran tamanio y peso, llegan a medir desde los 2 metros hasta los 15 metros son peces con una forma aerodinamica, lo cual les permite ser muy agiles al moverse, constan de una poderosa mandibula que contiene\n"
		<< "grandes hileras de dientes afilados, teniendo hasta 5 hileras de dientes.\n ";
}
tiburon::tiburon(string name)
{
	name = nombre;
}
//-----------------------------