LISTING 6.14
cingolf.cpp
// cingolf.cpp -- non-numeric input skipped
#include <iostream>
const int Max = 5;
int main()
{
using namespace std;
// get data
int golf[Max];
cout << “Please enter your golf scores.\n”;
cout << “You must enter “ << Max << “ rounds.\n”;
int i;
for (i = 0; i < Max; i++)
{
cout << “round #” << i+1 << “: “;
while (!(cin >> golf[i])) {
cin.clear();
// reset input
while (cin.get() != ‘\n’)
continue;
// get rid of bad input
cout << “Please enter a number: “;
}
}
// calculate average
double total = 0.0;
for (i = 0; i < Max; i++)
total += golf[i];
// report results
cout << total / Max << “ = average score “
<< Max << “ rounds\n”;
return 0;
}
/*If the user enters 88 , the cin expression is true , a value is placed in the array, the expression
!(cin >> golf[i]) is false , and this inner loop terminates. But if the user enters must i? ,
the cin expression is false , nothing is placed into the array, the expression !(cin >>
golf[i]) is true , and the program enters the inner while loop. The first statement in the loop
uses the clear() method to reset input. If you omit this statement, the program refuses to
read any more input. Next, the program uses cin.get() in a while loop to read the remaining
input through the end of the line. This gets rid of the bad input, along with anything else on
the line. Another approach is to read to the next whitespace, which gets rid of bad input one
word at a time instead of one line at a time. Finally, the program tells the user to enter a
number.*/
