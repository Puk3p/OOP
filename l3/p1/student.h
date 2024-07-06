#pragma once
#include <iostream>
using namespace std;

struct Student
{
private:
	//aceste campuri NU vor fi "vizibile" (accesibile) direct din afara structurii
	char* nume;
	int nota;
public:
	int getNota(void); //functie accesor prin care se permite "vederea"notei luate de studentul curent
	void setNota(int v);//functie mutator prin care se seteaza valoarea notei pentru studentul curent
	char* getNume(void);//functie accesor prin care //se permite accesul la pointerul la nume (deja alocat!) pentru studentul curent
	void setNume(char* unNume);//functie mutator prin care se aloca dinamic Z.M. si se va copia continutul sirului//obs.: atentie la numararea caracterelor! Trebuie inclus SI terminatorul de sir '\0'
	void elibMem(void); //eliberam Z.M. ocupata de nume si setam pe NULL pointerul
	void citire(void); //citim, apelam setarile...
	void afisare(void); //afisarea datelor -efectuata cu ajutorul functiilor accesor
};

//declaratii de functii "globale":
int comparNumeAlfabetic(Student a, Student b);
int comparNoteDescrescator(Student a, Student b);
int comparNumeDupaLungimeCrescator(Student a, Student b);

void myswap(Student& a, Student& b);
