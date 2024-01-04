#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
	public:
	int num;
	void wypiszBase()
	{
		std::cout << "Wypisano baze - nie wirtualna\n";
	}
	virtual void wypiszNazwe()
	{
		std::cout << "Base\n";
	}
};

#endif