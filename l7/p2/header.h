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
	void operator+=(int);
    void operator-=(int);
	Multime operator+(Multime);
	//bool operator=(Multime);
	//void operator+=(Multime);
	
};
