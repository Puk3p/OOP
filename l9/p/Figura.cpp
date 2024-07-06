#include "Figura.h"

Figura::Figura()
{
	cout << "\nFigura();";
	culoare = nullptr;
}

Figura::Figura(const char* cul)
{
	cout << "\nFigura par(";
	if (cul)
	{
		culoare = new char[strlen(cul) + 1];
		strcpy_s(culoare, strlen(cul) + 1, cul);
		cout << cul;
	}
	else
		culoare = nullptr;
	cout << ");";
}

Figura::~Figura()
{
	cout << "\n~Figura();";
	if (culoare)
		delete[] culoare;
	culoare = nullptr;
}

double Figura::Aria()
{
	double rez = 0;

	return rez;
}

double Figura::Perimetru()
{
	double rez = 0;

	return rez;
}

void Figura::Afisare()
{
	cout << "\nCuloare: ";
	if (culoare)
		cout << culoare;
}

Figura* figCuArieMax(Figura** figuri, int n)
{
	float max = 0;
	Figura* figMax = NULL;
	for (int i = 0; i < n; i++) {
		float arie = figuri[i]->Aria();
		if (arie > max)
		{
			max = arie;
			figMax = figuri[i];
		}
	}
	return figMax;
}

Figura* figCuPerimetruMax(Figura** figuri, int n)
{
	float max = 0;
	Figura* figMax = NULL;
	for (int i = 0; i < n; i++) {
		float perimetru = figuri[i]->Perimetru();
		if (perimetru > max)
		{
			max = perimetru;
			figMax = figuri[i];
		}
	}
	return figMax;
}

void sortare(Figura** figuri, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (figuri[i]->Aria() < figuri[j]->Aria())
			{
				Figura* aux;
				aux = figuri[i];
				figuri[i] = figuri[j];
				figuri[j] = aux;
			}
		}
	}
}