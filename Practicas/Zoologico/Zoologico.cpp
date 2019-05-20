#include <iostream>
using namespace std;
class Animales
{
public:
	
	virtual void comer();
	virtual void movimiento();
	virtual void sonido();
	virtual void caracteristicas();
};
class mamifero : public Animales
{
public:
	string tipo;
};
//----------------------------------
class oviparo : public Animales
{
public:
	string tipo;
};
//------------------------------------ Felinos
class felino : public mamifero
{
};
class tigre : public felino
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};
class leon : public felino 
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	

};
class puma : public felino
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	
};

//-------------------------------------- Caninos

class canino : public mamifero
{
};
class lobo : public canino
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	
};
class hiena : public canino
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};

//------------------------------------- Aves

class ave : public oviparo
{
};
class aguila : public ave
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};
class loro : public ave
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};

//------------------------------------ Reptiles

class reptil : public oviparo
{
};
class cocodrilo : public reptil
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};
class iguana : public reptil
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	
};

//----------------------------------- Peces

class pez : public oviparo
{
};
class caballito_mar : public pez
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};
class tiburon
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
};

//------------------------------------ Mamiferos acuaticos


class mamifero_acuatico : public mamifero
{
};
class delfin : public mamifero_acuatico
{
public:
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	
};

//-------------------------------------------------------------------------------------------------------------------------------

void Animales::comer()
{
}
void Animales::movimiento()
{

}
void Animales::sonido()
{

}
void Animales::caracteristicas()
{}
//----------------------

void tigre::comer()
{}
void tigre::movimiento()
{}
void tigre::sonido()
{}
void tigre::caracteristicas()
{}
//---------------------

void leon::comer()
{}
void leon::movimiento()
{}
void leon::sonido()
{}
void leon::caracteristicas()
{}
//----------------------

void puma::comer()
{}
void puma::movimiento()
{}
void puma::sonido()
{}
void puma::caracteristicas()
{}
//-----------------------

void lobo::comer()
{}
void lobo::movimiento()
{}
void lobo::sonido()
{}
void lobo::caracteristicas()
{}
//-----------------------

void hiena::comer()
{}
void hiena::movimiento()
{}
void hiena::sonido()
{}
void hiena::caracteristicas()
{}
//-----------------------

void aguila::comer()
{}
void aguila::movimiento()
{}
void aguila::sonido()
{}
void aguila::caracteristicas()
{}
//-------------------------

void loro::comer()
{}
void loro::movimiento()
{}
void loro::sonido()
{}
void loro::caracteristicas()
{}
//----------------------------

void cocodrilo::comer()
{}
void cocodrilo::movimiento()
{}
void cocodrilo::sonido()
{}
void cocodrilo::caracteristicas()
{}
//----------------------------

void iguana::comer()
{}
void iguana::movimiento()
{}
void iguana::sonido()
{}
void iguana::caracteristicas()
{}
//--------------------------

void caballito_mar::comer()
{}
void caballito_mar::movimiento()
{}
void caballito_mar::sonido()
{}
void caballito_mar::caracteristicas()
{}
//---------------------------

void tiburon::comer()
{}
void tiburon::movimiento()
{}
void tiburon::sonido()
{}
void tiburon::caracteristicas()
{}
//-----------------------------

void delfin::comer()
{}
void delfin::movimiento()
{}
void delfin::sonido()
{}
void delfin::caracteristicas()
{}

//--------------------------------

int main()
{
	tigre tonio;
	tonio.movimiento();

	leon jack;
	jack.comer();

	puma alfredo;
	alfredo.caracteristicas();

	lobo sif;
	sif.movimiento();

	hiena sith;
	sith.comer();


	return 0;
}