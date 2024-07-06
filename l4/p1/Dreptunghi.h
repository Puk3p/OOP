#pragma once

#include <iostream>
using namespace std;

class Dreptunghi
{
private:
	int lung, lat;
public:
	Dreptunghi();
	Dreptunghi(int lg, int lt);
	~Dreptunghi();

	void afisare();

	int getLungime();
	void setLungime(int lg);

	int getLatime();
	void getLatime(int lt);

	double aria();
	double perimetru();
};

