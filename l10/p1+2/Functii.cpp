# include"Header.h"
using namespace std;

template <typename T>Vector<T>::Vector(int n)
{
	nrEl = n;
	el = new T[n];
	
}

template <typename T>Vector<T>::~Vector()
{
	if (el)
		delete[] el;
}

template<typename T>T& Vector<T>::operator[](int in)
{
	return el[in];
}


template<typename T>void Vector<T>::afisare()
{
	for (int i = 0; i < nrEl; ++i)
	{
		cout << el[i] << " ";
	}
}

template<typename T>void Vector<T>::Sortare(T* a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
}

template<typename A>inline A Sortare(A* a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
	return a;
}

template<typename T>inline Multime<T>::Multime(T* m, int dim)
{
	this->m = new T[dim];
	this->dim = dim;
	for (int i = 0; i < dim; i++)
	{
		this->m[i] = m[i];
	}
}

template<typename T>inline Multime<T>::Multime(const Multime& obj)
{
	this->m = new T[obj.dim];
	this->dim = obj.dim;
	for (int i = 0; i < dim; i++)
	{
		this->m[i] = obj.m[i];
	}
}

template<typename T>Multime<T>::~Multime()
{
	if (m)
	{
		delete[] m;
	}
}

template<typename T>void Multime<T>::afisare()
{
	for (int i = 0; i < dim; i++)
	{
		cout << m[i] << " ";
	}
	cout << endl;
}


