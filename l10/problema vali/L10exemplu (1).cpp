#include <iostream>
#include "Header.h"


int main()
{
	Masina m1( (char*)"alb", 1999), m2((char*)"negru", 2000);
	//in acest caz se compara m1.an si m2.an
	Masina m3 = maxim<Masina>(m1, m2);
	
	m3.afiseaza();
	int a = maxim<int>(4, 7);
	cout << "Maxim int " << a;

	return 0;

}