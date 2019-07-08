#pragma once
#include <string>
class Nodo
{
public:
	std::string m_Name;
	unsigned char m_Age;
	Nodo *m_Next;

	void Add(Nodo * &N);

	Nodo * Get_Next(Nodo * &N);

	void Get_Last(Nodo *&N);

	Nodo();
	Nodo(std::string Name, unsigned char Age);

	~Nodo();
};

