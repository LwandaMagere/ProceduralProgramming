// using the not operator
#include <iostream>
#include <climits>
bool is_int(double);
using namespace std;

int main()
{
	double num;
	
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num)) // continue while num is not int-able
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int (num); // type cast
	cout << "You've entered the integer " << val << "\nBye\n";
	return 0;
}

bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return  true;
	else
	   return false;
}

/*If you enter a too-large value to a program reading a type int , many C++ implementations
simply truncate the value to fit, without informing you that data was lost. The program in
Listing 6.7 avoids that by first reading the potential int as a double . The double type has
more than enough precision to hold a typical int value, and its range is much greater.*/



