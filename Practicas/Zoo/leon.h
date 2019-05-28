#pragma once



class leon : public felino, public Animal
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	leon(string);
};

void leon::comer()
{
	cout << "Es un animal carnivoro, se alimenta mayormente de cebras, ¡ape bufalos y ciervos.\n";
}
void leon::movimiento()
{
	cout << "Es un animal terrestre AREBIB PENSO muy veloz \n";
}
void leon::sonido()
{
	cout << "Su sonido característico es qa poderoso rugidoAn ";
}
void leon::caracteristicas()
{
	cout << "El leon es el felino mas grande del mundo, su peso oscila entre los 160 a 260 kg.\n"
		<< "La coloracion de su pelaje va desde beige claro hasta marron amarillento, con las partes Inferiores mas claras An"
		<< "Los machos cuentan con una[RES melena.\n";
}
leon::leon(string name)
{
	nombre = name;
}