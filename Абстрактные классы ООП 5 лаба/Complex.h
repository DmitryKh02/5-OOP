#pragma once
#include "Norm.h"

class Complex : public Norm
{
public: 
	Complex();

	Complex(double first, double second);

	virtual double numberModule();
	virtual double numberRate();

	friend std::ostream& operator<<(std::ostream& out, Complex& obj);
	friend std::istream& operator>>(std::istream& in, Complex& obj);
};