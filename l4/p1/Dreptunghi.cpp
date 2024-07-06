#include "Dreptunghi.h"

Dreptunghi::Dreptunghi()
{
	cout << "\nDreptunghi();";
	lung = 10;
	lat = 5;
}

Dreptunghi::Dreptunghi(int lg, int lt)
{
	cout << "\nDreptunghi(" << lg << "," << lt << ");";
	lung = lg;
	lat = lt;
}

Dreptunghi::~Dreptunghi()
{
	cout << "\n~Dreptunghi();";
	//this->afisare();
	lung = -1;
	lat = -1;
}

void Dreptunghi::afisare()
{
	cout << "\n Dreptunghiul are lungimea: " << lung << " si latimea: " << lat << endl;
}

int Dreptunghi::getLungime()
{
	return lung;
}

void Dreptunghi::setLungime(int lg)
{
	lung = lg;
}


int Dreptunghi::getLatime()
{
	return lat;
}

void Dreptunghi::getLatime(int lt)
{
	lat = lt;
}

double Dreptunghi::aria()
{
	return lung * lat;
}

double Dreptunghi::perimetru()
{
	return 2 * (lung + lat);
}
