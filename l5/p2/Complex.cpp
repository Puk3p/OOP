#include "Complex.h"
#include "MultimeComplexe.h"

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

int Complex::egal(Complex c2) {
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

MultimeComplexe::MultimeComplexe() {
	cout << "Multime complexe: ";
	dim = DIMMAX;
	v = new Complex[dim];
	n = 0;
}

MultimeComplexe::MultimeComplexe(int d) {
	cout << "MultimeComplexe(" << d << ")";
	dim = d;
	v = new Complex[dim];
	n = 0;
}

MultimeComplexe::~MultimeComplexe() {
	cout << "~MultimeComplexe" << endl;
	if (v) {
		delete[] v;
	}
	v = nullptr;
	dim = -1;
	n = -1;
}

void MultimeComplexe::adauga(Complex num) {
	int ok = 0;
	if (n < dim) {
		for (int i = 0; i < n; i++) {
			if (v[i].egal(num)) {
				ok = 1;
				i = n + 1;
			}
		}
		if (ok) {
			cout << "Element duplicat!";
		}
		else {
			v[n] = num;
			n++;
		}
	}
	else {
		cout << "Multime plina!";
	}
}

void MultimeComplexe::extrage(Complex num) {
	int i;
	if (n != 0) {
		for (i = 0; i < n; i++) {
			if (v[i].egal(num)) {
				break;
			}
			else {
				cout << "Elementul nu exista!";
			}
		}
		if (i < n) {
			n = n - 1;
			for (int j = i; j < n; j++) {
				v[j] = v[j + 1];
			}
		}
	}
	else {
		cout << "Multime goala!";
	}
}

void MultimeComplexe::afisare() {
	cout << "\n Multimea: {";
	if (n) {
		for (int i = 0; i < n; i++) {
			v[i].afisare();
		}
	}
	cout << "}.\n\n";
}