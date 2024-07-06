#include "Multime.h"
#include<iostream>

Multime::Multime()
{
	cout << "\n Multime();";
	dim = DIMMAX;
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

Multime& Multime::operator=(const Multime& m)
{
	Multime rez(m.dim);
	rez.n = m.n;
	for (int i = 0; i < n; ++i)
	{
		rez.date[i] = m.date[i];
	}
	return rez;
}

Multime Multime::operator+=(const Multime& m)
{
	Multime rez = m.dim;
	rez.dim += m.dim;
	int tmp_n;
	for (int i = 0; i < n; ++i)
	{
		tmp_n = rez.n;
		rez += m.date[i];
		if (tmp_n < rez.n)
		{
			++rez.n;
		}
	}
	return rez;

}


