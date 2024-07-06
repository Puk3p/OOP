#include "Stiva.h"
#include <iostream>
using namespace std;

#define DIMMAX 5

Stiva::Stiva()
{
	dim = DIMMAX;
	date = new int[dim];
	sp = 0;
}

Stiva::Stiva(int d)
{
	dim = d;
	date = new int[dim];
	sp = 0;
}

Stiva::~Stiva()
{
	delete[] date;
	date = nullptr;

}

void Stiva::push(int el)
{
	if (sp == dim)
		cout << "stiva este plina\n" << endl;
	else
	{
		date[sp] = el;
		sp++;

	}

}

int Stiva::pop()
{
	if (sp == 0)
	{
		cout << "stiva este goala\n" << endl;
	}
	else
		sp--;

	return 0;
}

int Stiva::top()
{
	return date[sp - 1];
}

void Stiva::print()
{
	for (int i = 0; i < sp; i++)
	{
		cout << date[i];
		cout << endl;
	}
}
