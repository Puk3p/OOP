#include"MultimeComplexe.h"
using namespace std;

MultimeComplexe::MultimeComplexe()
{
	cout << "\n MultimeComplexe()";
	dim = 20;
	n = 0;
	v= new int[dim];

}

MultimeComplexe::MultimeComplexe(int d)
{
	cout << "\n Multime(" << d << ");";
	dim = d;
	n = 0;
	v= new int[dim];
}

