#include <iostream>
#include "Base.hpp"

class Derived : public Base
{
	public:
	char letter;
	void wypiszDerived()
	{
		std::cout << "Wypisano derived - nie wirtualna\n";
	}
	void wypiszNazwe() override
	{
		std::cout << "Derived\n";
	}
};