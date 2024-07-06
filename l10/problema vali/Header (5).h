#pragma once
#include<iostream>

using namespace std;


class Masina
{
	char* culoare;
	int an;
public:
	Masina(char* c, int a)
	{
		int len = strlen(c);
		culoare = new char[len + 1];
		strcpy_s(culoare, len + 1, c);
		an = a;
	}
	Masina(const Masina& m)
	{
		int len = strlen(m.culoare);
		culoare = new char[len + 1];
		strcpy_s(culoare, len + 1, m.culoare);
		an = m.an;
	}
	void afiseaza()
	{
		cout << culoare << " " << an << endl;
	}
	bool operator<(const Masina& m)
	{
		return (an < m.an) ? true : false;
	}
};

template <typename T>
T maxim(T a, T b)
{
	return (a < b) ? b : a;
}