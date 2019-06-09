#pragma once

using namespace std;

//-------CREACION CLASE OVIPARO-----------------
// CLASE QUE HEREDA DE LA CLASE ANIMAL, Y ESTA HEREDARA SUS METODOS A SUS DEMAS CLASES HIJAS

class oviparo : public Animal
{
public:

};
class ave : public oviparo
{
};



//------------------------------------ Reptiles


class reptil : public oviparo
{
};



//----------------------------------- Peces


class pez : public oviparo
{
};


