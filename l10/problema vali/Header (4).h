#pragma once
#include <iostream>

using namespace std;

template <typename T>
class MyVector
{
	T* elem;
	int nrElem;
public:
	MyVector(int n)
	{
		nrElem = n;
		elem = new T[n];
	}
	~MyVector()
	{
		if (elem)
			delete[] elem;
	}
	//supraincarcarea operatorului de indexare:
	T& operator[](int index)
	{
		return elem[index];
	}

	
	void afisare()
	{
		for (int i = 0; i < nrElem; ++i)
		{
			cout << elem[i] << " ";
		}
	}
	void Sortare(T* a, int n)
	{
		for (int i = 0;i < n;i++)
			for (int j = i;j < n;j++)
				if (a[i] > a[j])
				{
					swap(a[i], a[j]);
				}
		//return a;
	}
};

template <typename S>

S Sortare(S* a, int n)
{
	for (int i = 0;i < n;i++)
		for (int j = i;j < n;j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
	return a;
}