#include "Complex.h"
#include "Vector3D.h"

int main()
{
	Norm* pointer = new Complex;

	std::cout << "Moudle and rate of numbers!(Complex or Vector3D)";
	
	std::cin >> (*dynamic_cast<Complex*>(pointer));
	std::cout << (*dynamic_cast<Complex*>(pointer));

	std::cout << "\nModule Complex number: " << pointer->numberModule();
	std::cout << "\nRate Complex number:" << pointer->numberRate();
	delete pointer;

	std::cout << "\n____________________________________";

	pointer = new Vector3D(0,0,0);

	std::cin >> (*dynamic_cast<Vector3D*>(pointer));
	std::cout << (*dynamic_cast<Vector3D*>(pointer));

	std::cout << "\nRate Vector3D: " << pointer->numberRate();
	std::cout << "\nModule Vector3D: " << pointer->numberModule();

	std::cout << "\n____________________________________";

	delete pointer;
	pointer = nullptr;
	
	std::cin.ignore().get();
	return 0;
}