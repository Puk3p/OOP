#include<iostream>
#include"student.h"
#include"Grupa.h"
using namespace std;

void Grupa::citire(void)
{
	Student s;
	int nrStud;
	int i;
	cout << "Numar studenti:";
	cin >> nrStud;
	tabStudenti = new Student[nrStud];
	for (int i = 0; i < nrStud; ++i)
	{
		cout << "Numele grupei:";
		cin >> numeGrupa;
		tabStudenti[i].citire();
	}
	
}


void Grupa::afisare()
{
	for (int i = 0; i < nrStud; ++i)
		tabStudenti[i].afisare();

	
}