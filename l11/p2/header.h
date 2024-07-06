#pragma once
#include <iostream>

using namespace std;
#pragma once
#include <vector>
class StudentAC
{
	string nume;
	int nota;
public:
	StudentAC();
	StudentAC(string nume, int nota);
	void afisare();
	void modificareNota(int nouaNota);
	bool operator<(const StudentAC& st);
};
void AfisareVector(vector<StudentAC> vect);
