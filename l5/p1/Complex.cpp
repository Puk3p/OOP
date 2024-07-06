#include "Header.h"

Complex::Complex()
{
	cout << "\n Complex();";
	re = 10;
	im = 5;
}

Complex::Complex(int r, int i)
{
	cout << "\n Complex cu arg (" << r << ", " << i << ");";
	re = r;
	im = i;
}

Complex::Complex(const Complex& c)
{
	cout << "\n Complex de cop (" << c.re << ", " << c.im << ");";
	re = c.re;
	im = c.im;
}

Complex::~Complex()
{
	cout << "\n ~Complex(" << re << ", " << im << ");";
	re = -1;
	im = -1;

}


Complex Complex::aduna(const Complex& c)
{
	Complex rez;
	rez.re = this->re + c.re;
	rez.im = this->im + c.im;
	return rez;
}

void Complex::afisare()
{
	cout << "\n nr complex " << re << " + " << im << " * i;";
}


Complex::egal(Complex c2)
{
	if (this->re == c2.re && this->im == c2.im) {
		return 1;
	}
	else {
		return 0;
	}
}


void Complex::citire() {
	cout << "\nIntrodu partea reala: ";
	cin >> this->re;
	cout << "Introdu partea imaginara: ";
	cin >> this->im;
	cout << endl;
}
