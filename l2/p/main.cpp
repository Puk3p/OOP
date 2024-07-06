#include<iostream>
#include<stdio.h>
#include"header.h"
using namespace std;

int main()
{
	int i;
	char v[100];
	char* sir;
	cout << "introduceti nr studenti: ";
	cin >> i;
	cin.ignore(100, '\n');
	cin.getline(v, 100);
	sir = new char[strlen(v) + 1];
	strcpy_s(sir, strlen(v) + 1, v);

	return 0;

}