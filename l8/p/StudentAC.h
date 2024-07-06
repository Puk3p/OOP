#pragma once
#include "PersoanaAC.h"


class StudentAC : public PersoanaAC
{
	int m_iAnStudiu;
	int m_iNotaPOO;
public:
	StudentAC();
	StudentAC(string cnp, string nume, string adresa, int anStudiu, int notaPOO);
	~StudentAC();
	void afisareProfil();
	void inscriereAnStudiu(int anStudiuNou);
	StudentAC* compararaNote(StudentAC &);
};

