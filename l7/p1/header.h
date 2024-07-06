#pragma once
#include <iostream>
using namespace std;

class Complex 
{
	int re, im;
 public:
	Complex() {};
	Complex(int, int);
	Complex operator +(Complex);
	Complex operator -(Complex);
	bool operator ==(Complex);
	void operator ~();
	void afisare();
	void citire();
};