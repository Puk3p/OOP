#pragma once

#include "StudentAC.h"

class StudentMaster : public StudentAC {
	string m_sNumeDisertatie;
public:
	StudentMaster();
	StudentMaster(string cnp, string nume, string adresa, int anStudiu, int notaPOO, string numeDisertatie);
	~StudentMaster();



};