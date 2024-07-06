#pragma once

#include <iostream>
using namespace std;

class Figura {
private:
	char* culoare;
public:
	Figura();
	Figura(const char* cul);
	virtual ~Figura();
	virtual double Aria() = 0;
	virtual double Perimetru() = 0;
	virtual void Afisare();
};

Figura* figCuArieMax(Figura** figuri, int n);
Figura* figCuPerimetruMax(Figura** figuri, int n);
void sortare(Figura** figuri, int n);
