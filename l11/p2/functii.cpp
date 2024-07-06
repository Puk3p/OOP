#include "header.h"

using namespace std;

StudentAC::StudentAC()
{
	this->nume = "";
	this->nota = 0;
}

StudentAC::StudentAC(string nume, int nota)
{
	this->nume = nume;
	this->nota = nota;
}

void StudentAC::afisare()
{
	cout << "Numele studentului:" << this->nume << endl;
	cout << "Nota studentului:" << this->nota << endl;
}

void StudentAC::modificareNota(int nouaNota)
{
	this->nota = nouaNota;
}
bool StudentAC::operator<(const StudentAC& st)
{
	if (this->nota < st.nota)
		return true;
	return false;
}
void AfisareVector(vector<StudentAC> vect)
{
	for (int i = 0; i < vect.size(); i++)
		vect[i].afisare();
}



