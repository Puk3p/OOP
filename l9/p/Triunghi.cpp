#include "Triunghi.h"

Triunghi::Triunghi()
{
	cout << "\nTriunghi();";
	a = 10;
	b = 5;
	c = 11;
}
Triunghi::Triunghi(const char* cul, double aa, double bb, double cc) :Figura(cul)
{
	cout << "\nTriunghi(";
	if (cul)
		cout << cul;
	cout << "," << aa << "," << bb << "," << cc << ");";
	a = aa;
	b = bb;
	c = cc;
}
Triunghi::~Triunghi()
{
	cout << "\n~Triunghi();";
	a = 0;
	b = 0;
	c = 0;
}
double Triunghi::Aria()
{
	double rez = 0;
	double p;
	p = (a + b + b) / 2;
	rez = sqrt(p * (p - a) * (p - b) * (p - c));
	return rez;
}
double Triunghi::Perimetru()
{
	return (a + b + c);
}
void Triunghi::Afisare()
{
	Figura::Afisare();
	cout << "\nTip figura: triunghi";
	cout << "\nLatura a: " << a;
	cout << "\nLatura b: " << b;
	cout << "\nLatura c: " << c;
}