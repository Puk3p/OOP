#include<iostream>
#include<stdio.h>
#include"header.h"
using namespace std;

void student::Read()
{
	
	cout << "nr matricol este:\n";
	cin >> nr;
	cout << "numele este:\n";
	cin >> nume;
	cout<< "genul este:\n";
	cin >>gen;
	cout << "nota este:\n";
	cin >>nota;

}

void student::Write()
{
	
	cout<< nr;
	cout << nume;
	cout << gen;
	cout << nota;
	

}