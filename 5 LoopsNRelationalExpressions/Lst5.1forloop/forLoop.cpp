// introducing the for loop
#include <iostream>
using namespace std;
int main()
{
	int i; // create a counter
  // initialize; test; update
   for (i = 0; i < 5; i++)
	    cout << "C++ knows loops.\n";
   cout << "C++ knows when to stop.\n";
		
	return 0;
}

/*This loop begins by setting the integer i to 0:
i = 0
This is the loop initialization part of the loop. Then, in the loop test, the program tests whether
i is less than 5:
i < 5
If it is, the program executes the following statement, which is termed the loop body:
cout << “C++ knows loops.\n”;
Then, the program uses the loop update part of the loop to increase i by 1:
i++*/

/*Next, the loop begins a new cycle by comparing the new i value with 5. Because the new
value (1) is also less than 5, the loop prints another line and then finishes by incrementing i
again. That sets the stage for a fresh cycle of testing, executing a statement, and updating the
value of i . The process continues until the loop updates i to 5. Then the next test fails, and
the program moves on to the next statement after the loop.*/
