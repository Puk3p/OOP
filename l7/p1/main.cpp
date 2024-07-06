#include<iostream>
#include "header.h"

using namespace std;

int main()
{
	Complex num1;
	Complex num2;
	Complex num3;
	double modul;
	num1.citire();
	num2.citire();
	num3 = num1 + num2;
	cout << "Adunare: ";
	num3.afisare();
	num3 = num1 - num2;
	cout << "Scadere: ";
	num3.afisare();
	if (num1 == num2) {
		cout << "Numerele sunt egale.";
	}
	else {
		cout << "Numerele sunt diferite.";
	}
	cout << endl;
	cout << "Modulul primului numar: ";
	~num1;
	cout << endl;
	cout << "Modulul celui de-al doilea numar: ";
	~num2;
	cout << endl;
	system("pause");
	return 0;
}

