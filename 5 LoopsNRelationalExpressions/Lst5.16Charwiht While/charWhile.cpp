// reading char with a while loop
#include <iostream>
using namespace std;

int main()
{
	char ch;
	int count = 0; // use basic input
	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch) ; // get a character
	while (ch != '#') // test the character
	{
		cout << ch; // echo character
		++count;
		cin.get(ch); // get the next character
	}
	cout << endl << count << "character read\n";
	return 0;
}
/*Note the structure of the program in Listing 5.16. The program reads the first input character
before it reaches the loop. That way, the first character can be tested when the program reaches
the loop statement. This is important because the first character might be # .*/
