#pragma once
#include <iostream>
using namespace std;

class Complex
{
private:
	int re, im;
public:
	Complex();
	Complex(int r, int i);
	Complex(const Complex& c);
	~Complex();
	// Complex aduna(Complex c);
	Complex aduna(const Complex& c);
	void afisare();

	int egal(Complex c);
	void citire();
};

