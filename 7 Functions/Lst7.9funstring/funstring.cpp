#include <iostream>

using namespace std;

int c_in_str(const char * str, char ch);

int main()
{
	 char mmm[15] = "minimum"; // string in an array
	
 	char *wail = "ululate";  // wail points to string
	
	int ms = c_in_str(mmm, 'm');
	int us = c_in_str(wail, 'u');
	cout << ms << "m characters in " << mmm << endl;
	cout << us << "u characters in " << wail << endl;
	return 0;
}

int c_in_str(const char * str, char ch)
{
	int count = 0;
	
	while(*str)  // quit when *str is '\0'
	{
		if (*str == ch)
			count++;
		str++;         // move pointer to next char
	}
	return count;
}










