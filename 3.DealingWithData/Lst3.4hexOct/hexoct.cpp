#include <iostream>


int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	
	std::cout << "Monsieur cuts a striking figure!" << std::endl;
	std::cout << "chest = " << chest << " (decimal)" << std::endl;
	std::cout << std::hex;   // manipulator for changing number base
	std::cout << "waist = " << waist << " hexadecimal" << std::endl;
	std::cout << std::oct;
	std::cout << "inseam = " << inseam << " (octal)" << std::endl;
	return 0;
}
