#include <iostream>
#include <cstring> // for the strlen() function

using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int Size = 15;
	char name1[Size];         // empty array
	char name2[Size] = "C++owboy"; // initiazed array
	
	cout << "Howdy! I'm " << name2;
	cout << " ! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << endl;
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
