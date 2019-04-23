#include <iostream>

void simon(int); // a function prototype for simon()

int main()
{
	simon(3); // call the simon() function
	std::cout << "Pick an integer";
	int count;
	std::cin >> count;
	simon(count); // call it again
	std::cout << "Done!" << std::endl;
	return 0;
}

void simon(int n)
{
	std::cout << "Simon says touch your toes " << n << " times." << std::endl;
	
}
