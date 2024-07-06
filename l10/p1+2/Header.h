#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Vector
{
	T* el;
	int nrEl;
public:
	Vector(int n);
	~Vector();
	T& operator[](int in);
	void afisare();
	void Sortare(T* a, int n);
};

template <typename A>

A Sortare(A* a, int n);

template <typename T>
class Multime
{
private:
	T* m = nullptr;
	int dim;
public:
	Multime(T* m, int dim = 2);
	Multime(const Multime& obj);
	~Multime();
	void afisare();

};
