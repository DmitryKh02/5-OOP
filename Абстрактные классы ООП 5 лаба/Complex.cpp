#include "Complex.h"

Complex::Complex() :Norm()
{

}

Complex::Complex(double first, double second) : Norm(first, second)
{

}



double Complex::numberModule()
{
	return pow((pow(a, 2) + pow(b, 2)), 0.5);
}

double Complex::numberRate()
{
	return pow(numberModule(), 2);
}



std::ostream& operator<<(std::ostream& out, Complex& obj)
{
	out << "\nReal part:" << obj.getA() << "\nImaginary part:" << obj.getB();
	return out;
}

std::istream& operator>>(std::istream& in, Complex& obj)
{
	double value = 0;

	std::cout << "\nEnter real part: ";
	in >> value;
	obj.setA(value);

	std::cout << "\nEnter imaginary part: ";
	in >> value;
	obj.setB(value);

	return in;
}
