#include "StudentMaster.h"


StudentMaster::StudentMaster()
{
	m_sNumeDisertatie = "";
	cout << "constructor Student Matster fara argumente" << endl;
}

StudentMaster::StudentMaster(string cnp, string nume, string adresa, int anStudiu, int notaPOO, string numeDiz)
	: StudentAC(cnp, nume, adresa, anStudiu, notaPOO)
{
	m_sNumeDisertatie = numeDiz;
	cout << "constructor Student Master cu argumente" << endl;
}

StudentMaster::~StudentMaster()
{
	cout << "destructor Student Master" << endl;
}
