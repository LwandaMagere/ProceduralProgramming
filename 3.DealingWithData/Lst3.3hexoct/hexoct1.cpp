// hexoct1.cpp -- shows hex and octal constants
#include <iostream>

int main()
{
	int chest = 42; // decimal integer constant
	int waist = 0x42; // hexadecimal
	int inseam = 042; //octal integer constant
	
	std::cout << "Monsieur cuts a striking figure!\n";
	std::cout << "chest = " << chest << std::endl;
	std::cout << "waist = " << waist << std::endl;
	std::cout << "inseam = " << inseam << std::endl;
	
	//By default, cout displays integers in decimal form, regardless of how they are written in a pro-
//gram, as the following output shows: (see pg 100)
	return 0;
}
