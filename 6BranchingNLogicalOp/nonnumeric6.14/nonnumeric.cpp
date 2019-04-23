// non-numeric input terminates loop
#include <iostream>
using namespace std;

const int Max = 5;

int main()
{
	double fish[Max];
	cout << "Please enter the weight of your fish.\n";
	cout << "You may enter up to " << Max
	     << "fish <q to terminate>.\n";
	cout << "fish #1:";
	int i = 0;
	while (i < Max && cin >> fish[i])
	{
		if (++i < Max)
		   cout <<  "fish #" <<  i + 1 << ": ";
	}
	// calculate average
	   double total = 0.0;
	   for (int j = 0; j < i; j++)
	        total += fish[j];
	// report result
	    if (i == 0)
	       cout << "No fish\n";
	    else
	       cout << total / i << " = average weight of "
	            << i << " fish\n";
	    cout << "Done.\n";
	    return 0;
}
/*The expression cin >> fish[i] in Listing 6.13 is really a cin method function call, and the
function returns cin . If cin is part of a test condition, it’s converted to type bool . The conver-
sion value is true if input succeeds and false otherwise. A false value for the expression ter-
minates the loop.*/
