#include"header.h"
#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int LitereMari(string a)
{
	int i, nr = 0;
	for (i = 0; i < size(a); i++)
		if (isupper(a[i]))
			nr++;
	return nr;
}
int Cifre(string a)
{
	int nr = 0;
	for (string::iterator it = a.begin(); it != a.end(); ++it)
		if (isdigit(*it))
			nr++;
	return nr;

}