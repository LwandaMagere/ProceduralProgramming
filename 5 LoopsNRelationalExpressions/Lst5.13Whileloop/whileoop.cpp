// while loop
#include <iostream>

using namespace std;
const int ArSize = 20;
int main()
{
	char name[ArSize];
	
	cout << "Your first name please: ";
	cin >> name;
	cout << "Here is your first name ";
	int i = 0;  // start at the beginning of string
	while (name[i] != '\0') // procesess to the end of the string
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}
