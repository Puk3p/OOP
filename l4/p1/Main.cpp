#include "Dreptunghi.h"

int main()
{
	Dreptunghi d1;
	Dreptunghi d2(20, 10);
	Dreptunghi* d3 = new Dreptunghi();
	Dreptunghi* d4 = new Dreptunghi(30, 15);

	d1.afisare();
	d2.afisare();
	d3->afisare();
	d4->afisare();
	
	if (d3)
		delete d3;
	d3 = nullptr;
	if (d4)
		delete d4;
	d4 = nullptr;
	return 0;
}
