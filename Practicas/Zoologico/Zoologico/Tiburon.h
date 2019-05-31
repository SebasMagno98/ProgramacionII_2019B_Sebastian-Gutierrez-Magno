#pragma once


class tiburon : public pez, public Animal
{
public:
	string nombre;
	void comer();
	void movimiento();
	void sonido();
	void caracteristicas();
	tiburon(string);
};

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