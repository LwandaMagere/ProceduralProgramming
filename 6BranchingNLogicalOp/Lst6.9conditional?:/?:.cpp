// conditional operator
#include <iostream>

int main()
{
	int a, b;
	std::cout << "Enter two intergers: ";
	std::cin >> a >> b;
	std::cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b; 
	std::cout << " is " << c << std::endl;
	return 0;
}
/*One favorite trick for the reprehensible goal of concealing the purpose of code is to
nest conditional expressions within one another, as the following mild example shows:
const char x[2] [20] = {“Jason “,”at your service\n”};
const char * y = “Quillstone “;
for (int i = 0; i < 3; i++)
cout << ((i < 2)? !i ? x [i] : y : x[1]);
This is merely an obscure (but, by no means maximally obscure) way to print the three strings
in the following order:
Jason Quillstone at your service*/
