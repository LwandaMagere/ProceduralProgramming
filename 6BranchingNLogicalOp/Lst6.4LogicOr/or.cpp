// using logical OR operator
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	cout << "This program may reformat your hard disk\n"
	        "and destroy all your data.\n"
	        "Do you wish to continue? <y/n> ";
	 char ch;
	 cin >> ch;
	 if (ch == 'y' || ch == 'N')
	      cout << "You were warned!\a\a\n";
	 else if (ch == 'n' || ch == 'N')
	      cout << "A wise choice...bye\n";
	 else
	    cout << "That wasn't a y or an n, so I guess I'll "
	            "trash your disk anyway.\a\a\a\a\n";
	return 0;
}
