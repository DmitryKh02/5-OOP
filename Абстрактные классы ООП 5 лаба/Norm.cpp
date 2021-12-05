#include "Norm.h"

Norm::Norm(double first, double second)
{
	a = first;
	b = second;
}

void Norm::setA(double _a)
{
	a = _a;
}

void Norm::setB(double _b)
{
	b = _b;
}

double Norm::getA()
{
	return a;
}

double Norm::getB()
{
	return b;
}

