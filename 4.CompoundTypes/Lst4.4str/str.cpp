#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int Arsize = 20;
	
	char name[Arsize];
	char dessert[Arsize];
	
	cout << "Enter your name:\n";
	cin.getline(name, Arsize); // reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, Arsize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << endl;
	return 0;
}
