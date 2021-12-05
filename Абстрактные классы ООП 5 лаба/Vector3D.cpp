#include "Vector3D.h"

Vector3D::Vector3D() : Norm()
{
	c = 0;
}

Vector3D::Vector3D(double first, double second, double third) : Norm(first, second)
{
	c = third;
}



void Vector3D::setC(double value)
{
	c = value;
}

double Vector3D::getC()
{
	return c;
}



double Vector3D::numberModule()
{
	return pow((pow(a,2)+pow(b,2)+pow(c,2)),0.5);
}

double Vector3D::numberRate()
{
	double result = c;
	if (abs(a) >= abs(b))
	{
		if (abs(a) >= abs(c)) result = a;
	}
	else
		if (abs(b) >= abs(c)) result = b;

	return abs(result);
}



std::ostream& operator<<(std::ostream& out, Vector3D& obj)
{
	out << "\nA: " << obj.getA() << "\nB: " << obj.getB() << "\nC: " << obj.getC();
	return out;
}

std::istream& operator>>(std::istream& in, Vector3D& obj)
{
	double value = 0;

	std::cout << "\nEnter A: ";
	in >> value;
	obj.setA(value);

	std::cout << "\nEnter B: ";
	in >> value;
	obj.setB(value);

	std::cout << "\nEnter C: ";
	in >> value;
	obj.setC(value);

	return in;
}
