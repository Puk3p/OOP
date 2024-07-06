#pragma once

#include "complex.h"
#define DIMMAX 10;

class MultimeComplexe
{
private:
	Complex* v;
	int dim;
	int n;
public:
	MultimeComplexe();
	MultimeComplexe(int d);
	~MultimeComplexe();

	void adauga(Complex c);
	void extrage(Complex c);
	void afisare();
};


