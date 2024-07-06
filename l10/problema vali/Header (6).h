#pragma once
#include <iostream>

using namespace std;

template <typename T>

class Multime
{
private:
		T* m = nullptr;
		int dim;
public:
	Multime(T* m, int dim = 2)
	{
		this->m = new T[dim];
		this->dim = dim;
		for (int i = 0;i < dim;i++)
		{
			this->m[i] = m[i];
		}

	}
	Multime(const Multime &obj)
	{
		this->m = new T[obj.dim];
		this->dim = obj.dim;
		for (int i = 0;i <dim;i++)
		{
			this->m[i] = obj.m[i];
		}
	}

	~Multime()
	{
		if (m)
		{
			delete[] m;
		}
	}

	void afisare()
	{
		for (int i = 0;i < dim;i++)
		{
			cout << m[i] << " ";
		}
		cout << endl;
	}

	T operator! ()
	{
		T max = m[0];
		for (int i = 1;i < dim;i++)
		{
			if (m[i] > max)
				max = m[i];
		}
		return max;
	}

	Multime operator+(const Multime &m1)
	{
		Multime rez(m1);
		for (int i = 0;i < dim;i++)
		{
			rez.m[i] = this->m[i] + m1.m[i];
		}
		return rez;

	}
};

template <typename A>

A Aduna(A k, A l)
{
	return k + l;
}