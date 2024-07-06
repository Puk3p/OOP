#pragma once


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
};
