//#include "Figura.h"
#include "Dreptunghi.h"
#include "Triunghi.h"
#include "Cerc.h"

int main()
{
	/*cout << "\nFigura:\n";
	Figura* f1 = new Figura();
	Figura* f2 = new Figura("rosu");
	f1->Afisare();
	f2->Afisare();*/

	cout << "\nDreptunghi:\n";
	Dreptunghi* d1 = new Dreptunghi();
	Dreptunghi* d2 = new Dreptunghi("albastru", 12, 6);
	d1->Afisare();
	d2->Afisare();
	cout << "\nAria lui d1: " << d1->Aria();
	cout << "\nAria lui d2: " << d2->Aria();
	cout << "\nPerimetrul lui d1: " << d1->Perimetru();
	cout << "\nPerimetrul lui d2: " << d2->Perimetru();

	cout << "\nPoliformism:\n";
	int n = 6;
	Figura** vf = new Figura * [n];
	vf[0] = new Dreptunghi();
	vf[1] = new Dreptunghi("verde", 18, 5);
	vf[2] = new Cerc("albastru", 10, 5, 5);
	vf[3] = new Cerc("negru", 18, 20, 6);
	vf[4] = new Triunghi("verde", 10, 2, 6);
	vf[5] = new Triunghi("portocaliu", 8, 20, 6);

	for (int i = 0; i < n; i++)
		vf[i]->Afisare();


	Figura* figMax1 = figCuArieMax(vf, n);
	Figura* figMax2 = figCuPerimetruMax(vf, n);
	cout << endl << endl;
	cout << " Dintre figurile:" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << i << ". ";
		vf[i]->Afisare();
	}
	cout << endl << " aria maxima o are:" << endl;
	figMax1->Afisare();
	cout << endl << " perimetrul maxim il are:" << endl;
	figMax2->Afisare();

	cout << endl;
	sortare(vf, n);
	cout << " Dupa sortare: " << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << i << ". ";
		vf[i]->Afisare();
	}


	cout << "\n Eliberare memorie:\n";
	//delete f1;
	//delete f2;
	delete d1;
	delete d2;
	for (int i = 0; i < n; i++)
		delete vf[i];
	if (vf)
		delete[] vf;
	vf = 0;
	cout << endl << endl;
	return 0;
}
