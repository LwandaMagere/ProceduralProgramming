#include <iostream>

using std::cout;



void simple(); // function prototype

int main()
{
	cout << "main() will call the simple() function:\n";
	simple(); // function call
	return 0;
}


// function defination
void simple()
{
	cout << "I'm but a simple function.\n";
}
