#include<iostream>
#include "student.h"
using namespace std;

//functie accesor prin care se permite "vederea"notei luate de studentul curent
int Student::getNota(void)
{
	return nota;
}


void Student::setNota(int v)
//functie mutator prin care se seteaza valoarea notei pentru studentul curent
{
	nota = v;
}


char* Student::getNume(void)
//functie accesor prin care //se permite accesul la pointerul la nume (deja alocat!) pentru studentul curent
{
	return nume;
}

void Student::setNume(char* unNume)//functie mutator prin care se aloca dinamic Z.M. si se va copia continutul sirului//obs.: atentie la numararea caracterelor! Trebuie inclus SI terminatorul de sir '\0'
{
	if (unNume)
	{
		nume = new char[strlen(unNume) + 1];
		strcpy_s(nume, strlen(unNume) + 1, unNume);
	}
	else
		nume = nullptr;
}

void Student::elibMem(void) //eliberam Z.M. ocupata de nume si setam pe NULL pointerul
{
	if (nume)
		delete[] nume;
	nume = nullptr;
}

void Student::citire(void) //citim, apelam setarile...
{
	char buff[100];
	cout << "\n Nume: ";
	cin.getline(buff, 100);
	nume = new char[strlen(buff) + 1];
	strcpy_s(nume, strlen(buff) + 1, buff);
	cout << "\n Nota:";
	cin >> nota;
}

void Student::afisare(void) //afisarea datelor -efectuata cu ajutorul functiilor accesor
{
	cout << "\n Nume: ";
	if (nume)
		cout << nume;
	cout << "\n Nota: " << nota << endl;
}


int comparNumeDupaLungimeCrescator(Student a, Student b)
{
	int rez = strlen(a.getNume()) - strlen(b.getNume());
	if (rez > 0)
		rez = 1;
	else
		if (rez < 0)
			rez = -1;//daca e 0 ramane 0
	return rez;
}
