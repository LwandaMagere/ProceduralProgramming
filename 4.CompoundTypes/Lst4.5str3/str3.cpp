#include <iostream>

using namespace std;

int main()
{
	const int Arsize = 20;
	char name[Arsize];
	char dessert[Arsize];
	
	cout << "Enter your name:\n";
	cin.get(name, Arsize).get();  // read string, newline
	cout << "Enter your favourite dessert:\n";
	cin.get(dessert, Arsize).get();
	cout << "I have some delicious " << dessert;
	cout << "for you, " << name << endl;
	return 0;
}
