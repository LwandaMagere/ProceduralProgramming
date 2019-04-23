// comparing strinfs using arrays
#include <iostream>
#include <cstring>
using std::cout;
using std::endl;

int main()
{
	char word[5] = "?ate";
	
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
/*Also, the code in Listing 5.11 assumes that the
system uses the ASCII character code set. In that set, the codes for the letters a through z are con-
secutive, and the code for the ? character immediately precedes the code for a.*/
