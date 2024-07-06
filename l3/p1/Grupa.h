#pragma once

#include "student.h"

typedef int(*PFnComparare)(Student a, Student b);

struct Grupa {
	//DUPA realizarea sarcinilor de lucru din cadrul laboratorului se pot//"ascunde" campurile de tip date astfel incat accesul catre ele sa fie realizate prin metode accesor/mutator
	int nrStud;
	Student* tabStudenti; //alocat dinamic in cadrul functiei de citire. eliberat de catre functia de eliberare
	char* numeGrupa;//denumirea grupei: 1208B, 1207A etc.
	void citire(void);    //DECLARATIA metodei de citire => PROTOTIPUL functiei
	void afisare(void);   //DECLARATIA metodei de afisare => PROTOTIPUL functiei
	PFnComparare comparator; //pointer catre o functie de comparatie, definita global//acest pointer va fi setat de catre un "obiect" de tip structura Catalog, pentru fiecare grupa in parte.
	void bSort(void); //nu mai e necesar pointerul la functia de comparatie ca parametru,//deoarece este camp al "obiectului" curent de tip grupa!
	void elibMem(void); //a se vedea implementarea!
};

