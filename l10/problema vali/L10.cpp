#include "Header.h"
#include <iostream>

void main()
{
	int n = 10;
	MyVector<int> vectorI(n); //un vector de numere intregi
	MyVector<float> vectorF(n); //un vector de numere reale
	for (int i = 0; i < n; i++)
	{
		/* accesam elementele din membrul privat elem
		prin intermediul operatorului [] supraincarcat in clasa */
		vectorI[i] = i + 1;
		vectorF[i] = 1.5 * i;
	}
	
	cout << "Primul Vector" << endl;
	vectorI.afisare();
	cout << endl<<"Al doilea vector" << endl;
	vectorF.afisare();
	cout << endl;

	//Sortare<float>(vectorF, n);

}