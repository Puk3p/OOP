#pragma once
#include <iostream>
using namespace std;

#define DIMMAX 5

class Multime
{
private:
	int* date;
	int dim;
	int n;
public:
	Multime();
	Multime(int d);
	~Multime();

	void adauga(int el);
	void extrage(int el);
	void afisare();

	void operator+=(int x);
	void  operator-=(int x);

	Multime& operator=(const Multime& m);

	Multime operator+=(const Multime& m);
	
};

