#include <iostream>

using namespace std;

int main()
{
	int rats;
    int	&rodents = rats; // rodents is a reference
    
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
 //   rodents++;
    cout << "rats = " << rodents << endl;
    
    // some implementation requre type casting the following addresses to type unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
	return 0;
}
