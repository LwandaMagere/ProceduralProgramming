#include <iostream>

int main()
{
  int yams[3]; // creates array with three elements
  yams[0] = 7; // assign value to the first element
  yams[1] = 8;
  yams[2] = 6;
  
  int yamcosts[3] = {20, 30, 5};  // create, initialize array
  //NOTE if your C++ compiler or translator can't initialize
  // this array, use static int yamcosts[3] instead of 
  // int yamcosts[3]
  std::cout << "Total yams = ";
  std::cout << yams[0] + yams[1] + yams[2] << std::endl;
  std::cout << "The package with " << yams[1] << "yams costs ";
  std::cout << yamcosts[1] << " cents per yam.\n";
  int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
  total = total + yams[2] * yamcosts[2];
  std::cout << "The total yam expense is " << total << " cents.\n";
  
  std::cout << "\nSize of yams array = " << sizeof yams;
  std::cout << " bytes.\n";
  
  
 
	
	return 0;
}
