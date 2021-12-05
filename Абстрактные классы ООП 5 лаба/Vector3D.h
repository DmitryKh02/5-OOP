#pragma once
#include "Norm.h" 

class Vector3D : public Norm
{
private:
	double c;
public:
	Vector3D();

	Vector3D(double first, double second, double third);

	void setC(double value);
	double getC();

	virtual double numberModule();
	virtual double numberRate();

	friend std::ostream& operator<<(std::ostream& out, Vector3D& obj);
	friend std::istream& operator>>(std::istream& in, Vector3D& obj);
};