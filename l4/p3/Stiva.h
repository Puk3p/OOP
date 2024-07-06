#pragma once


class Stiva
{
private:
	int* date;
	int dim;
	int sp;
public:
	Stiva();
	Stiva(int d);
	~Stiva();

	void push(int el);
	int pop();
	int top();
	void print();

};

