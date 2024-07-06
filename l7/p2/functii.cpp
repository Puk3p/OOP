#include "header.h"
#include <iostream>
using namespace std;

Multime::Multime()
{
	cout << "\n Multime();";
	dim = 20;
	n = 0;
	date = new int[dim];
}

Multime::Multime(int d)
{
	cout << "\n Multime(" << d << ");";
	dim = d;
	n = 0;
	date = new int[dim];
}

Multime::~Multime()
{
	cout << "\n ~Multime();";
	if (date)
		delete[] date;
	date = nullptr;
	dim = -1;
	n = -1;
}

void Multime::adauga(int el)
{
	int ok = 0;
	if (n < dim)
	{
		for (int i = 0; i < n; i++)
			if (date[i] == el)
			{
				ok = 1;
				i = n + 1;
			}
		if (ok)
			cout << "\n Element duplicat!";
		else
		{
			date[n] = el;
			n++;
		}
	}
	else
		cout << "\n Multime plina!";

}

void Multime::extrage(int el)
{
	if (n == 0)
		cout << "nu avem elemente in multime";
	else
	{
		for (int i = 0; i < n; ++i)
			if (date[i] == el)
			{
				date[i] = date[n - 1];
				n--;
				return;
			}
	}
	cout << "elementul " << el << " nu exista";

}

void Multime::afisare()
{
	cout << "\n Multimea: {";
	if (n)
	{
		for (int i = 0; i < n; i++)
			cout << date[i] << " ";
	}
	cout << "}.\n\n";
}

void Multime::operator+=(int el)
{
	int ok = 0;
	if (n < dim)
	{
		for (int i = 0; i < n; i++)
			if (date[i] == el)
			{
				ok = 1;
				i = n + 1;
			}
		if (ok)
			cout << "\n Element duplicat!";
		else
		{
			date[n] = el;
			n++;
		}
	}
	else
		cout << "\n Multime plina!";

}

void Multime::operator-=(int el)
{
	if (n == 0)
		cout << "nu avem elemente in multime";
	else
	{
		for (int i = 0; i < n; ++i)
			if (date[i] == el)
			{
				date[i] = date[n - 1];
				n--;
				return;
			}
	}
	cout << "elementul " << el << " nu exista";
}

/*bool Multime::operator=(Multime m1)
{
	int ok = 1; 
	if (this->n == m1.n)
	{
		for (int i = 0; i < this->n; ++i)
		{
			if (this->date[i] != m1.date[i])
			{
				return 0;
			}
		}
	}
	return 1;
}*/

/*void Multime::operator+=(Multime m1)
{
	int i;
	if (this->n + m1.n < dim)
	{
		for (int i = this->n + 1; i < this->n + m1.n; ++i)
		{
			operator+=(m1.date[i]);
		}
	}
}*/

Multime Multime::operator+(Multime m1)
{
	Multime m2;
	int i;
	if (this->n + m1.n < dim)
	{
		for (int i = this->n + 1; i < this->n + m1.n; ++i)
		{
			operator+=(m1.date[i]);
		}
	}
	

}