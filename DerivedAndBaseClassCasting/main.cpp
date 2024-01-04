#include <iostream>
#include "Base.hpp"
#include "Derived.hpp"

using namespace std;

int main()
{
	Base* p1 = new Derived;
	p1->wypiszBase();
	p1->wypiszNazwe();

	Base bn1;
	bn1.num = 3;
	Derived dn1;
	dn1.num = 5;
	dn1.letter = 'a';
	Base* bp1 = new Base;
	bp1->num = 30;
	Derived* dp1 = new Derived;
	dp1->num = 50;
	dp1->letter = 'k';

	Base bn2;
	bn2.num = 3;
	Derived dn2;
	dn2.num = 5;
	dn2.letter = 'a';
	Base* bp2 = new Base;
	bp2->num = 30;
	Derived* dp2 = new Derived;
	dp2->num = 50;
	dp2->letter = 'k';

	Base bn3;
	//Derived dn3;
	Base* bp3;
	Derived* dp3;

	//Base bn4;
	//Derived dn4;
	Base* bp4;
	Derived* dp4;

	Base* bp5 = new Derived;
	bp5->num = 7;
	Base* bp6 = new Derived;
	bp6->num = 7;

	Derived* dp7;
	Derived* dp8;

	bn3 = static_cast<Base>(dn1);
	//dn3 = static_cast<Derived>(bn1);
	bp3 = static_cast<Base*>(dp1);
	dp3 = static_cast<Derived*>(bp1); 
	dp7 = static_cast<Derived*>(bp5);

	//bn4 = dynamic_cast<Base>(dn2);
	//dn4 = dynamic_cast<Derived>(bn2);
	bp4 = dynamic_cast<Base*>(dp2);
	dp4 = dynamic_cast<Derived*>(bp2); // zwraca NULL
	dp8 = dynamic_cast<Derived*>(bp6);

	if (!bp4)
	{
		cout << "Konwersja ze wskaznika klasy pochodnej na bazowa nie powiodla sie\n";
	}
	if (!dp4)
	{
		cout << "Konwersja ze wskaznika klasy bazowej na pochodna nie powiodla sie\n";
	}
	if (!dp8)
	{
		cout << "Konwersja ze poliformicznego wskaznika klasy bazowej na pochodna nie powiodla sie\n";
	}

	return 0;
}