#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int higgens = 5;
	int * pt = &higgens;
	
	cout << "Value of higgens kama kawa tano = " << higgens
	     << "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt ni tano = " << *pt
	     << "; Value of pt ni Address Bwana = " << pt << endl;
	return 0;
}
