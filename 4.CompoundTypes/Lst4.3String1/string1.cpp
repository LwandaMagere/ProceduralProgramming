#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	
	cout << "Enter your name:\n";
	cin.getline(name, 20);
	cout << "Enter your favorite dessert:\n ";
	cin.getline(dessert, 20);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << endl;
	return 0;
}



















