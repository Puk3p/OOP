#include "PersoanaAC.h"
PersoanaAC::PersoanaAC() {
	cout << "\nPersoanaAC();";
	m_sCnp = "";
	m_sNume = "";
	m_sAdresa = "";
}
PersoanaAC::PersoanaAC(string cnp, string nume, string adresa) {
	cout << "\nPersoanaAC arg(" << cnp << ", " << nume << ", " << adresa << ");";
	m_sCnp = cnp;
	m_sNume = nume;
	m_sAdresa = adresa;
}
PersoanaAC::~PersoanaAC() {
	cout << "\n~PersoanaAC;()";
	m_sCnp = "";
	m_sNume = "";
	m_sAdresa = "";
}
void PersoanaAC::afisareProfil() {
	cout << "\nPersoanaAC: \n\tNume: " << m_sNume << "\n\tCNP: " << m_sCnp << "\n\tAdresa: " << m_sAdresa;
}
void PersoanaAC::schimbareAdresa(string adresaNoua) {
	m_sAdresa = adresaNoua;
}
