#include "MultimeComplexe.h"

int main()
{
	MultimeComplexe m;
	Complex c1(2, 3), c2(3, 4), c3(2, -1);
	m.adauga(c1);
	m.adauga(c2);
	m.afisare();
	m.extrage(c1);
	m.extrage(c3);
	m.afisare();
	m.adauga(c3);
	m.adauga(c3);
	m.afisare();
	system("pause");
	return 0;






	/*Complex c1(12, 6), c2(5, 8);

	c1.afisare();
	c2.afisare();

	Complex c3 = c1.aduna(c2);
	c3.afisare();
	cout << "\n\n\n\n";
	Complex num1;
	Complex num2;
	num1.citire();
	num2.citire();
	if (num1.egal(num2)) {
		cout << "\nSunt egale" << endl;
	}
	else {
		cout << "\nNu-s egale" << endl;
	}
	system("pause");
	return 0;*/
}