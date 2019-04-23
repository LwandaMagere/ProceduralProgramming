#include <iostream>

using namespace std;
char * buildstr(char c, int n);

int main()
{
	int times;
	char ch;
	
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+',  5);  // reuse pointer
	cout << ps << "-DONE-" << ps << endl;
	delete [] ps; // free memory
	return 0;
}

char * buildstr(char c, int n)
{
	char * pstr = new char[n +1];
	pstr[n + 1] = '\0'; // terminating string
	while (n--> 0)
		pstr[n] = c; // fill the rest of string
	return pstr;
}
