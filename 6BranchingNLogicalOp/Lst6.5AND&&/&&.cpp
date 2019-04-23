// using the logical AND operator
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
const int ArSize = 6;

int main()
{
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
	     << "of\nyour neighbors. Program terminates "
	     << "when you make\n" << ArSize << " entries "
	     << "or enter a negative value.\n";
	 
	 int i = 0;
	 float temp;
	 cout << "First value: ";
	 cin >> temp;
	 while (i < ArSize && temp >=0) // 2 quitting criteria
	 {
		 naaq[i] = temp;
		 ++i;
		 if (i < ArSize)   // room left in the array
		 {
			 cout << "Next value: ";
			 cin >> temp; // so get next value
		 }
	 }
	 if (i == 0)
	      cout << "No data--bye\n";
	 else
	 {
		 cout << "Enter your NAAQ: ";
		 float you;
		 cin >> you;
		 int count = 0;
		 for (int j = 0; j < i; j++)
		       if (naaq[j] > you)
		             ++count;
         cout << count;
         cout << " of your neighbors have greater awareness of \n"
              << "the New Age than you do.\n";
         
         
         
         /*Note that the program in Listing 6.5 places input into the temporary variable temp . Only after
it verifies that the input is valid does the program assign the value to the array.*/
         
         
         
	  }
	return 0;
}
/*The program begins by reading the first input value into a temporary variable called temp .
Then the while test condition checks whether there is still room left in the array ( i < ArSize )
and whether the input value is nonnegative ( temp >= 0 ). If it is, the program copies the temp
value to the array and increases the array index by one. At that point, because array numbering
starts at zero, i equals the total number of entries to date. That is, if i starts out at 0 , the first
cycle through the loop assigns a value to naaq[0] and then sets i to 1 .
The loop terminates when the array is filled or when the user enters a negative number. Note
that the loop reads another value into temp only if i is less than ArSize —that is, only if there
is still room left in the array.
After it gets data, the program uses an if else statement to comment if no data was entered
(that is, if the first entry was a negative number) and to process the data if any is present.*/
