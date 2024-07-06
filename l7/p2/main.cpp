#include "header.h"
#include<iostream>
using namespace std;

int main()
{

	/*Multime m(10);
	m.adauga(4);
	m.adauga(3);
	m.afisare();
	m.extrage(4);
	m.extrage(4);
	m.afisare();
	m.adauga(9);
	m.adauga(2);
	m.adauga(2);
	m.afisare();*/

	Multime m1(15), m2(10);
	m1 += 1;
	m1 += 2;
	m1 += 3;
	m2 += 1;
	
	/*m1 = m2;
	if (m1 = m2)
	{
		cout << "sunt egale";
	}
	else
		cout << "nu sunt egale";*/
	//m1 += m2;
	m1.afisare();
	m2.afisare();
	return 0;
}