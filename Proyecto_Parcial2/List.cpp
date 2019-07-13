#include "List.h"

//-------------METODOS DE LA CLASE SINGLENODE-------------------

void SingleList::push(SingleNode * N)
{
	if (start != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * prev = nullptr;
		while (Temp != nullptr)
		{
			prev = Temp;
			Temp = Temp->next;
		}
		prev->next = N;
	}
	else
	{
		start = &N;
	}
	s++;
}

void SingleList::push(SingleNode * N, unsigned int _Position)
{
	if (_Position <= s)
	{
		unsigned int cont = 0;

		if ((*start) != nullptr)
		{
			SingleNode *temp = *start;
			SingleNode *prev = nullptr;

			while (cont < _Position)
			{
				prev = temp;
				temp = temp->next;
				cont++;
			}
			if (cont == _Position)
			{
				prev->next = N;
				N->next = temp;
			}
		}
		else
		{
			start = &N;
		}
		s++;
	}
	else
	{
		std::cout << "Fuera de rango. \n";
	}
}

SingleNode * SingleList::pull()
{
	if ((*start) != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * prev = nullptr;
		unsigned int contador = 0;
		while (contador < s - 1)
		{
			prev = Temp;
			Temp = Temp->next;
			contador++;
		}
		prev->next = nullptr;
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

SingleNode * SingleList::pull(unsigned int _Position)
{
	if (_Position <= s)
	{
		if ((*start) != nullptr)
		{
			SingleNode * temp = *start;
			SingleNode * prev = nullptr;
			unsigned int cont = 0;

			while (cont < _Position)
			{
				prev = temp;
				temp = temp->next;
				cont++;
			}
			if (cont == _Position)
			{
				prev->next = temp->next;
				temp->next = nullptr;
				return temp;
			}
			s--;
		}
		else
		{
			return nullptr;
		}
	}
	else
	{
		std::cout << "Fuera de rango. \n";
		return nullptr;
	}
}

void SingleList::remove()
{
	if ((*start) != nullptr)
	{
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		delete Temp;
	}
	else
	{
		std::cout << "No hay Nodos que eliminar.\n";
	}
	s--;
}

void SingleList::remove(unsigned int _Position)
{
	if (_Position <= s)
	{
		if ((*start) != nullptr)
		{
			SingleNode * Temp = *start;
			SingleNode * Prev = nullptr;
			unsigned int cont = 0;

			while (cont < _Position)
			{
				Prev = Temp;
				Temp = Temp->next;
				cont++;
			}
			if (cont == _Position)
			{
				Prev->next = Temp->next;
				Temp->next = nullptr;
				delete Temp;
				s--;
			}
		}
	}
	else
	{
		std::cout << "Fuera de rango. \n";
	}
}
void SingleList::clear()
{
	if (*(start) != nullptr)
	{
		delete *start;
	}
}

unsigned int SingleList::size()
{
	return s;
}

SingleList::~SingleList()
{
	
}

std::ostream & operator<<(std::ostream & out, const SingleList & N)
{
	return out << **N.start;
}

std::ostream & operator<<(std::ostream & out, const DoubleList & N)
{
	// TODO: insert return statement here
	return out << **N.start;

}

//---------------METODOS DE LA CLASE DOUBLE NODE-----------

void DoubleList::push(DoubleNode * N)
{
	if (start != nullptr)
	{
		DoubleNode * Temp = *start;

		while (Temp->next != nullptr)
		{
			Temp->prev = Temp;
			Temp->next = Temp->next->next;
			Temp = Temp->next;

		}
		Temp->next = N;
		N->prev = Temp;
		N->next = nullptr;
	
	}
	else
	{
		start = &N;
	}
	s++;
}

void DoubleList::push(DoubleNode * N, unsigned int _Position)
{
	{
		if (_Position < s)
		{
			if ((*start) != nullptr)
			{
				unsigned int cont = 0;
				DoubleNode * temp = *start;

				while (cont < _Position)
				{
					temp->prev = temp;
					temp->next = temp->next->next;
					temp = temp->next;
				}
				if (cont == _Position)
				{
					temp->next->prev = N;
					N->next = temp->next;
					temp->next = N;
					N->prev = temp;
				}
			}
			else
			{
				start = &N;
			}
			s++;
		}
		else
		{
			std::cout << "Fuera de rango. \n";
		}
	}
}

DoubleNode * DoubleList::pull()
{
	if ((*start) != nullptr)
	{
		DoubleNode * Temp = *start;
		int Cont = 0;
		while (Cont < s - 1)
		{
			Temp = Temp->next;
			Cont++;
		}
		Temp->prev->next = nullptr;
		Temp->prev = nullptr;
		s--;
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

DoubleNode * DoubleList::pull(unsigned int _Position)
{
	if (start != nullptr)
	{
		DoubleNode*Temp = *start;
		int cont = 0;
		while (cont != _Position)
		{
			Temp = Temp->next;
			cont++;
		}
		if (cont == _Position)
		{
			Temp->prev->next = Temp->next;
			Temp->next->prev = Temp->prev;
			Temp->next = nullptr;
			Temp->prev = nullptr;
			s--;

		}
		return Temp;
	}
	else
	{
		return nullptr;
	}
}

void DoubleList::remove()
{
	{
		if ((*start) != nullptr)
		{
			DoubleNode * temp = *start;
			while (temp->next != nullptr)
			{
				temp->prev = temp;
				temp->next = temp->next->next;
				temp = temp->next;
			}
			temp->prev->next = nullptr;
			temp->prev = nullptr;
			delete temp;
			s--;
		}
		else
		{
			std::cout << "No hay nodos que eliminar.\n";
		}
	}
}

void DoubleList::remove(unsigned int _Position)
{
	if (_Position < s)
	{
		if (*start != nullptr)
		{
			DoubleNode * Temp = *start;
			unsigned int Cont = 0;
			while (Cont < _Position)
			{
				Temp->prev = Temp;
				Temp = Temp->next;
				Temp->next = Temp->next->next;
			}
			Temp->prev->next = nullptr;
			Temp->prev = nullptr;
			delete Temp;
			s--;
		}
		else
		{
			std::cout << "No hay valores a eliminar ya que la lista esta vacia.\n";
		}
	}
	else
	{
		std::cout << "La posicion especificada es invalida.\n";
	}
}	

void DoubleList::clear()
{
	if (*(start) != nullptr)
	{
		delete *start;
	}
} 

unsigned int DoubleList::size()
{
	return s;
}

DoubleList::~DoubleList()
{
}
