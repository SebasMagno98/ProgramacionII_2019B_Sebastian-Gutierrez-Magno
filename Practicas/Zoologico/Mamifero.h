#pragma once

using namespace std;

//-------CREACION CLASE MAMIFERO-----------------
// CLASE QUE HEREDA DE LA CLASE ANIMAL, Y ESTA HEREDARA SUS METODOS A SUS DEMAS CLASES HIJAS
class mamifero : public Animal
{
public:
};
class felino : public mamifero
{
};
//-------------------------------Felinos

class canino : public mamifero
{};
//-----------------------------Caninos

class mamifero_acuatico : public mamifero
{};
//--------------------------Mamiferos acuaticos.
