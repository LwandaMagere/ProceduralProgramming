#include <iostream>
using std::cout;
using std::endl;

int main()
{
	double * p3 = new double [3]; // space for 3 doubles
	p3[0] = 0.2;         // treat p3 like an array name
	p3[1] = 0.5;
	p3[2] = 0.8;
	
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1; // increament the pointer
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 -1; // point back to the beginning
	delete [] p3; // free the memory
	return 0;
}
