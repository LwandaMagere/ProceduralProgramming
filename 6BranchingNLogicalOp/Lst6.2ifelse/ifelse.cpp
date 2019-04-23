// using the if else statement
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	char ch;
	
	cout << "Type, and I shall repeat.\n";
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
		    cout << ch; // done if newline
		else
		   cout << ch++; // done otherwise
		cin.get(ch);
		
	}
	cout << "\nPlease excuse the slight confusion.\n";
	return 0;
}
