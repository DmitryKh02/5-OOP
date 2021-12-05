#pragma once
#include <iostream>
#include<ostream>

class Norm 
{
protected:
	double a, b;
public:

	Norm(double first = 0, double second = 0);

	void setA(double _a);
	void setB(double _b);

	double getA();
	double getB();

	virtual double numberModule() = 0;
	virtual double numberRate() = 0;
};