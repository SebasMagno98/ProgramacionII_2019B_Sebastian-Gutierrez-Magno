#include "Node.h"
#include <string>
#include <iostream>
//-------------------METODOS DE NODE-------------------

const std::string Node::getName()
{
	return std::string();
}

void Node::setName(std::string _name)
{
	name = _name;
}

const std::string Node::getLastName()
{
	return std::string();
}

void Node::setLastName(std::string _LastName)
{
	lastName = _LastName;
}

const std::string Node::getEmail()
{
	return std::string();
}

void Node::setEmail(std::string _Email)
{
	email = _Email;
}

void Node::setBirthDate(unsigned char _Day, unsigned char _Month, unsigned char _Year)
{
	birthDay =(unsigned char) _Day;
	birthMonth = (unsigned char)_Month;
	birthYear = (unsigned char)_Year;
}

const std::string Node::getFullName()
{
	return lastName = lastName + " " + name;
}

const unsigned int Node::getAge()
{
	unsigned int Age = 19;
	if (birthYear <= Age) 
	{
		Age = Age - int((unsigned char)birthYear);
		return Age;
	}
	else 
	{
		Age = 0;
		return Age;
	}
}

//------------------METODOS DE SINGLENODE-----------------

bool SingleNode::operator>(SingleNode & N)
{
	return this->getAge() > N.getAge();
}

bool SingleNode::operator<(SingleNode & N)
{
	return this->getAge() < N.getAge();
}

SingleNode::~SingleNode()
{
	if (next != nullptr)
	{
		delete next;
	}
}

std::ostream & operator<<(std::ostream & out,  SingleNode & N)
{
	// TODO: insert return statement here
	out << "\n\n El nombre es: " << N.getFullName() << "\nLa edad es: " << N.getAge()<< "\nEl Email es: " << N.getEmail() << ".\n";

	if (N.next == nullptr)
	{
		return out;
	}
	else
	{
		return out << N.next;
	}
}

std::istream & operator>>(std::istream & inp, SingleNode & N)
{
	// TODO: insert return statement here
	std::cout << "Ingresa un nombre: ";
	inp >> N.name;
	std::cout << "Ingresa un apellido: ";
	inp >> N.lastName;
	std::cout << "Ingrese un Email: ";
	inp >> N.email;
	std::cout << "Ingresa un dia de nacimiento: ";
	inp >> N.birthDay;
	std::cout << "Ingresa un mes de nacimiento: ";
	inp >> N.birthMonth;
	std::cout << "Ingresa un anio de nacimiento: ";
	inp >> N.birthYear;

	
	return inp;

}

//-----------METODOS DOUBLE NODE-----------------------
std::ostream & operator<<(std::ostream & out, DoubleNode & N)
{
	// TODO: insert return statement here
	out << "\n\n El nombre es: " << N.getFullName() << "\nLa edad es: " << N.getAge() << "\nEl Email es: " << N.getEmail() << ".\n";

	if (N.next == nullptr)
	{
		return out;
	}
	else
	{
		return out << N.next;
	}


}

std::istream & operator>>(std::istream & inp, DoubleNode & N)
{
	// TODO: insert return statement here
	std::cout << "Ingresa un nombre: ";
	inp >> N.name;
	std::cout << "Ingresa un apellido: ";
	inp >> N.lastName;
	std::cout << "Ingrese un Email: ";
	inp >> N.email;
	std::cout << "Ingresa un dia de nacimiento: ";
	inp >> N.birthDay;
	std::cout << "Ingresa un mes de nacimiento: ";
	inp >> N.birthMonth;
	std::cout << "Ingresa un anio de nacimiento: ";
	inp >> N.birthYear;

	return inp;
}


bool DoubleNode::operator>(DoubleNode & N)
{
	return this->getAge() > N.getAge();
}

bool DoubleNode::operator<(DoubleNode & N)
{
	return this->getAge() < N.getAge();
}

DoubleNode::~DoubleNode()
{
	if (next != nullptr)
	{
		delete next;
	}
}
