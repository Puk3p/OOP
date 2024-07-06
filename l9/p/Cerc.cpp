#include "Cerc.h"

Cerc::Cerc()
{
	cout << "\nTriunghi();";
	xc = 8;
	yc = 5;
	raza = 5;
}
Cerc::Cerc(const char* cul, double xxc, double yyc, double r) :Figura(cul)
{
	cout << "\nCerc(";
	if (cul)
		cout << cul;
	cout << "," << xxc << "," << yyc << "," << r << ");";
	xc = xxc;
	yc = yyc;
	raza = r;
}
Cerc::~Cerc()
{
	cout << "\n~Cerc();";
	xc = 0;
	yc = 0;
	raza = 0;
}
double Cerc::Aria()
{
	double rez = 0;
	const float PI = 3.14;
	rez = PI * raza * raza;
	return rez;
}
double Cerc::Perimetru()
{
	const float PI = 3.14;
	double rez = 0;
	rez = 2 * PI * raza;
	return rez;
}
void Cerc::Afisare()
{
	Figura::Afisare();
	cout << "Cerc cu coordonatele (" << xc << "," << yc << "), raza " << raza << ", aria " << Aria() << " si perimetrul " << Perimetru() << endl;
}