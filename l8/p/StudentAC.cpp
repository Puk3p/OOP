#include "StudentAC.h"

StudentAC::StudentAC() :PersoanaAC() {
	cout << "\nStudentAC();";
	m_iAnStudiu = 2;
	m_iNotaPOO = 0;
}
StudentAC::StudentAC(string cnp, string nume, string adresa, int anStudiu, int notaPOO) : PersoanaAC(cnp, nume, adresa) {
	cout << "\nStudentAC arg(" << cnp << ", " << nume << ", " << adresa << ", " << anStudiu << ", " << notaPOO << ");";
	m_iAnStudiu = anStudiu;
	m_iNotaPOO = notaPOO;
}
StudentAC::~StudentAC() {
	cout << "\n~StudentAC()";
	m_iAnStudiu = -1;
	m_iNotaPOO = -1;
}
void StudentAC::afisareProfil() {
	PersoanaAC::afisareProfil();
	cout << "\n\tAn studiu: " << m_iAnStudiu;
	cout << "\n\tNota POO: " << m_iNotaPOO;
}
void StudentAC::inscriereAnStudiu(int anNou) {
	m_iAnStudiu = anNou;
}

StudentAC* StudentAC::compararaNote(StudentAC &student) {

	if (student.m_iNotaPOO > this->m_iNotaPOO)
	{
		return &student;
	}
	else
	{
		return this;
	}
}
