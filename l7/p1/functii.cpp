#include "header.h"
#include <iostream>
#include <math.h>
using namespace std;

Complex::Complex(int re, int im) {
	this->re = re;
	this->im = im;
}

Complex Complex::operator+(Complex c2) {
	Complex temp;
	temp.re = this->re + c2.re;
	temp.im = this->im + c2.im;
	return temp;
}

Complex Complex::operator-(Complex c2) {
	Complex temp;
	temp.re = this->re - c2.re;
	temp.im = this->im - c2.im;
	return temp;
}

bool Complex::operator==(Complex c2) {
	if (this->re == c2.re && this->im == c2.im) {
		return 1;
	}
	else {
		return 0;
	}
}

void Complex::operator~() {
	double res = (sqrt(this->re * this->re + this->im * this->im));
	cout << res;
}

void Complex::citire() {
	cout << "Introdu partea reala: ";
	cin >> this->re;
	cout << "Introdu partea imaginara: ";
	cin >> this->im;
	cout << endl;
}

void Complex::afisare() {
	cout << "(" << re << "," << im << ")" << endl;
}
