// using clock() in a time-delay loop
#include <iostream>
#include <ctime> // describe clock() function, clock_t type
using namespace std;

int main()
{
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; // convert to clock ticks
	cout << "starting\a\a\a\a\a\a\n";
	clock_t start = clock();
	while (clock() - start < delay) // wait until time elapses
					; // note the semicolon
				cout << "done \a\a\a\a\a\n";
		
	
	return 0;
}
/*By calculating the delay time in system units instead of in seconds, the program in Listing 5.14
avoids having to convert system time to seconds in each loop cycle.*/
