#include <iostream>
#include <climits>
#define ZERO 0 // makes ZERO symbol for 0 value

using std::cout;
using std::cin;
using std::endl;

int main()
{
	short sam = SHRT_MAX; // intialize a variable to max value
	unsigned short sue = sam; // okay if variable sam already defined
	
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
	     << "Add $1 to each account." << endl <<"Now ";
	  
	sam = sam + 1;
	sue = sue + 1;
	cout << " Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam! " << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << "dollars and Sue has " << sue;
	cout << "Take $ from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << "dollars deposited." << endl << "Lucky Sue!" << endl;
	    
	return 0;
}
